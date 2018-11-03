//-----------------------------------------------------------------------------------------------------------------------------
//-------This file contains the HTML served by the webserver that is minified and converted to a string for compliation.-------
//-------See styles.css, masterRootTemplate.html, and fishyDIYdeviceCtrl.html for the source HTML file that -------------------
//-------is readable with instructions to update these strings.----------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------

//=============================================================================================================================
// PAGE STYLES - used for multiple pages, provided in respose to /styles.css
const char WEBSTYLESSTR[] PROGMEM = ":root{--cp-sz: 300px;--big-fnt: 25px;--mid-fnt: 20px;--sml-fnt: 15px;--bg-col: #16234b;--drk-col: #3366cc;--gry-col: #dddddd;--lght-col: #ffffff;--lab-sz: 90px;--val-sz: 65px;--sld-sz: 125px;--rad-sz: 25px;--hdr-ht: 100px;--smrad-sz: 7px;--thm-sz: 25px;--sld-ht: 10px;--sld-mar: 5px;--sldRow-mar: 4px;--sldRow-ht: 30px;--btnRow-mar: 2px;--btnRow-ht: 30px;--btn-ht: 28px;--cfg-lab: 120;--cfg-inp: 180}a{color:var(--lght-col)}.main,body{background-color:var(--bg-col);font-family:\"Lucida Sans Unicode\",\"Lucida Grande\",sans-serif}.flex-container{display:flex;flex-wrap:wrap;justify-content:center}.fishyFtr,.flex-container>div{font-size:var(--mid-fnt);text-align:center}.flex-container>div{background-color:var(--lght-col);width:calc(var(--cp-sz)10);margin:5px;vertical-align:middle;line-height:calc(var(--mid-fnt) + 2);border-radius:var(--rad-sz)}.fishyFtr,.fishyHdr,.hdrIcon{font-weight:700;color:var(--lght-col);background-color:var(--drk-col)}.fishyFtr{height:calc(var(--hdr-ht)/2);border-radius:0 0 var(--rad-sz) var(--rad-sz)}.fishyHdr,.hdrIcon{border-radius:var(--rad-sz) var(--rad-sz) 0 0;font-size:calc(var(--hdr-ht)/3);height:var(--hdr-ht);vertical-align:middle}.fishyHdr{width:100%;text-align:center}.CP,.CPdetails,.CPdevice,.CPhdErrClear{width:var(--cp-sz);flex:0 1 var(--cp-sz)}.CP,.CPhdErrClear{background-color:var(--lght-col)}.CPdetails,.CPdevice{border-radius:0}.CPdetails{background-color:var(--lght-col);font-size:var(--sml-fnt)}.CPft,.CPhd,.CPhd2,.CPhd3,.CPhdErr{width:var(--cp-sz);color:var(--lght-col);background-color:var(--drk-col)}.CPhd{border-radius:var(--rad-sz) var(--rad-sz) 0 0;font-size:var(--big-fnt);-webkit-transition:color .4s ease;-moz-transition:color .4s ease;-o-transition:color .4s ease;transition:color .4s ease}.CPft{border-radius:0 0 var(--rad-sz) var(--rad-sz);font-size:var(--mid-fnt)}.CPhd3{text-align:center;width:100%}.CPhdErr{color:red}.CPhdErrClear{color:var(--lght-col)}.sld,.sld-dis{position:absolute;top:var(--sld-mar);left:var(--lab-sz);-webkit-appearance:none;width:var(--sld-sz);height:var(--sld-ht);background:var(--gry-col);outline:0;opacity:.7;-webkit-transition:.2s;transition:opacity .2s}.sld:hover{opacity:1}.sld-dis::-webkit-slider-thumb,.sld::-webkit-slider-thumb{border-radius:var(--smrad-sz);-webkit-appearance:none;width:var(--thm-sz);height:var(--thm-sz);background:var(--drk-col);cursor:pointer}.sld-dis::-webkit-slider-thumb{background:gray}.sld-dis::-moz-range-thumb,.sld::-moz-range-thumb{border-radius:var(--smrad-sz);width:var(--thm-sz);height:var(--thm-sz);background:var(--drk-col);cursor:pointer}.sld-dis::-moz-range-thumb{background:gray}.sldRow{position:relative;top:var(--sldRow-mar);width:var(--cp-sz);height:var(--sldRow-ht)}.sldLab,.sldVal{position:absolute;top:0;font-size:var(--mid-fnt)}.sldLab{left:0;width:var(--lab-sz)}.sldVal{left:calc(var(--cp-sz) - var(--val-sz));background-color:var(--lght-col);border:0;width:55px}.btnRow{position:relative;top:var(--btnRow-mar);width:var(--cp-sz);height:var(--btnRow-ht)}.cfgBtn,.cfgBtnY,.fullBtn,.lftBtn,.midBtn,.rgtBtn,.tglBtn{background-color:var(--drk-col);height:var(--btn-ht);border:1px solid var(--lght-col);color:var(--lght-col);text-align:center;text-decoration:none;display:inline-block;cursor:pointer}.lftBtn,.rgtBtn{border-radius:var(--smrad-sz) 0 0 var(--smrad-sz);width:calc(var(--cp-sz)/4)}.rgtBtn{border-radius:0 var(--smrad-sz) var(--smrad-sz) 0}.midBtn{width:calc(var(--cp-sz)/2)}.fullBtn{border-radius:var(--smrad-sz);width:var(--cp-sz)}.cfgPnl,.sw input{display:none}.cfgInp,.cfgInpLab,.cfgInpNum{width:var(--cfg-lab);font-size:var(--sml-fnt)}.cfgInp,.cfgInpNum{width:var(--cfg-inp);background-color:var(--lght-col);border:0}.cfgBtn,.cfgBtnY{border-radius:var(--smrad-sz);width:48%;font-weight:700;background-color:red}.cfgBtnY{color:#000;background-color:#ff0}.calTxt{font-size:var(--sml-fnt);color:var(--drk-col)}.tglBtn{border-radius:var(--smrad-sz) var(--smrad-sz) var(--rad-sz) var(--rad-sz);width:100%}.sw{position:relative;display:inline-block;width:60px;height:34px}.swLab,.swLabHdr{position:relative;top:-10px}.swLabHdr{font-size:var(--sml-fnt)}.sldSw,.sldSw:before{position:absolute;-webkit-transition:.4s;transition:.4s}.sldSw{cursor:pointer;top:0;right:0;background-color:#ccc;left:0;bottom:0;border-radius:34px}.sldSw:before{content:'';height:26px;width:26px;left:4px;bottom:4px;background-color:var(--lght-col);border-radius:50%}input:checked+.sldSw{background-color:#474747}input:focus+.sldSw{box-shadow:0 0 1px #474747}input:checked+.sldSw:before{-webkit-transform:translateX(26px);-ms-transform:translateX(26px);transform:translateX(26px)}.ctrl,.swUpdate{height:250px;width:var(--cp-sz);border:0}.overlay{height:0%;width:100%;position:fixed;z-index:1;top:0;left:0;background-color:rgba(255,255,255,.7);overflow-y:hidden;transition:.5s}.overlay-content{position:relative;top:25%;width:100%;text-align:center;margin-top:30px}.overlay a{padding:8px;text-decoration:none;font-size:36px;color:#818181;display:block;transition:.3s}.overlay a:focus,.overlay a:hover{color:#f1f1f1}.overlay .closebtn{position:absolute;right:15px;top:10px;z-index:999;cursor:pointer;color:#fff;border:0;border-radius:30px;background:0 0;font-size:30px;font-weight:700;display:inline-block;line-height:0;padding:11px 3px}.modal-body{position:relative;top:5%;bottom:5%;left:5%;right:5%;width:90%;height:90%;text-align:center}.iframeBody,.myIframeDiv{border:0;border-radius:25px}.myIframeDiv{background:0 0}.background{position:relative;background-color:var(--lght-col);width:30px;height:30px;padding:0;margin:0;border-radius:50%;border:4px solid var(--drk-col);top:0;right:0}.line1,.line2{width:32px;height:32px;border-bottom:4px solid var(--drk-col);-webkit-transform:translateY(-14px) translateX(10px) rotate(45deg);position:relative}.line2{width:33px;height:33px;-webkit-transform:translateY(-51px) translateX(-13px) rotate(-45deg)}::-webkit-scrollbar{width:10px;height:20px}::-webkit-scrollbar-track{-webkit-box-shadow:inset 0 0 6px rgba(0,0,0,.3);-webkit-border-radius:20px;border-radius:20px}::-webkit-scrollbar-thumb{-webkit-border-radius:10px;border-radius:10px;background:rgba(125,125,125,.8);-webkit-box-shadow:inset 0 0 6px rgba(0,0,0,.5);height:20px}::-webkit-scrollbar-thumb:window-inactive{background:rgba(125,125,125,.3)}";

