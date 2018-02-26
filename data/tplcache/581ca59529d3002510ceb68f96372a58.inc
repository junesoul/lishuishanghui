<div class="commend mt1">
   <dl class="tbox light">
    <dt class='light'><strong>{dede:field name='typename'/}</strong><span class="more"><a href="{dede:field name='typeurl'/}">更多...</a></span></dt>
    <dd class='light'>
     <ul class="c1 ico2">
		<div class="flashnews">
   <!-- size: 280px * 192px -->
			<script language='javascript'>
			linkarr = new Array();
			picarr = new Array();
			textarr = new Array();
			var swf_width=240;
			var swf_height=192;
			//文字颜色|文字位置|文字背景颜色|文字背景透明度|按键文字颜色|按键默认颜色|按键当前颜色|自动播放时间|图片过渡效果|是否显示按钮|打开方式
			var configtg='';
			var files ="http://static.video.qq.com/TPout.swf?vid=f0166px3eyf&auto=0";
			var links = "";
			var texts = "";
			//这里设置调用标记
			{dede:arclist flag='f' row='5'}
			linkarr[[field:global.autoindex/]] = "[field:arcurl/]";
			picarr[[field:global.autoindex/]]  = "[field:litpic/]";
			textarr[[field:global.autoindex/]] = "[field:title function='html2text(@me)'/]";
			{/dede:arclist}
			for(i=1;i<picarr.length;i++){
			if(files=="") files = picarr[i];
			else files += "|"+picarr[i];
			}
			for(i=1;i<linkarr.length;i++){
			if(links=="") links = linkarr[i];
			else links += "|"+linkarr[i];
			}
			for(i=1;i<textarr.length;i++){
			if(texts=="") texts = textarr[i];
			else texts += "|"+textarr[i];
			}
			document.write('<object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000" codebase="http://fpdownload.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=6,0,0,0" width="'+ swf_width +'" height="'+ swf_height +'">');
			document.write('<param name="movie" value="http://player.youku.com/player.php/sid/XODg3NjIzNDI4/v.swf"><param name="quality" value="high">');
			document.write('<param name="menu" value="false"><param name=wmode value="opaque">');
			document.write('<param name="FlashVars" value="bcastr_file='+files+'">');
			document.write('<embed src="http://player.youku.com/player.php/sid/XODg3NjIzNDI4/v.swf" wmode="opaque" FlashVars="bcastr_file='+files+'&menu="false" quality="high" width="'+ swf_width +'" height="'+ swf_height +'" type="application/x-shockwave-flash" pluginspage="http://www.macromedia.com/go/getflashplayer" />'); document.write('</object>');
			</script>
		</div>
     </ul>
    </dd>
   </dl>
  </div>