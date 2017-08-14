<?php
$z[0]=Array("arcurl","",55,70);
$z[0][4]=array();
$z[1]=Array("litpic","",94,109);
$z[1][4]=array();
$z[2]=Array("title","",116,130);
$z[2][4]=array();
$z[3]=Array("arcurl","",165,180);
$z[3][4]=array();
$z[4]=Array("title","",182,196);
$z[4][4]=array();
$z[5]=Array("description","",224,274);
$z[5][4]=array();
$z[5][4]['function']="cn_substr(@me,250)";
$z[6]=Array("writer","",332,347);
$z[6][4]=array();
$z[7]=Array("pubdate","",381,432);
$z[7][4]=array();
$z[7][4]['function']="MyDate('Y-m-d H:i',@me)";
$z[8]=Array("link","",452,465);
$z[8][4]=array();
$z[9]=Array("id","     \nglobal \$cfg_cmspath;        \n\$tags = GetTags(@me);        \n\$revalue = '';        \n\$tags = explode(',', \$tags);        \nforeach(\$tags as \$key => \$value){\n            if(\$value){\n                \$revalue .= '<a href=\"'.\$cfg_cmspath.'/tags.php?/'.\$value.'/\">'.\$value.'</a>&nbsp;';         \n   }      \n  }        \n@me = \$revalue;     \n",500,871);
$z[9][4]=array();
$z[9][4]['runphp']="yes";

?>