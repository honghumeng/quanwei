<?php
$z[0]=Array("field","",430,449);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",450,476);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",517,546);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",586,644);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1646,1681);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1869,1888);
$z[5][4]=array();
$z[5][4]['name']="title";
$z[6]=Array("field","",1952,1973);
$z[6][4]=array();
$z[6][4]['name']="content";
$z[7]=Array("sql"," \r\n          \r\n          [field:content  function='cn_substr(html2text(@me),300)'/]...\r\n          \r\n          ",2176,2358);
$z[7][4]=array();
$z[7][4]['sql']="Select content from dede_arctype where id=48";
$z[8]=Array("arclist","\r\n          <li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n          ",2537,2699);
$z[8][4]=array();
$z[8][4]['sort']="hot";
$z[8][4]['subday']="30";
$z[8][4]['titlelen']="60";
$z[8][4]['row']="10";
$z[8][4]['typeid']="top";
$z[9]=Array("include","",2764,2801);
$z[9][4]=array();
$z[9][4]['filename']="footer.htm";

?>