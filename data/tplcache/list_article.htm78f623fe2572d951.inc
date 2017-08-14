<?php
$z[0]=Array("field","",179,198);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",199,225);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",267,296);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",335,393);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1202,1237);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("global","",1361,1387);
$z[5][4]=array();
$z[5][4]['name']="cfg_webname";
$z[6]=Array("type","\r\n					<a href=\"[field:typeurl/]\">[field:typename/]</a>\r\n				",1426,1510);
$z[6][4]=array();
$z[7]=Array("list","\r\n		<div class=\"item-subject\">\r\n			<a href=\"[field:arcurl/]\" class=\"img\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\"></a>		<h3 class=\"title\"><a href=\"[field:arcurl/]\">[field:title/]</a></h3>\r\n			<p class=\"desc\">[field:description function='cn_substr(@me,250)'/]</p>\r\n			<div class=\"attr\">\r\n				<span class=\"attr-author\">[field:writer/]</span>	<span class=\"attr-time\">[field:pubdate function=\"tranTime(@me)\" /]</span>\r\n				[field:id function=GetTags(@me)/]\r\n			</div>\r\n		</div>\r\n	",1567,2087);
$z[7][4]=array();
$z[7][4]['pagesize']="10";
$z[8]=Array("pagelist","",2736,2783);
$z[8][4]=array();
$z[8][4]['listitem']="pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("pagelist","",2794,2865);
$z[9][4]=array();
$z[9][4]['listitem']="info,index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",2891,2927);
$z[10][4]=array();
$z[10][4]['filename']="right.htm";

?>