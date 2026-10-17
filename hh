
<!doctype html>
<html lang="vi">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<meta name="theme-color" content="#240d25">
<title>Gửi yêu thương | Thiệp 20/10</title>
<link rel="preconnect" href="https://fonts.googleapis.com">
<link href="https://fonts.googleapis.com/css2?family=Caveat:wght@400;600;700&family=Playfair+Display:wght@500;600;700&display=swap" rel="stylesheet">
<style>
:root{--pink:#ff9fca;--rose:#df669c;--ink:#562940;--cream:#fff9f4}
*{box-sizing:border-box}
body{margin:0;min-height:100vh;color:var(--ink);font-family:"Playfair Display",Georgia,serif;
 background:radial-gradient(ellipse at 50% 20%,#733956,#2b142b 52%,#140d20);overflow-x:hidden}
button,input,textarea{font:inherit}
button{cursor:pointer;border:0;border-radius:999px;padding:12px 18px;background:linear-gradient(120deg,#ffb4d4,#dc5c95);color:#42182d;font-weight:bold;box-shadow:0 6px 22px #f07cad35;transition:transform .2s}
button:active{transform:scale(.96)}
button:disabled{opacity:.55;cursor:wait}
.secondary{background:#ffffff13;color:#fff0f7;border:1px solid #ffffff38;box-shadow:none}
header{text-align:center;padding:28px 15px 10px;color:#ffeaf3}
header h1{font-size:clamp(28px,7vw,46px);margin:0;text-shadow:0 0 30px #ff94c780}
header p{font-size:13px;letter-spacing:3px;color:#f0c7d9}
main{width:min(94%,520px);margin:20px auto 45px}
.panel{border:1px solid #ffffff25;background:#ffffff0c;backdrop-filter:blur(14px);padding:22px;border-radius:24px;color:#fff0f6;box-shadow:0 25px 80px #0004}
label{display:block;font-size:14px;margin:13px 0 6px}
input,textarea{width:100%;border-radius:13px;border:1px solid #ffffff35;background:#ffffff12;color:white;padding:12px;outline:none}
input::placeholder,textarea::placeholder{color:#e4c2d3}
textarea{min-height:115px;resize:vertical}
.row{display:flex;flex-wrap:wrap;gap:8px;margin-top:14px}
#status{font:13px Arial,sans-serif;color:#ffd6e8;line-height:1.5;min-height:20px;margin-top:10px;overflow-wrap:anywhere}
.hidden{display:none!important}
#cinema{position:fixed;inset:0;z-index:20;background:radial-gradient(ellipse at 50% 42%,#74405e,#251126 65%,#0c0814);display:grid;place-items:center;text-align:center;padding:25px;color:#fff0f7;transition:opacity 1s,visibility 1s}
#cinema.done{opacity:0;visibility:hidden;pointer-events:none}
.movie{max-width:390px;animation:movieIn 2s both}
.movie .moon{font-size:54px;filter:drop-shadow(0 0 25px #ffb8dc);animation:moonGlow 3s infinite alternate}
.movie h2{font-size:clamp(27px,7vw,39px);line-height:1.35;font-weight:500}
.movie p{color:#eac7d9;line-height:1.8}
@keyframes movieIn{from{opacity:0;transform:translateY(20px);letter-spacing:3px}to{opacity:1;transform:translateY(0);letter-spacing:0}}
@keyframes moonGlow{to{transform:scale(1.08);filter:drop-shadow(0 0 35px #ffb8dc)}}
#stage{text-align:center;padding:0 0 20px;color:#ffeef6}
#stage h2{font-size:27px}
.scene{height:290px;display:grid;place-items:center;perspective:1000px;position:relative}
.halo{position:absolute;width:220px;height:220px;border-radius:50%;background:#e65d9e;filter:blur(65px);opacity:.65;animation:breathe 4s infinite alternate}
@keyframes breathe{to{transform:scale(1.3);opacity:.9}}
.envelope{width:min(290px,80vw);height:180px;position:relative;margin-top:65px;cursor:pointer;filter:drop-shadow(0 20px 22px #0005);transform-style:preserve-3d;animation:float 4s ease-in-out infinite}
@keyframes float{50%{transform:translateY(-9px) rotate(1deg)}}
.back{position:absolute;inset:0;background:#e78eb5;border-radius:8px}
.letter{position:absolute;z-index:2;bottom:7px;left:7%;width:86%;height:153px;overflow:hidden;background:linear-gradient(145deg,#fffdf7,#ffeaf3);border-radius:8px;color:var(--ink);padding:15px 12px;box-shadow:0 3px 15px #4c183222;transition:transform 1s cubic-bezier(.2,.8,.2,1),height 1s}
.letter h3{font-size:22px;margin:0 0 8px}
.letterText{font:clamp(20px,5.5vw,26px)/1.28 "Caveat",cursive;white-space:pre-wrap;overflow-wrap:anywhere;text-align:left;min-height:55px}
.front{position:absolute;inset:0;z-index:4;border-radius:8px;background:linear-gradient(145deg,#ffc4dd,#df669c);clip-path:polygon(0 0,50% 58%,100% 0,100% 100%,0 100%)}
.flap{position:absolute;top:0;left:0;width:100%;height:110px;background:linear-gradient(145deg,#ffdeeb,#f092b9);clip-path:polygon(0 0,100% 0,50% 100%);transform-origin:top;transition:transform .85s;z-index:5}
.seal{position:absolute;z-index:6;left:50%;top:52%;transform:translate(-50%,-50%);width:45px;height:45px;border-radius:50%;display:grid;place-items:center;background:radial-gradient(circle at 30% 25%,#ffeaf3,#c53e7b);color:white;font-size:23px;transition:.3s}
.envelope.open{animation:none}
.envelope.open .flap{transform:rotateX(180deg);z-index:1}
.envelope.open .letter{transform:translateY(-120px);height:215px;z-index:3}
.envelope.open .seal{opacity:0;transform:translate(-50%,-50%) scale(.4)}
#recipientView{font-size:14px;color:#f3c9dc}
#displayMessage{font:clamp(23px,6vw,31px)/1.3 "Caveat",cursive;white-space:pre-wrap;overflow-wrap:anywhere;text-align:left;color:#5b2940;min-height:100px}
.handwriting{animation:ink .45s both}
@keyframes ink{from{opacity:.15;filter:blur(1.5px)}to{opacity:1;filter:blur(0)}}
.petal{position:fixed;top:-30px;pointer-events:none;z-index:30;animation:fall linear forwards}
@keyframes fall{0%{transform:translateY(-5vh) rotate(0);opacity:0}12%{opacity:.9}100%{transform:translate(var(--drift),110vh) rotate(var(--spin));opacity:0}}
footer{text-align:center;color:#e7bfd2;font:12px Arial,sans-serif;padding:0 10px 25px}
@media(prefers-reduced-motion:reduce){*,*:before,*:after{animation-duration:.01ms!important;transition-duration:.01ms!important}}
</style>
</head>
<body>
<header>
 <h1>Gửi một chút yêu thương 🌹</h1>
 <p>HAPPY VIETNAMESE WOMEN'S DAY · 20/10</p>
</header>

<main>
 <section id="creator" class="panel">
  <h2>💌 Tạo một tấm thiệp</h2>
  <p style="font-size:14px;line-height:1.7;color:#eacbda">Mỗi thiệp sẽ có đường link riêng. Hãy viết điều bạn muốn gửi đến người đặc biệt.</p>
  <label for="recipient">Tên người nhận</label>
  <input id="recipient" maxlength="100" placeholder="Ví dụ: Mẹ yêu, Minh Anh...">
  <label for="message">Lời chúc</label>
  <textarea id="message" maxlength="3000" placeholder="Cảm ơn vì đã luôn mang đến những điều đẹp đẽ..."></textarea>
  <div class="row">
   <button type="button" id="create">✨ Tạo thiệp và lấy link</button>
   <button type="button" class="secondary" id="sample">Xem thử</button>
  </div>
  <div id="status" role="status" aria-live="polite"></div>
 </section>

 <section id="stage" class="hidden">
  <p id="recipientView"></p>
  <h2>Một món quà dành riêng cho bạn</h2>
  <div class="scene">
   <div class="halo"></div>
   <div class="envelope" id="envelope" role="button" tabindex="0" aria-label="Mở thiệp">
    <div class="back"></div>
    <div class="letter">
     <h3 id="letterTitle">Gửi bạn 💗</h3>
     <div id="displayMessage" class="letterText"></div>
    </div>
    <div class="front"></div>
    <div class="flap"></div>
    <div class="seal">♥</div>
   </div>
  </div>
  <p style="font-size:13px;color:#e9bfd2">Chạm vào phong bì để mở món quà bí mật</p>
  <div class="row" style="justify-content:center">
   <button type="button" id="open">💌 Mở thiệp</button>
   <button type="button" class="secondary" id="again">↻ Xem lại</button>
   <button type="button" class="secondary" id="share">↗ Chia sẻ link</button>
  </div>
  <div id="viewStatus" role="status" aria-live="polite"></div>
 </section>
</main>
<footer>Một tấm thiệp nhỏ · Một tình cảm thật lớn 💗</footer>

<div id="cinema">
 <div class="movie">
  <div class="moon">🌙</div>
  <h2 id="movieTitle">Có những điều thật đẹp<br>nên được gửi bằng cả trái tim.</h2>
  <p id="movieSubtitle">Một món quà nhỏ đang chờ bạn mở ra…</p>
  <button id="begin">Mở món quà của mình ✨</button>
 </div>
</div>

<script src="https://cdn.jsdelivr.net/npm/@supabase/supabase-js@2"></script>
<script>
const SUPABASE_URL = "https://vcdqurmcgiqjjqccfcdp.supabase.co/rest/v1/";
const SUPABASE_KEY = "sb_publishable_ZSv2fNVGAilLR4p9lLSUUw_kVH_QBE8";

const $ = id => document.getElementById(id);
const configured =
  !SUPABASE_URL.includes("https://vcdqurmcgiqjjqccfcdp.supabase.co/rest/v1/") &&
  !SUPABASE_KEY.includes("sb_publishable_ZSv2fNVGAilLR4p9lLSUUw_kVH_QBE8") &&
  window.supabase;

const db = configured
  ? window.supabase.createClient(SUPABASE_URL, SUPABASE_KEY)
  : null;

let currentCard = null;
let isOpen = false;
let previewMode = false;
let typeTimer = null;

function setStatus(text) {
  $("status").textContent = text;
}
function setViewStatus(text) {
  $("viewStatus").textContent = text;
}
function showStage() {
  $("creator").classList.add("hidden");
  $("stage").classList.remove("hidden");
}
function showCreator() {
  $("stage").classList.add("hidden");
  $("creator").classList.remove("hidden");
  $("cinema").classList.add("done");
}
function updateCard(card) {
  currentCard = card;
  $("recipientView").textContent = "Dành tặng: " + card.recipient;
  $("letterTitle").textContent = "Gửi " + card.recipient + " 💗";
  $("displayMessage").textContent = "";
  $("envelope").classList.remove("open");
  isOpen = false;
  showStage();
}
function typeMessage(text) {
  clearInterval(typeTimer);
  const target = $("displayMessage");
  target.textContent = "";
  let i = 0;
  typeTimer = setInterval(() => {
    target.textContent += text.charAt(i);
    target.classList.remove("handwriting");
    void target.offsetWidth;
    target.classList.add("handwriting");
    i++;
    if (i >= text.length) clearInterval(typeTimer);
  }, 45);
}
function openLetter() {
  if (!currentCard || isOpen) return;
  isOpen = true;
  $("envelope").classList.add("open");
  setViewStatus("");
  setTimeout(() => typeMessage(currentCard.message), 600);
  burst();
}
function closeLetter() {
  clearInterval(typeTimer);
  isOpen = false;
  $("envelope").classList.remove("open");
  $("displayMessage").textContent = "";
  setViewStatus("");
}
function burst() {
  const icons = ["💗","✨","🌸","💕","🌷"];
  for (let i = 0; i < 20; i++) {
    setTimeout(() => {
      const e = document.createElement("span");
      e.className = "petal";
      e.textContent = icons[Math.floor(Math.random()*icons.length)];
      e.style.left = Math.random()*100 + "vw";
      e.style.fontSize = 15 + Math.random()*17 + "px";
      e.style.animationDuration = 3 + Math.random()*3 + "s";
      e.style.setProperty("--drift", (Math.random()-.5)*140 + "px");
      e.style.setProperty("--spin", (Math.random()-.5)*500 + "deg");
      document.body.appendChild(e);
      setTimeout(() => e.remove(), 7000);
    }, i * 45);
  }
}
async function createCard() {
  if (!db) {
    setStatus("Bạn cần điền Supabase URL và publishable key trước.");
    return;
  }
  const recipient = $("recipient").value.trim();
  const message = $("message").value.trim();
  if (!recipient || !message) {
    setStatus("Hãy nhập cả tên người nhận và lời chúc nhé.");
    return;
  }
  if (recipient.length > 100 || message.length > 3000) {
    setStatus("Tên hoặc lời chúc vượt quá độ dài cho phép.");
    return;
  }
  $("create").disabled = true;
  setStatus("Đang lưu thiệp của bạn…");
  try {
    const id = crypto.randomUUID();
    const { error } = await db.from("cards").insert({
      id, recipient, message
    });
    if (error) throw error;
    const url = new URL(location.href);
    url.search = "";
    url.searchParams.set("id", id);
    currentCard = { id, recipient, message };
    history.replaceState({}, "", url);
    updateCard(currentCard);
    $("cinema").classList.remove("done");
    $("movieTitle").innerHTML = "Một món quà nhỏ<br>dành riêng cho " + escapeHtml(recipient) + ".";
    $("movieSubtitle").textContent = "Hãy cùng gửi đi một chút yêu thương.";
    $("begin").textContent = "Xem thiệp của mình ✨";
    setStatus("");
  } catch (err) {
    console.error(err);
    setStatus("Chưa lưu được thiệp. Hãy kiểm tra cấu hình Supabase và thử lại.");
  } finally {
    $("create").disabled = false;
  }
}
function escapeHtml(text) {
  return text.replace(/[&<>"']/g, c => ({
    "&":"&amp;","<":"&lt;",">":"&gt;",'"':"&quot;","'":"&#39;"
  })[c]);
}
async function loadCard(id) {
  if (!db) {
    showCreator();
    setStatus("Website chưa được cấu hình Supabase.");
    return;
  }
  $("creator").classList.add("hidden");
  $("stage").classList.add("hidden");
  $("movieTitle").textContent = "Một lời nhắn đang chờ bạn…";
  $("movieSubtitle").textContent = "Đang tìm tấm thiệp dành riêng cho bạn.";
  $("begin").classList.add("hidden");
  $("cinema").classList.remove("done");
  try {
    const { data, error } = await db.rpc("get_card", { p_id: id });
    if (error) throw error;
    if (!data || !data.id) throw new Error("Card not found");
    currentCard = data;
    updateCard(currentCard);
    $("movieTitle").innerHTML = "Có một điều dễ thương<br>muốn gửi đến " + escapeHtml(data.recipient) + ".";
    $("movieSubtitle").textContent = "Hãy mở món quà bằng cả trái tim.";
    $("begin").textContent = "Mở món quà của mình ✨";
    $("begin").classList.remove("hidden");
  } catch (err) {
    console.error(err);
    $("movieTitle").textContent = "Không tìm thấy tấm thiệp";
    $("movieSubtitle").textContent = "Đường link có thể không đúng hoặc thiệp không còn tồn tại.";
    $("begin").textContent = "Về trang tạo thiệp";
    $("begin").classList.remove("hidden");
    $("begin").onclick = () => {
      history.replaceState({}, "", location.pathname);
      showCreator();
    };
  }
}
async function shareCard() {
  if (!currentCard) return;
  const url = new URL(location.href);
  url.search = "";
  url.searchParams.set("id", currentCard.id);
  const link = url.href;
  try {
    if (navigator.share) {
      await navigator.share({ title:"Thiệp 20/10 💌", text:"Có một tấm thiệp dành cho bạn!", url:link });
      setViewStatus("Đã mở menu chia sẻ.");
    } else {
      await navigator.clipboard.writeText(link);
      setViewStatus("Đã sao chép link thiệp!");
    }
  } catch (err) {
    setViewStatus("Bạn có thể sao chép đường link trên thanh địa chỉ để chia sẻ.");
  }
}
$("create").addEventListener("click", createCard);
$("open").addEventListener("click", openLetter);
$("again").addEventListener("click", closeLetter);
$("share").addEventListener("click", shareCard);
$("envelope").addEventListener("click", openLetter);
$("envelope").addEventListener("keydown", e => {
  if (e.key === "Enter" || e.key === " ") {
    e.preventDefault();
    openLetter();
  }
});
$("sample").addEventListener("click", () => {
  $("recipient").value = "Người đặc biệt";
  $("message").value = "Chúc bạn luôn hạnh phúc, bình an và rực rỡ như những đóa hoa. Cảm ơn vì đã làm thế giới này đẹp hơn. Mong mọi điều dịu dàng nhất sẽ đến với bạn. 🌹";
  setStatus("Đã điền lời chúc mẫu. Bạn có thể chỉnh sửa rồi tạo thiệp.");
});
$("begin").addEventListener("click", () => {
  $("cinema").classList.add("done");
  if (currentCard) {
    closeLetter();
    setViewStatus("Chạm vào phong bì để mở thiệp nhé 💗");
  } else {
    showCreator();
  }
});

// Hiệu ứng hoa rơi nền
function createPetal() {
  const p = document.createElement("span");
  p.className = "petal";
  p.textContent = ["🌸","🌹","🌷","✿"][Math.floor(Math.random()*4)];
  p.style.left = Math.random()*100 + "vw";
  p.style.fontSize = 12 + Math.random()*14 + "px";
  p.style.animationDuration = 8 + Math.random()*8 + "s";
  p.style.setProperty("--drift", (Math.random()-.5)*160 + "px");
  p.style.setProperty("--spin", (Math.random()-.5)*600 + "deg");
  document.body.appendChild(p);
  setTimeout(() => p.remove(), 17000);
}
setInterval(createPetal, 1000);

// Định tuyến: ?id=... là trang nhận thiệp; không có id thì trang tạo.
const params = new URLSearchParams(location.search);
const cardId = params.get("id");
if (cardId && /^[0-9a-f-]{36}$/i.test(cardId)) {
  loadCard(cardId);
} else {
  $("cinema").classList.add("done");
  showCreator();
}
</script>
</body>
</html>