//=============================================================================================================================

//=============================================================================================================================
//ROOT SITE  - Used to serve up iFrames for each device either for software updates or for controls
const char WEBROOTSTRNEW[] PROGMEM = "<!doctype html><title>fishDIY Device Network</title><meta content=\"width=device-width,initial-scale=1\"name=viewport><link href=/styles.css rel=stylesheet><link href=styles.css rel=stylesheet><div class=main id=myBody><script>function addDevice(e){var n=\"<div class='CPdevice' id='CP-\"+e.ip+\"'>\";return n+=addInnerDevice(e),n+=\"</div>\"}function addInnerDevice(e){var n,t;n=\"true\"==e.inError?\"CPhdErr\":\"CPhdErrClear\",t=\"true\"==e.isMaster?\"MASTER:\"+e.ip:e.ip;var r=\"<div class='CPhd' id='hd1-\"+e.ip+\"'>\"+e.name+\"</div>\";return isCtrl?(r+=\"<div id='CPerr-\"+e.ip+\"' class='\"+n+\"'>ERROR</div>\",r+=\"<div >\"+e.statusstr+\"</div>\",r+=\"<button class='CPbutton' onclick='openModal(\\\"\"+e.ip+\"\\\")'; id='myBtn-\"+e.ip+\"'>Open Controls</button>\",r+=\"<div class='CPdetails' >Group:\"+e.groupstr+\"</div>\",r+=\"<div class='CPdetails' >Type:\"+e.typestr+\"</div>\"):r+=\"<iframe id='swUpdate-\"+e.ip+\"' class='swUpdate' src='http://\"+e.ip+\"/SWupdateGetForm' ></iframe><br>\",r+=\"<div class='CPft' id='CPft-\"+e.ip+\"'>\"+t+\"</div>\"}function refreshToggle(){var e=document.getElementById(\"swRefreshLab-1\");1==document.getElementById(\"swRefreshChck-1\").checked?(e.innerHTML=\"Auto-refresh On\",pollTimer=setInterval(function(){pollJSON()},1e4)):(e.innerHTML=\"Auto-refresh Off\",clearInterval(pollTimer))}function loadJSON(e,n,t){var r=new XMLHttpRequest;r.onreadystatechange=function(){r.readyState===XMLHttpRequest.DONE&&(200===r.status?n&&n(JSON.parse(r.responseText)):t&&t(r))},r.open(\"GET\",e,!0),r.send()}function pollJSON(){loadJSON(\"./network.JSON?nocache=\"+(new Date).getTime(),function(e){var r,i,n=e.fishyDevices;Array.prototype.forEach.call(n,function(e,n){if(r=document.getElementById(\"CP-\"+e.ip),\"0\"==e.dead){if(null==r){var t=document.createElement(\"DIV\");t.id=\"CP-\"+e.ip,t.className=\"CPdevice\",r=document.getElementById(\"flex-container\").appendChild(t)}r.innerHTML=addInnerDevice(e)}else null!=r&&document.getElementById(\"flex-container\").removeChild(r)});var t=document.querySelectorAll(\".CPdevice\");Array.prototype.forEach.call(t,function(t,e){i=!0,Array.prototype.forEach.call(n,function(e,n){\"CP-\"+e.ip==t.id&&0==e.dead&&(i=!1)}),i&&document.getElementById(\"flex-container\").removeChild(t)}),console.log(\"loadJSON and page update success\")},function(e){console.log(\"Error with loadJSON\")})}var pollTimer,isCtrl=!0;function buildPage(){var n,e=\"./network.JSON?nocache=\"+(new Date).getTime(),t=[],r=document.getElementById(\"myBody\"),i=document.createElement(\"DIV\");i.className=\"fishyHdr\",r.appendChild(i),\"SWu\"==location.pathname.slice(1,4)?(isCtrl=!1,i.innerHTML=\"fishyDevice Software Update\"):i.innerHTML=\"fishyDevice Controls\",(i=document.createElement(\"DIV\")).className=\"CPhd3\",r.appendChild(i),isCtrl&&(i.innerHTML=\"<span class='swRow'><label class='sw' id='swRefresh-1'><input type='checkbox' checked id='swRefreshChck-1' onchange=refreshToggle()><span class='sldSw'></span></label><span class='swLabHdr' id='swRefreshLab-1'>Auto-refresh On</span></span>\"),loadJSON(e,function(e){n=e.fishyDevices,Array.prototype.forEach.call(n,function(e,n){t.push(addDevice(e))}),(i=document.createElement(\"DIV\")).className=\"flex-container\",i.id=\"flex-container\",i.innerHTML=t.join(\"\"),r.appendChild(i)})}window.onload=buildPage(),isCtrl&&document.getElementById(\"swRefreshChck-1\").checked&&(pollTimer=setInterval(function(){pollJSON()},1e4))</script><div class=fishyFtr><a href=/ >[Controls]</a> <a href=/SWupdater>[SW Update]</a></div></div><div class=overlay id=myModal><a href=javascript:void(0) class=closebtn onclick=closeModal()><div class=background><div class=line1></div><div class=line2></div></div></a><div class=modal-body id=myIframeDiv><iframe class=iframeBody height=100% id=myIframe src=\"\"width=100%></iframe></div></div><script>var modal=document.getElementById(\"myModal\");function closeModal(){modal.style.height=\"0%\",document.getElementById(\"myIframe\").src=\"\"}var span=document.getElementsByClassName(\"close\")[0];function openModal(e){\"localhost\"==document.domain?document.getElementById(\"myIframeDiv\").innerHTML=\"<iframe  id='myIframe' class='iframeBody' width=100% height=100% src='http://localhost/test/fishyDIYdeviceCtrlTemplate.html'></iframe>\":document.getElementById(\"myIframeDiv\").innerHTML=\"<iframe  id='myIframe' class='iframeBody' width=100% height=100% src='http://\"+e+\"/control'></iframe>\",modal.style.height=\"100%\"}</script>";
//=============================================================================================================================

