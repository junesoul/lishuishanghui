<?php
$z[0]=Array("global","",65,93);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("global","",236,266);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",305,332);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("channel","\r\n						<li> <a href=\"list.php?tid=[field:id/]\">[field:typename/]</a>\r\n						</li>",2164,2295);
$z[3][4]['type']="top";
$z[3][4]['row']="10";
$z[4]=Array("arclist","\r\n				<li>\r\n					<img src=\"[field:litpic/]\">\r\n				</li>",2483,2587);
$z[4][4]['typeid']="11";
$z[4][4]['row']="5";
$z[5]=Array("arclist","\r\n					<li class=\"am-g am-list-item-desced am-list-item-thumbed am-list-item-thumb-left\">\r\n						<div class=\"am-u-sm-4 am-list-thumb\">	<a href=\"[field:arcurl/]\">[field:image/]</a>\r\n						</div>\r\n						<div class=\"am-u-sm-8 am-list-main\">\r\n							 <h3 class=\"am-list-item-hd\"><a href=\"[field:arcurl/]\">[field:title/]</a></h3>\r\n							<div class=\"am-list-item-text\">[field:description/]</div>\r\n						</div>\r\n					</li>",4318,4852);
$z[5][4]['row']="6";
$z[5][4]['noflag']="s,b";
$z[5][4]['flag']="p";
$z[5][4]['orderby']="pubdate";
$z[5][4]['type']="image.";
$z[5][4]['imgwidth']="100";
$z[5][4]['imgheight']="100";
$z[6]=Array("arclist","\r\n					<li class=\"am-g am-list-item-desced am-list-item-thumbed am-list-item-thumb-left\">\r\n					 	<div class=\"am-u-sm-4 am-list-thumb\">	<a href=\"[field:arcurl/]\">[field:image/]</a>\r\n						</div>  \r\n						<div class=\"am-u-sm-8 am-list-main\" style=\"width:100%\">\r\n							 <h3 class=\"am-list-item-hd\"><a  href=\"[field:arcurl/]\">[field:title/]</a></h3>\r\n							<div class=\"am-list-item-text\">[field:description/]</div>\r\n						</div>\r\n					</li>",4937,5469);
$z[6][4]['row']="10";
$z[6][4]['noflag']="s";
$z[6][4]['orderby']="pubdate";
$z[6][4]['type']="image";
$z[6][4]['titlelen']="60";
$z[7]=Array("channelartlist","\r\n		<div data-am-widget=\"list_news\" class=\"am-list-news am-list-news-default\">\r\n			<!--列表标题-->\r\n			<div class=\"am-list-news-hd am-cf\">\r\n				<!--带更多链接-->\r\n				<a href=\"list.php?tid={dede:field name='id'/}\">\r\n					 <h2 style=\"color:black\">{dede:field name='typename'/}</h2>\r\n				</a>\r\n			</div>\r\n			<div class=\"am-list-news-bd\">\r\n				<ul class=\"am-list\">{dede:arclist titlelen='60' row='8'}\r\n					<li class=\"am-g\" > <a href=\"view.php?aid=[field:id/]\" class=\"am-list-item-hd\" >[field:title /]</a>\r\n                      <p style=\"margin:0;float:left;font-size:13px;color:#757575\">发布日期：[field:stime /]</p>\r\n					</li>{/dede:arclist}</ul>\r\n			</div>\r\n			<!--更多在底部-->\r\n			<div class=\"am-list-news-ft\" style=\"text-align: right;\"> <a style=\"color:#666\" class=\"am-list-news-more am-btn\" href=\"list.php?tid={dede:field name='id'/}\">查看更多 »</a>\r\n			</div>\r\n		</div>",5498,6461);
$z[7][4]['typeid']="1,5,12,2,4";
$z[8]=Array("include","",6461,6500);
$z[8][4]['filename']="footer_m.htm";

?>