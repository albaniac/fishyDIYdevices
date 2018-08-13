//-----------------------------------------------------------------------------------------------------------------------------
//-------This file contains the HTML served by the webserver that is minified and converted to a string for compliation.-------
//-------See fishyDIYrootResult.html and updater.html for the source template HTML file that is readable with -----------------
//-------instructions to update this.------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------

//the beginning, page styles, and opening of the script for the JSON variable
const char WEBSTRPT1[] PROGMEM ="<!doctype html><title>fishDIY Device Network</title><meta content=\"width=device-width,initial-scale=1\"name=viewport><script src=https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js></script><style>:root{--big-fnt:25px;--mid-fnt:20px;--sml-fnt:15px;--on-col:#16234b;--drk-col:#3366cc;--lght-col:#ffffff;--gry-col:#edf3ff;--cp-sz:300px;--lab-sz:90px;--val-sz:65px;--sld-sz:125px;--rad-sz:25px;--hdr-ht:100px;--smrad-sz:7px;--thm-sz:25px;--sld-ht:10px;--sld-mar:5px;--sldRow-mar:4px;--sldRow-ht:30px;--btnRow-mar:2px;--btnRow-ht:30px;--btn-ht:28px;--cfg-lab:120;--cfg-inp:180}a{color:#fff}.main,body{background-color:var(--gry-col);font-family:\"Lucida Sans Unicode\",\"Lucida Grande\",sans-serif}.flex-container{display:flex;flex-wrap:wrap;justify-content:center;background-color:var(--gry-col)}.flex-container>div{border-radius:var(--rad-sz);background-color:var(--lght-col);width:calc(var(--cp-sz)+10);margin:5px;vertical-align:middle;text-align:center;line-height:calc(var(--mid-fnt) + 2);font-size:var(--mid-fnt)}.fishyFtr{border-radius:0 0 var(--rad-sz) var(--rad-sz);font-size:var(--mid-fnt);font-weight:700;color:#fff;background:var(--drk-col);height:calc(var(--hdr-ht)/2);text-align:center}.fishyHdr,.hdrIcon{border-radius:var(--rad-sz) var(--rad-sz) 0 0;font-size:calc(var(--hdr-ht)/3);font-weight:700;color:#fff;background:var(--drk-col);height:var(--hdr-ht);vertical-align:middle}.fishyHdr{width:100%;text-align:center}.CP{width:var(--cp-sz);flex:0 1 var(--cp-sz)}.CPft,.CPhd,.CPhd2,.CPhd3,.CPhdErr{width:var(--cp-sz);color:#fff;background-color:var(--drk-col)}.CPhd{border-radius:var(--rad-sz) var(--rad-sz) 0 0;font-size:var(--big-fnt);-webkit-transition:color .4s ease;-moz-transition:color .4s ease;-o-transition:color .4s ease;transition:color .4s ease}.CPft{border-radius:0 0 var(--rad-sz) var(--rad-sz);font-size:var(--big-fnt)}.CPhd3{text-align:center;width:100%}.CPhdErr{color:red}.sld,.sld-dis{position:absolute;top:var(--sld-mar);left:var(--lab-sz);-webkit-appearance:none;width:var(--sld-sz);height:var(--sld-ht);background:var(--gry-col);outline:0;opacity:.7;-webkit-transition:.2s;transition:opacity .2s}.sld:hover{opacity:1}.sld-dis::-webkit-slider-thumb,.sld::-webkit-slider-thumb{border-radius:var(--smrad-sz);-webkit-appearance:none;width:var(--thm-sz);height:var(--thm-sz);background:var(--drk-col);cursor:pointer}.sld-dis::-webkit-slider-thumb{background:grey}.sld-dis::-moz-range-thumb,.sld::-moz-range-thumb{border-radius:var(--smrad-sz);width:var(--thm-sz);height:var(--thm-sz);background:var(--drk-col);cursor:pointer}.sld-dis::-moz-range-thumb{background:grey}.sldRow{position:relative;top:var(--sldRow-mar);width:var(--cp-sz);height:var(--sldRow-ht)}.sldLab{position:absolute;top:0;left:0;width:var(--lab-sz);font-size:var(--mid-fnt)}.sldVal{position:absolute;top:0;left:calc(var(--cp-sz) - var(--val-sz));background-color:#fff;border:none;font-size:var(--mid-fnt);width:var(--val-sz)}.btnRow{position:relative;top:var(--btnRow-mar);width:var(--cp-sz);height:var(--btnRow-ht)}.cfgBtn,.cfgBtnY,.fullBtn,.lftBtn,.midBtn,.rgtBtn,.tglBtn{background-color:var(--drk-col);height:var(--btn-ht);border:1px solid #fff;color:#fff;text-align:center;text-decoration:none;display:inline-block;cursor:pointer}.lftBtn{border-radius:var(--smrad-sz) 0 0 var(--smrad-sz);width:calc(var(--cp-sz)/4)}.rgtBtn{border-radius:0 var(--smrad-sz) var(--smrad-sz) 0;width:calc(var(--cp-sz)/4)}.midBtn{width:calc(var(--cp-sz)/2)}.fullBtn{border-radius:var(--smrad-sz);width:var(--cp-sz)}.cfgPnl{display:none}.cfgInpLab{width:var(--cfg-lab);font-size:var(--sml-fnt)}.cfgInp,.cfgInpNum{width:var(--cfg-inp);background-color:#fff;border:none;font-size:var(--sml-fnt)}.cfgBtn,.cfgBtnY{border-radius:var(--smrad-sz);width:48%;font-weight:700;background-color:red}.cfgBtnY{color:#000;background-color:#ff0}.calTxt{font-size:var(--sml-fnt);color:var(--drk-col)}.tglBtn{border-radius:var(--smrad-sz) var(--smrad-sz) var(--rad-sz) var(--rad-sz);width:100%}.sw{position:relative;display:inline-block;width:60px;height:34px}.sw input{display:none}.swLab{position:relative;top:-10px}.swLabHdr{position:relative;top:-10px;font-size:var(--sml-fnt)}.sldSw{position:absolute;cursor:pointer;top:0;left:0;right:0;bottom:0;background-color:#ccc;-webkit-transition:.4s;transition:.4s;border-radius:34px}.sldSw:before{position:absolute;content:'';height:26px;width:26px;left:4px;bottom:4px;background-color:#fff;-webkit-transition:.4s;transition:.4s;border-radius:50%}input:checked+.sldSw{background-color:#474747}input:focus+.sldSw{box-shadow:0 0 1px #474747}input:checked+.sldSw:before{-webkit-transform:translateX(26px);-ms-transform:translateX(26px);transform:translateX(26px)}.swUpdate{height:250px;width:var(--cp-sz);border:none}</style>";
//fishyNetJSON will be inserted here, the following line transtions from that to the header.
const char WEBSTRPT2[] PROGMEM = "<div class=main id=myBody><div class=fishyHdr>";
//this is an alternate transition for the software updater
const char WEBSTRPT2ALT[] PROGMEM = "<div class=main id=myBody><div class=fishyHdr>fishyDevice Software Update</div>";
//place for an icon / image if desired and then auto refresh
const char WEBSTRPT3[] PROGMEM = "<span>fishyControls</span><div class=CPhd3><span class=swRow><label class=sw id=swRefresh-1><input checked id=swRefreshChck-1 onchange=refreshToggle() type=checkbox><span class=sldSw></span></label><span class=swLabHdr id=swRefreshLab-1>AutoRefresh On</span></span></div></div>";
//the scripts
const char WEBSTRPT4[] PROGMEM = "<script>function toggleCfg(e){var t=$(\"#cfgBtn-\"+e)[0],s=$(\"#cfgPnl-\"+e)[0];\"block\"==s.style.display?(s.style.display=\"none\",t.value=\"[+] Show Settings Panel\"):(s.style.display=\"block\",t.value=\"[-] Hide Settings Panel\")}function sync(e,t,s){var a=\"#\"+t+\"Val-\"+e,n=$(\"#\"+t+\"Sld-\"+e)[0],l=$(a)[0];if(\"pctOpen\"==t)var i=$(\"#pobtn-\"+e)[0];1==s?(l.value=n.value,\"pctOpen\"==t&&(i.value=\"Go \"+n.value+\"% Open\")):(n.value=l.value,\"pctOpen\"==t&&(i.value=\"Go \"+l.value+\"% Open\"))}function refreshToggle(){var e=$(\"#swRefreshLab-1\")[0];1==$(\"#swRefreshChck-1\")[0].checked?(e.innerHTML=\"Auto-refresh On\",pollTimer=setTimeout(function(){pollJSON()},1e4)):(e.innerHTML=\"Auto-refresh Off\",clearTimeout(pollTimer))}function openIsCCWUpd(e){var t=$(\"#swLab-\"+e)[0];1==$(\"#swChck-\"+e)[0].checked?t.innerHTML=\"Open is CCW\":t.innerHTML=\"Open is CW\"}function swMstrUpd(e){var t=$(\"#swMstrLab-\"+e)[0];1==$(\"#swMstrChck-\"+e)[0].checked?t.innerHTML=\"Master Node\":t.innerHTML=\"Slave Node\"}function swSwapUpd(e){var t=$(\"#swSwapLab-\"+e)[0];1==$(\"#swSwapChck-\"+e)[0].checked?t.innerHTML=\"Swapped Lim Sw\":t.innerHTML=\"Normal Lim Sw\"}function sendCmd(e,t){var s=$(\"#targetIP-\"+e)[0].value,a=\"\";if(\"O\"==t)a=\"open\";else if(\"C\"==t)a=\"close\";else if(\"S\"==t)a=\"stop\";else if(\"cal\"==t)a=\"calibrate\";else if(\"reboot\"==t)a=\"reset\";else if(\"rstWifi\"==t)a=\"reset_wifi\";else if(\"G\"==t){var n;for(a=\"goto\",n=$(\"#pctOpenVal-\"+e)[0].value;n.length<3;)n=\"0\"+n;a+=n}else if(\"config\"==t){var l=\"false\",i=\"false\",o=\"false\";$(\"#swMstrChck-\"+e)[0].checked&&(l=\"true\"),$(\"#swChck-\"+e)[0].checked&&(i=\"true\"),$(\"#swSwapChck-\"+e)[0].checked&&(o=\"true\"),a=\"config\",a+=\";openIsCCW=\"+i,a+=\";isMaster=\"+l,a+=\";devName=\"+encodeURIComponent($(\"#devName-\"+e)[0].value),a+=\";groupName=\"+encodeURIComponent($(\"#groupName-\"+e)[0].value),a+=\";devType=\"+encodeURIComponent($(\"#devType-\"+e)[0].value),a+=\";note=\"+encodeURIComponent($(\"#note-\"+e)[0].value),a+=\";swapLimSW=\"+o,a+=\";timeOut=\"+encodeURIComponent($(\"#timeOut-\"+e)[0].value)}var c=\"/genericArgs?IPCommand=\"+s+\";\"+a;$.get(c,function(){$(\"#hd1-\"+e).css(\"color\",\"lime\"),$(\"#updCfgBtn-\"+e).css(\"background-color\",\"lime\");setTimeout(function(){returnColor(e),pollJSON()},1e3)})}function returnColor(e){$(\"#hd1-\"+e).css(\"color\",\"white\"),$(\"#updCfgBtn-\"+e).css(\"background-color\",\"yellow\")}function pollJSON(){var e=\"./device.JSON?nocache=\"+(new Date).getTime();$.getJSON(e,function(e){var s,a,t=e.fishyDevices,n=\"\",l=\"\";$.each(t,function(e,t){\"0\"==t.dead&&(s=t.deviceID,null==$(\"#pctOpenVal-\"+s)[0]?$(addDevice(t)).appendTo(\".flex-container\"):(n=\"true\"==t.isMaster?\"MASTER \":\"\",l=\"false\"==t.isCalibrated?\"HW LIMITS ARE UNCALIBRATED<br>\":\"\",\"true\"==t.openIsCCW?\"checked\":\"\",\"true\"==t.swapLimSW?swapTxt=\"checked\":swapTxt=\"\",\"true\"==t.deviceTimedOut?$(\"#hdErr-\"+s).show():$(\"#hdErr-\"+s).hide(),$(\"#hd1-\"+s)[0].innerHTML=t.deviceName,$(\"#hd2-\"+s)[0].innerHTML=\"(\"+n+t.IP+\")\",$(\"#note-\"+s)[0].value=t.note,$(\"#timeOut-\"+s)[0].value=t.timeOut,$(\"#devName-\"+s)[0].value=t.deviceName,$(\"#groupName-\"+s)[0].value=t.group,$(\"#devType-\"+s)[0].value=t.devType,$(\"#devSWver-\"+s)[0].innerHTML=t.swVer,$(\"#pctOpenVal-\"+s)[0].value=posPct(t.motorPos,t.range,t.openIsCCW),$(\"#pctOpenSld-\"+s)[0].value=posPct(t.motorPos,t.range,t.openIsCCW),$(\"#motPosVal-\"+s)[0].value=t.motorPos,$(\"#motPosVal-\"+s)[0].min=\"0\",$(\"#motPosVal-\"+s)[0].max=t.range,$(\"#motPosSld-\"+s)[0].value=t.motorPos,$(\"#motPosSld-\"+s)[0].min=\"0\",$(\"#motPosSld-\"+s)[0].max=t.range,$(\"#calTxt-\"+s)[0].innerHTML=l,$(\"#HWlim-\"+s)[0].innerHTML=\"CCW = 0 CW = \"+t.range))}),$(\".CP\").each(function(e,s){a=!0,$.each(t,function(e,t){\"CP-\"+t.deviceID==s.id&&0==t.dead&&(a=!1)}),a&&$(\"#CP-\"+e).remove()}),$(\"#swRefreshChck-1\")[0].checked&&(pollTimer=setTimeout(function(){pollJSON()},1e4))})}function posPct(e,t,s){if(0==t)return 0;var a=Math.round(e/t*100);return\"true\"==s&&(a=100-a),a}function addDevice(e){if(\"true\"==e.isMaster?(mstrTxt=\"MASTER \",mstrChckTxt=\"checked\",mstrLabel=\"Master Node\"):(mstrTxt=\"\",mstrChckTxt=\"\",mstrLabel=\"Slave Node\"),\"false\"==e.isCalibrated?calTxt=\"HW LIMITS ARE UNCALIBRATED<br>\":calTxt=\"\",\"true\"==e.openIsCCW?(chckTxt=\"checked\",openLabel=\"Open is CCW\"):(chckTxt=\"\",openLabel=\"Open is CW\"),\"true\"==e.swapLimSW?(swapTxt=\"checked\",swapLabel=\"Swapped Lim SW\"):(swapTxt=\"\",swapLabel=\"Normal Lim SW\"),\"true\"==e.deviceTimedOut?(dispTxt=\"inline\",timedOutTxt=\"ERROR - TIMED OUT\"):(dispTxt=\"none\",timedOutTxt=\"\"),\"0\"==e.dead){var t=e.deviceID;return\"<div class='CP' id='CP-\"+t+\"'><input type='hidden' id='targetIP-\"+t+\"' value='\"+e.IP+\"'><div class='CPhd' id='hd1-\"+t+\"'>\"+e.deviceName+\"</div><div class='CPhd2' id='hd2-\"+t+\"'>(\"+mstrTxt+e.IP+\")</div><div class='CPhdErr' id='hdErr-\"+t+\" display='\"+dispTxt+\"'>\"+timedOutTxt+\"</div><div class='sldRow'>\\t<div class='sldLab'>% Open</div><input class='sld' id='pctOpenSld-\"+t+\"' type='range' value='\"+posPct(e.motorPos,e.range,e.openIsCCW)+\"' max='100' min='0' oninput=sync(\"+t+\",'pctOpen',1)> <input class='sldVal' id='pctOpenVal-\"+t+\"' type='number' value='\"+posPct(e.motorPos,e.range,e.openIsCCW)+\"' max='100' min='0' onchange=sync(\"+t+\",'pctOpen',2)></div><div class='btnRow'><input class='lftBtn' id='fcbtn-\"+t+\"' type='button' value='Full Close' onclick=sendCmd(\"+t+\",'C')><input class='midBtn' id='pobtn-\"+t+\"' type='button' value='Go % Open' onclick=sendCmd(\"+t+\",'G')><input class='rgtBtn' id='fobtn-\"+t+\"' type='button' value='Full Open' onclick=sendCmd(\"+t+\",'O')></div><div class='btnRow'><input class='fullBtn' id='stpbtn-\"+t+\"' type='button' value='Stop' onclick=sendCmd(\"+t+\",'S')></div><div class='cfgPnl' id='cfgPnl-\"+t+\"' style='display: hidden;'><hr><label class='cfgInpLab' for='devNote-\"+t+\"'>Note:<input class='cfgInp' id='note-\"+t+\"' value='\"+e.note+\"' maxlength='55'></label><hr><div class='calTxt' id='calTxt-\"+t+\"'>\"+calTxt+\"</div><label class='calTxt' >HW Limits: <span class='cfgInp' id='HWlim-\"+t+\"'>CCW = 0 CW = \"+e.range+\"</span></label> \\t<div class='sldRow'>\\t\\t<div class='sldLab'>Mot Pos</div><input class='sld-dis' id='motPosSld-\"+t+\"' type='range' value='\"+e.motorPos+\"' max='\"+e.range+\"' min='0' disabled> <input class='sldVal' id='motPosVal-\"+t+\"' type='number' value='\"+e.motorPos+\"' max='\"+e.range+\"' min='0' disabled>\\t</div><hr>\\t<label class='cfgInpLab' for='timeOut-\"+t+\"'>Time Out:<input class='cfgInpNum' id='timeOut-\"+t+\"' value='\"+e.timeOut+\"' maxlength='5' title='Enter a time (in seconds) to wait for the actuator to respond before stopped and displaying an error message (assuming the actuator got stuck).'></label>\\t<div class='swRow'>\\t\\t<label class='sw' id='sw-\"+t+\"'><input type='checkbox' id='swChck-\"+t+\"' \"+chckTxt+\" onchange=openIsCCWUpd(\"+t+\")><span class='sldSw'></span></label><span class='swLab' id='swLab-\"+t+\"'>\"+openLabel+\"</span>\\t</div>\\t<div class='swRow'>\\t\\t<label class='sw' id='swMstr-\"+t+\"'><input type='checkbox' id='swMstrChck-\"+t+\"' \"+mstrChckTxt+\" onchange=swMstrUpd(\"+t+\")><span class='sldSw'></span></label><span class='swLab' id='swMstrLab-\"+t+\"'>\"+mstrLabel+\"</span>\\t</div>\\t<div class='swRow'>\\t\\t<label class='sw' id='swSwap-\"+t+\"'><input type='checkbox' id='swSwapChck-\"+t+\"' \"+swapTxt+\" onchange=swSwapUpd(\"+t+\")><span class='sldSw'></span></label><span class='swLab' id='swSwapLab-\"+t+\"'>\"+swapLabel+\"</span>\\t</div>\\t<label class='cfgInpLab' for='devName-\"+t+\"'>Device Name:<input class='cfgInp' id='devName-\"+t+\"' value='\"+e.deviceName+\"' maxlength='40'></label>\\t<label class='cfgInpLab' for='groupName-\"+t+\"'>Group Name:<input class='cfgInp' id='groupName-\"+t+\"' value='\"+e.group+\"' maxlength='40'></label>\\t<label class='cfgInpLab' for='devType-\"+t+\"'>Device Type:<input class='cfgInp' id='devType-\"+t+\"' value='\"+e.devType+\"' maxlength='20'></label>\\t<label class='cfgInpLab' >SW Version:<span class='cfgInp' id='devSWver-\"+t+\"'>\"+e.swVer+\"</span></label>\\t<div class='btnRow'>\\t<input class='cfgBtnY' id='updCfgBtn-\"+t+\"' type='button' value='UPDATE SETTINGS' onclick=sendCmd(\"+t+\",'config') title='This will save new settings in the device. New settings should be displayed on next refresh.  If trying to adjust mulitple settings it is recommended that you temporarily turn off Auto-refresh.'>\\t<input class='cfgBtnY' id='updCfgBtn-\"+t+\"' type='button' value='REBOOT DEVICE' onclick=sendCmd(\"+t+\",'reboot') title='This will reboot the device.'>\\t</div><div class='btnRow'><input class='cfgBtn' id='updCfgBtn-\"+t+\"' type='button' value='AUTO-CAL. HW LIM' onclick=sendCmd(\"+t+\",'cal') title='WARNING: Auto-Cal will attempt to cycle your actuator full open and shut to determine  hardware limit switch positions. Ensure that range is possible to prevent damage.'>\\t<input class='cfgBtn' id='rstWifiBtn-\"+t+\"' type='button' value='RESET WIFI' onclick=sendCmd(\"+t+\",'rstWifi') title='WARNING: Reset Wifi will attempt to delete your network SSID and password and put the device into wifi-server mode to learn new wifi SSID and password. To teach a reset device a new wifi network go to the device IP address using a mobile phone or computer.'>\\t</div>\\t<hr></div><div class='btnRow'><input class='tglBtn' id='cfgBtn-\"+t+\"' type='button' value='[+] Show Settings Panel' onclick=toggleCfg(\"+t+\")></div></div>\"}}var pollTimer;function buildPage(){var e=JSON.parse(fishyNetJSON).fishyDevices,s=[];$.each(e,function(e,t){s.push(addDevice(t))}),$(\"<div/>\",{class:\"flex-container\",html:s.join(\"\")}).appendTo(\"#myBody\"),pollTimer=setTimeout(function(){pollJSON()},1e4)}window.onload=buildPage(),$(\".cfgInp\").keyup(function(e){var t=$.trim($(this).val());if(\"\"!=t){/^[A-Za-z0-9_ .,-]+$/.test(t)||(alert(\"Only letters, numbers, underscore, space, comma, period, and dash are allowed.\"),$(this).val($(this).val().replace(/[^A-Za-z0-9_ .,-]/g,\"\")))}}),$(\".cfgInpNum\").keyup(function(e){var t=$.trim($(this).val());if(\"\"!=t){/^[0-9]+$/.test(t)||(alert(\"Only numbers are allowed.\"),$(this).val($(this).val().replace(/[^0-9]/g,\"\")))}})</script>";
//alternate scripts - used for software updater
const char WEBSTRPT4ALT[] PROGMEM = "<script>function addDevice(e){\"true\"==e.isMaster?mstrTxt=\"MASTER\":mstrTxt=\"\";var i=e.deviceID;return\"<div class='CP' id='\"+i+\"'><div class='CPhd' id='hd1-\"+i+\"'>\"+e.IP+\"<br>\"+e.deviceName+\"</div><iframe id='swUpdate-\"+i+\"' class='swUpdate' src='http://\"+e.IP+\"/SWupdateDevForm' ></iframe><br><div class='CPft'>\"+mstrTxt+\"</div></div>\"}function buildPage(){var e=JSON.parse(fishyNetJSON).fishyDevices,d=[];$.each(e,function(e,i){d.push(addDevice(i))}),$(\"<div/>\",{class:\"flex-container\",html:d.join(\"\")}).appendTo(\"#myBody\")}window.onload=buildPage()</script>";
//the end
const char WEBSTRPT5[] PROGMEM = "<div class=fishyFtr><a href=/ >[Controls]</a> <a href=/SWupdater>[SW Update]</a></div>";