//=============================================================================================================================
//CTRL SITE PARTS - Used to serve up each device's controls
const char WEBCTRLSTRNEW[] PROGMEM = "<!doctypehtml><title>fishDIY Device Network</title><meta content=\"width=device-width,initial-scale=1\"name=viewport><link href=/styles.css rel=stylesheet><link href=styles.css rel=stylesheet><div class=main id=myBody><script>var websock,pollTimer;function getMsg(e){var t=e.indexOf(\"MSG:\")+4,n=e.indexOf(\"~*~*\");return e.substring(t,n)}function getNodeJSONtext(e){var t=e.indexOf(\"~*~*DAT:\")+8;return e.substring(t,e.length)}function start(){(websock=new WebSocket(\"ws://\"+window.location.hostname+\":81/\")).onopen=function(e){console.log(\"websock open\")},websock.onclose=function(e){console.log(\"websock close\")},websock.onerror=function(e){console.log(e)},websock.onmessage=function(e){var t=e.data;if(t.indexOf(\"~*~*\")<0)0==t.indexOf(\"{fishyDevices\")?processJSON(t):console.log(t);else{var n=getMsg(t);console.log(n),processJSON(getNodeJSONtext(t))}}}function toggleCfg(e){var t=document.getElementById(\"cfgBtn-\"+e),n=document.getElementById(\"cfgPnl-\"+e);\"block\"==n.style.display?(n.style.display=\"none\",t.value=\"[+] Show Settings Panel\"):(n.style.display=\"block\",t.value=\"[-] Hide Settings Panel\")}function sync(e,t,n){var s=t+\"Sld-\"+e,o=t+\"Val-\"+e,a=document.getElementById(s),l=document.getElementById(o);if(\"pctOpen\"==t)var d=document.getElementById(\"pobtn-\"+e);1==n?(l.value=a.value,\"pctOpen\"==t&&(d.value=\"Go \"+a.value+\"% Open\")):(a.value=l.value,\"pctOpen\"==t&&(d.value=\"Go \"+l.value+\"% Open\"))}function openIsCCWUpd(e){var t=document.getElementById(\"swLab-\"+e);1==document.getElementById(\"swChck-\"+e).checked?t.innerHTML=\"Open is CCW\":t.innerHTML=\"Open is CW\"}function swMstrUpd(e){var t=document.getElementById(\"swMstrLab-\"+e);1==document.getElementById(\"swMstrChck-\"+e).checked?t.innerHTML=\"Master Node\":t.innerHTML=\"Slave Node\"}function swSwapUpd(e){var t=document.getElementById(\"swSwapLab-\"+e);1==document.getElementById(\"swSwapChck-\"+e).checked?t.innerHTML=\"Swapped Lim Sw\":t.innerHTML=\"Normal Lim Sw\"}function sendCmd(e,t){var n=\"\";if(\"O\"==t)n=\"open\";else if(\"C\"==t)n=\"close\";else if(\"S\"==t)n=\"stop\";else if(\"cal\"==t)n=\"calibrate\";else if(\"reboot\"==t)n=\"reset\";else if(\"rstWifi\"==t)n=\"reset_wifi\";else if(\"G\"==t){var s;for(n=\"goto\",s=document.getElementById(\"pctOpenVal-\"+e).value;s.length<3;)s=\"0\"+s;n+=s}else if(\"config\"==t){var o=\"false\",a=\"false\",l=\"false\";document.getElementById(\"swMstrChck-\"+e).checked&&(o=\"true\"),document.getElementById(\"swChck-\"+e).checked&&(a=\"true\"),document.getElementById(\"swSwapChck-\"+e).checked&&(l=\"true\"),n=\"config\",n+=\";openIsCCW=\"+a,n+=\";isMaster=\"+o,n+=\";devName=\"+document.getElementById(\"devName-\"+e).value,n+=\";groupName=\"+document.getElementById(\"groupName-\"+e).value,n+=\";devType=\"+document.getElementById(\"devType-\"+e).value,n+=\";note=\"+document.getElementById(\"note-\"+e).value,n+=\";swapLimSW=\"+l,n+=\";timeOut=\"+document.getElementById(\"timeOut-\"+e).value}document.getElementById(\"flex-container\").style.transition=\".5s\",document.getElementById(\"flex-container\").style.backgroundColor=\"var(--bg-col-ack)\",document.body.style.transition=\".5s\",document.body.style.backgroundColor=\"var(--bg-col-ack)\";setTimeout(function(){returnColor(e)},1e3);websock.send(n)}function returnColor(e){document.body.style.backgroundColor=\"var(--bg-col)\",document.getElementById(\"flex-container\").style.backgroundColor=\"var(--bg-col)\"}function httpGetAsync(e,t){var n=new XMLHttpRequest;n.onreadystatechange=function(){4==n.readyState&&200==n.status&&t(n.responseText)},n.open(\"GET\",e,!0),n.send(null)}function loadJSON(e,t,n){var s=new XMLHttpRequest;s.onreadystatechange=function(){s.readyState===XMLHttpRequest.DONE&&(200===s.status?t&&t(JSON.parse(s.responseText)):n&&n(s))},s.open(\"GET\",e,!0),s.send()}function processJSON(e){doStuffWithJSON(JSON.parse(e).fishyDevices)}function doStuffWithJSON(e){var n=\"\";Array.prototype.forEach.call(e,function(e,t){(999,\"true\"==e.isMaster?\"MASTER \":\"\",n=\"true\"==e.motorPosAtCWset&&\"true\"==e.motorPosAtCCWset?\"\":\"HW LIMITS ARE UNCALIBRATED<br>\",\"true\"==e.openIsCCW?\"checked\":\"\",\"true\"==e.swapLimSW?swapTxt=\"checked\":swapTxt=\"\",\"true\"==e.deviceTimedOut)?document.getElementById(\"hdErr-999\").style.display=\"block\":document.getElementById(\"hdErr-999\").style.display=\"none\";document.getElementById(\"note-999\").value=e.note,document.getElementById(\"timeOut-999\").value=e.timeOut,document.getElementById(\"devName-999\").value=e.deviceName,document.getElementById(\"groupName-999\").value=e.group,document.getElementById(\"devType-999\").value=e.devType,document.getElementById(\"devSWver-999\").innerHTML=e.swVer,document.getElementById(\"pctOpenVal-999\").value=posPct(e.motorPos,e.range,e.openIsCCW),document.getElementById(\"pctOpenSld-999\").value=posPct(e.motorPos,e.range,e.openIsCCW),document.getElementById(\"pobtn-999\").value=\"Go \"+posPct(e.motorPos,e.range,e.openIsCCW)+\"% Open\",document.getElementById(\"motPosVal-999\").value=e.motorPos,document.getElementById(\"motPosVal-999\").min=\"0\",document.getElementById(\"motPosVal-999\").max=e.range,document.getElementById(\"motPosSld-999\").value=e.motorPos,document.getElementById(\"motPosSld-999\").min=\"0\",document.getElementById(\"motPosSld-999\").max=e.range,document.getElementById(\"calTxt-999\").innerHTML=n,document.getElementById(\"HWlim-999\").innerHTML=\"CCW = 0 CW = \"+e.range})}function posPct(e,t,n){if(0==t)return 0;var s=Math.round(e/t*100);return\"true\"==n&&(s=100-s),s}function blockSpecialChar(e){var t=e.keyCode;return 64<t&&t<91||96<t&&t<123||8==t||16==t||95==t||32==t||43<t&&t<47||48<=t&&t<=57}function numberCharOnly(e){var t=e.keyCode;return 8==t||16==t||48<=t&&t<=57}function addDevice(e){\"true\"==e.isMaster?(mstrTxt=\"MASTER \",mstrChckTxt=\"checked\",mstrLabel=\"Master Node\"):(mstrTxt=\"\",mstrChckTxt=\"\",mstrLabel=\"Slave Node\"),\"true\"==e.motorPosAtCWset&&\"true\"==e.motorPosAtCCWset?calTxt=\"\":calTxt=\"HW LIMITS ARE UNCALIBRATED<br>\",\"true\"==e.openIsCCW?(chckTxt=\"checked\",openLabel=\"Open is CCW\"):(chckTxt=\"\",openLabel=\"Open is CW\"),\"true\"==e.swapLimSW?(swapTxt=\"checked\",swapLabel=\"Swapped Lim SW\"):(swapTxt=\"\",swapLabel=\"Normal Lim SW\"),\"true\"==e.deviceTimedOut?(dispTxt=\"inline\",timedOutTxt=\"ERROR - TIMED OUT\"):(dispTxt=\"none\",timedOutTxt=\"\");var t=999;return\"<div class='CPdevice' id='CPnode-999'><input type='hidden' id='targetIP-999' value='\"+e.IP+\"'><div class='CPhdErr' id='hdErr-\"+t+\"' display='\"+dispTxt+\"'>\"+timedOutTxt+\"</div><div class='sldRow'><div class='sldLab'>% Open</div><input class='sld' id='pctOpenSld-\"+t+\"' type='range' value='\"+posPct(e.motorPos,e.range,e.openIsCCW)+\"' max='100' min='0' oninput=sync(\"+t+\",'pctOpen',1)> <input class='sldVal' id='pctOpenVal-\"+t+\"' type='number' value='\"+posPct(e.motorPos,e.range,e.openIsCCW)+\"' max='100' min='0' onchange=sync(\"+t+\",'pctOpen',2)></div><div class='btnRow'><input class='lftBtn' id='fcbtn-\"+t+\"' type='button' value='Full Close' onclick=sendCmd(\"+t+\",'C')><input class='midBtn' id='pobtn-\"+t+\"' type='button' value='Go % Open' onclick=sendCmd(\"+t+\",'G')><input class='rgtBtn' id='fobtn-\"+t+\"' type='button' value='Full Open' onclick=sendCmd(\"+t+\",'O')></div><div class='btnRow'><input class='fullBtn' id='stpbtn-\"+t+\"' type='button' value='Stop' onclick=sendCmd(\"+t+\",'S')></div><div class='cfgPnl' id='cfgPnl-\"+t+\"' style='display: hidden;'><hr><label class='cfgInpLab' for='devNote-\"+t+\"'>Note:<input class='cfgInp' onkeypress='return blockSpecialChar(event)' id='note-\"+t+\"' value='\"+e.note+\"' maxlength='55'></label><hr><div class='calTxt' id='calTxt-\"+t+\"'>\"+calTxt+\"</div><label class='calTxt' >HW Limits: <span class='cfgInp' onkeypress='return blockSpecialChar(event)' id='HWlim-\"+t+\"'>CCW = 0 CW = \"+e.range+\"</span></label> \\t<div class='sldRow'>\\t\\t<div class='sldLab'>Mot Pos</div><input class='sld-dis' id='motPosSld-\"+t+\"' type='range' value='\"+e.motorPos+\"' max='\"+e.range+\"' min='0' disabled> <input class='sldVal' id='motPosVal-\"+t+\"' type='number' value='\"+e.motorPos+\"' max='\"+e.range+\"' min='0' disabled>\\t</div><hr>\\t<label class='cfgInpLab' for='timeOut-\"+t+\"'>Time Out:<input class='cfgInpNum' onkeypress='return numberCharOnly(event)' id='timeOut-\"+t+\"' value='\"+e.timeOut+\"' maxlength='5' title='Enter a time (in seconds) to wait for the actuator to respond before stopped and displaying an error message (assuming the actuator got stuck).'></label>\\t<div class='swRow'>\\t\\t<label class='sw' id='sw-\"+t+\"'><input type='checkbox' id='swChck-\"+t+\"' \"+chckTxt+\" onchange=openIsCCWUpd(\"+t+\")><span class='sldSw'></span></label><span class='swLab' id='swLab-\"+t+\"'>\"+openLabel+\"</span>\\t</div>\\t<div class='swRow'>\\t\\t<label class='sw' id='swMstr-\"+t+\"'><input type='checkbox' id='swMstrChck-\"+t+\"' \"+mstrChckTxt+\" onchange=swMstrUpd(\"+t+\")><span class='sldSw'></span></label><span class='swLab' id='swMstrLab-\"+t+\"'>\"+mstrLabel+\"</span>\\t</div>\\t<div class='swRow'>\\t\\t<label class='sw' id='swSwap-\"+t+\"'><input type='checkbox' id='swSwapChck-\"+t+\"' \"+swapTxt+\" onchange=swSwapUpd(\"+t+\")><span class='sldSw'></span></label><span class='swLab' id='swSwapLab-\"+t+\"'>\"+swapLabel+\"</span>\\t</div>\\t<label class='cfgInpLab' for='devName-\"+t+\"'>Device Name:<input class='cfgInp' onkeypress='return blockSpecialChar(event)' id='devName-\"+t+\"' value='\"+e.deviceName+\"' maxlength='40'></label>\\t<label class='cfgInpLab' for='groupName-\"+t+\"'>Group Name:<input class='cfgInp' onkeypress='return blockSpecialChar(event)' id='groupName-\"+t+\"' value='\"+e.group+\"' maxlength='40'></label>\\t<label class='cfgInpLab' for='devType-\"+t+\"'>Device Type:<input class='cfgInp' onkeypress='return blockSpecialChar(event)' id='devType-\"+t+\"' value='\"+e.devType+\"' maxlength='20'></label>\\t<label class='cfgInpLab' >SW Version:<span class='cfgInp' onkeypress='return blockSpecialChar(event)' id='devSWver-\"+t+\"'>\"+e.swVer+\"</span></label>\\t<div class='btnRow'>\\t<input class='cfgBtnY' id='updCfgBtn-\"+t+\"' type='button' value='UPDATE SETTINGS' onclick=sendCmd(\"+t+\",'config') title='This will save new settings in the device. New settings should be displayed on next refresh.  If trying to adjust mulitple settings it is recommended that you temporarily turn off Auto-refresh.'>\\t<input class='cfgBtnY' id='updCfgBtn-\"+t+\"' type='button' value='REBOOT DEVICE' onclick=sendCmd(\"+t+\",'reboot') title='This will reboot the device.'>\\t</div><div class='btnRow'><input class='cfgBtn' id='updCfgBtn-\"+t+\"' type='button' value='AUTO-CAL. HW LIM' onclick=sendCmd(\"+t+\",'cal') title='WARNING: Auto-Cal will attempt to cycle your actuator full open and shut to determine  hardware limit switch positions. Ensure that range is possible to prevent damage.'>\\t<input class='cfgBtn' id='rstWifiBtn-\"+t+\"' type='button' value='RESET WIFI' onclick=sendCmd(\"+t+\",'rstWifi') title='WARNING: Reset Wifi will attempt to delete your network SSID and password and put the device into wifi-server mode to learn new wifi SSID and password. To teach a reset device a new wifi network go to the device IP address using a mobile phone or computer.'>\\t</div>\\t<hr></div><div class='btnRow'><input class='tglBtn' id='cfgBtn-\"+t+\"' type='button' value='[+] Show Settings Panel' onclick=toggleCfg(\"+t+\")></div></div>\"}function buildPage(){var e=\"./node.JSON?nocache=\"+(new Date).getTime(),n=document.getElementById(\"myBody\"),s=document.createElement(\"DIV\");s.className=\"flex-container\",s.id=\"flex-container\",loadJSON(e,function(e){var t=e.fishyDevices[0];s.innerHTML=addDevice(t),n.appendChild(s),start()})}window.onload=buildPage()</script></div>";