const char WEBSTR_SWUPDATE_PT1[] PROGMEM ="<style>a{color:#fff}.main,body{font-family:\"Lucida Sans Unicode\",\"Lucida Grande\",sans-serif}#loader{position:absolute;left:50%;top:50%;z-index:1;width:150px;height:150px;margin:-75px 0 0 -75px;border:16px solid #f3f3f3;border-radius:50%;border-top:16px solid #3498db;width:120px;height:120px;-webkit-animation:spin 2s linear infinite;animation:spin 2s linear infinite}@-webkit-keyframes spin{0%{-webkit-transform:rotate(0)}100%{-webkit-transform:rotate(360deg)}}@keyframes spin{0%{transform:rotate(0)}100%{transform:rotate(360deg)}}</style><script>function showLoader(){document.getElementById(\"loader\").style.display=\"block\",document.getElementById(\"formDiv\").style.display=\"none\"}</script><div id=loader style=display:none></div><div id=formDiv><hr>";
const char WEBSTR_SWUPDATE_PT2[] PROGMEM ="<hr><form action=''enctype=multipart/form-data method=POST onsubmit='return showLoader()'><input style='font-family:\"Lucida Sans Unicode\",\"Lucida Grande\",sans-serif'type=file name=update><br><input style='font-family:\"Lucida Sans Unicode\",\"Lucida Grande\",sans-serif'type=submit value=Update></form>";
const char WEBSTR_SWUPDATE_SUCCESS[] PROGMEM = 
  "<META http-equiv=\"refresh\" content=\"15;URL=/SWupdateDevForm\"><DIV style='font-family: \"Lucida Sans Unicode\", \"Lucida Grande\", sans-serif;'>Software Update Was Successful! Rebooting...\n</DIV>";