//=============================================================================================================================

//=============================================================================================================================
//SOFTWARE UPDATE DEV FORM PARTS----
const char WEBSTR_SWUPDATE_PT1[] PROGMEM = "<!doctype html><style>a{color:#fff}.main,body{font-family:\"Lucida Sans Unicode\",\"Lucida Grande\",sans-serif}#loader{position:absolute;left:50%;top:50%;z-index:1;width:150px;height:150px;margin:-75px 0 0 -75px;border:16px solid #f3f3f3;border-radius:50%;border-top:16px solid #3498db;width:120px;height:120px;-webkit-animation:spin 2s linear infinite;animation:spin 2s linear infinite}@-webkit-keyframes spin{0%{-webkit-transform:rotate(0)}100%{-webkit-transform:rotate(360deg)}}@keyframes spin{0%{transform:rotate(0)}100%{transform:rotate(360deg)}}</style><script>function showLoader(){document.getElementById(\"loader\").style.display=\"block\",document.getElementById(\"formDiv\").style.display=\"none\",document.getElementById(\"SWinfoDiv\").style.display=\"none\",setTimeout(\"location.href = '/SWupdateGetForm';\",8e3)}function _(e){return document.getElementById(e)}function uploadFile(){_(\"progressBar\").value=0,_(\"progressBar\").style.display=\"block\";var e=_(\"file1\").files[0],t=new FormData;t.append(\"file1\",e);var r=new XMLHttpRequest;r.upload.addEventListener(\"progress\",progressHandler,!1),r.addEventListener(\"load\",completeHandler,!1),r.addEventListener(\"error\",errorHandler,!1),r.addEventListener(\"abort\",abortHandler,!1),r.open(\"POST\",\"/SWupdatePostForm\"),r.send(t)}function progressHandler(e){_(\"loaded_n_total\").innerHTML=\"Uploaded \"+e.loaded+\" bytes of \"+e.total;var t=e.loaded/e.total*100;_(\"progressBar\").value=Math.round(t),_(\"status\").innerHTML=Math.round(t)+\"% uploaded...\",100==_(\"progressBar\").value&&(_(\"status\").innerHTML=\"Done. Rebooting.\",showLoader())}function completeHandler(e){_(\"status\").innerHTML=e.target.responseText,_(\"progressBar\").value=0}function errorHandler(e){_(\"status\").innerHTML=\"Upload Failed\"}function abortHandler(e){_(\"status\").innerHTML=\"Upload Aborted\"}</script><div id=loader style=display:none></div><div id=SWinfoDiv>";

const char WEBSTR_SWUPDATE_PT2[] PROGMEM = "</div><div id=formDiv><hr><form enctype=multipart/form-data id=upload_form method=post><input id=file1 name=file1 onchange=uploadFile() type=file><br><progress id=progressBar max=100 style=width:100%;display:none value=0></progress><h3 id=status></h3><p id=loaded_n_total></form></div>";
