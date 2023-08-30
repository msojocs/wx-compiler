void __fastcall WXML::EXPRLib::TransitTable::Init(int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // ecx
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  int v22; // eax
  int v23; // ecx
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  int v27; // eax
  int v28; // ecx
  _DWORD *v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // ecx
  _DWORD *v34; // eax
  _DWORD *v35; // eax
  _DWORD *v36; // eax
  int v37; // eax
  int v38; // ecx
  _DWORD *v39; // eax
  _DWORD *v40; // eax
  _DWORD *v41; // eax
  int v42; // eax
  int v43; // ecx
  _DWORD *v44; // eax
  _DWORD *v45; // eax
  _DWORD *v46; // eax
  int v47; // eax
  int v48; // ecx
  _DWORD *v49; // eax
  _DWORD *v50; // eax
  _DWORD *v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // ecx
  int v55; // ecx
  _DWORD *v56; // eax
  _DWORD *v57; // eax
  int v58; // eax
  int v59; // ecx
  _DWORD *v60; // eax
  _DWORD *v61; // eax
  int v62; // eax
  int v63; // ecx
  _DWORD *v64; // eax
  _DWORD *v65; // eax
  int v66; // eax
  int v67; // ecx
  _DWORD *v68; // eax
  _DWORD *v69; // eax
  int v70; // eax
  int v71; // ecx
  _DWORD *v72; // eax
  _DWORD *v73; // eax
  int v74; // eax
  int v75; // ecx
  _DWORD *v76; // eax
  _DWORD *v77; // eax
  int v78; // eax
  int v79; // ecx
  _DWORD *v80; // eax
  _DWORD *v81; // eax
  int v82; // eax
  int v83; // ecx
  _DWORD *v84; // eax
  _DWORD *v85; // eax
  int v86; // eax
  int v87; // ecx
  _DWORD *v88; // eax
  _DWORD *v89; // eax
  int v90; // eax
  int v91; // ecx
  _DWORD *v92; // eax
  _DWORD *v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // ecx
  int v97; // ecx
  _DWORD *v98; // eax
  _DWORD *v99; // eax
  int v100; // eax
  int v101; // ecx
  _DWORD *v102; // eax
  _DWORD *v103; // eax
  int v104; // eax
  int v105; // ecx
  _DWORD *v106; // eax
  _DWORD *v107; // eax
  int v108; // eax
  int v109; // ecx
  _DWORD *v110; // eax
  _DWORD *v111; // eax
  int v112; // eax
  int v113; // ecx
  _DWORD *v114; // eax
  _DWORD *v115; // eax
  int v116; // eax
  int v117; // ecx
  _DWORD *v118; // eax
  _DWORD *v119; // eax
  int v120; // eax
  int v121; // ecx
  _DWORD *v122; // eax
  _DWORD *v123; // eax
  int v124; // eax
  int v125; // ecx
  _DWORD *v126; // eax
  _DWORD *v127; // eax
  int v128; // eax
  int v129; // ecx
  _DWORD *v130; // eax
  _DWORD *v131; // eax
  int v132; // eax
  int v133; // ecx
  _DWORD *v134; // eax
  _DWORD *v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // ecx
  int v139; // ecx
  _DWORD *v140; // eax
  _DWORD *v141; // eax
  int v142; // eax
  int v143; // ecx
  _DWORD *v144; // eax
  _DWORD *v145; // eax
  int v146; // eax
  int v147; // ecx
  _DWORD *v148; // eax
  _DWORD *v149; // eax
  int v150; // eax
  int v151; // ecx
  _DWORD *v152; // eax
  _DWORD *v153; // eax
  int v154; // eax
  int v155; // ecx
  _DWORD *v156; // eax
  _DWORD *v157; // eax
  int v158; // eax
  int v159; // ecx
  _DWORD *v160; // eax
  _DWORD *v161; // eax
  int v162; // eax
  int v163; // ecx
  _DWORD *v164; // eax
  _DWORD *v165; // eax
  int v166; // eax
  int v167; // ecx
  _DWORD *v168; // eax
  _DWORD *v169; // eax
  int v170; // eax
  int v171; // ecx
  _DWORD *v172; // eax
  _DWORD *v173; // eax
  int v174; // eax
  int v175; // ecx
  _DWORD *v176; // eax
  _DWORD *v177; // eax
  int v178; // eax
  int v179; // eax
  int v180; // ecx
  int v181; // ecx
  _DWORD *v182; // eax
  _DWORD *v183; // eax
  int v184; // eax
  int v185; // ecx
  _DWORD *v186; // eax
  _DWORD *v187; // eax
  int v188; // eax
  int v189; // ecx
  _DWORD *v190; // eax
  _DWORD *v191; // eax
  int v192; // eax
  int v193; // ecx
  _DWORD *v194; // eax
  _DWORD *v195; // eax
  int v196; // eax
  int v197; // ecx
  _DWORD *v198; // eax
  _DWORD *v199; // eax
  int v200; // eax
  int v201; // ecx
  _DWORD *v202; // eax
  _DWORD *v203; // eax
  int v204; // eax
  int v205; // ecx
  _DWORD *v206; // eax
  _DWORD *v207; // eax
  int v208; // eax
  int v209; // ecx
  _DWORD *v210; // eax
  _DWORD *v211; // eax
  int v212; // eax
  int v213; // ecx
  _DWORD *v214; // eax
  _DWORD *v215; // eax
  int v216; // eax
  int v217; // ecx
  _DWORD *v218; // eax
  _DWORD *v219; // eax
  int v220; // eax
  int v221; // eax
  int v222; // ecx
  int v223; // ecx
  _DWORD *v224; // eax
  _DWORD *v225; // eax
  int v226; // eax
  int v227; // ecx
  _DWORD *v228; // eax
  _DWORD *v229; // eax
  int v230; // eax
  int v231; // ecx
  _DWORD *v232; // eax
  _DWORD *v233; // eax
  int v234; // eax
  int v235; // ecx
  _DWORD *v236; // eax
  _DWORD *v237; // eax
  int v238; // eax
  int v239; // ecx
  _DWORD *v240; // eax
  _DWORD *v241; // eax
  int v242; // eax
  int v243; // ecx
  _DWORD *v244; // eax
  _DWORD *v245; // eax
  int v246; // eax
  int v247; // ecx
  _DWORD *v248; // eax
  _DWORD *v249; // eax
  int v250; // eax
  int v251; // ecx
  _DWORD *v252; // eax
  _DWORD *v253; // eax
  int v254; // eax
  int v255; // ecx
  _DWORD *v256; // eax
  _DWORD *v257; // eax
  int v258; // eax
  int v259; // ecx
  _DWORD *v260; // eax
  _DWORD *v261; // eax
  int v262; // eax
  int v263; // eax
  int v264; // ecx
  int v265; // ecx
  _DWORD *v266; // eax
  _DWORD *v267; // eax
  int v268; // eax
  int v269; // ecx
  _DWORD *v270; // eax
  _DWORD *v271; // eax
  int v272; // eax
  int v273; // ecx
  _DWORD *v274; // eax
  _DWORD *v275; // eax
  int v276; // eax
  int v277; // ecx
  _DWORD *v278; // eax
  _DWORD *v279; // eax
  int v280; // eax
  int v281; // ecx
  _DWORD *v282; // eax
  _DWORD *v283; // eax
  int v284; // eax
  int v285; // ecx
  _DWORD *v286; // eax
  _DWORD *v287; // eax
  int v288; // eax
  int v289; // ecx
  _DWORD *v290; // eax
  _DWORD *v291; // eax
  int v292; // eax
  int v293; // ecx
  _DWORD *v294; // eax
  _DWORD *v295; // eax
  int v296; // eax
  int v297; // ecx
  _DWORD *v298; // eax
  _DWORD *v299; // eax
  int v300; // eax
  int v301; // ecx
  _DWORD *v302; // eax
  _DWORD *v303; // eax
  int v304; // eax
  int v305; // eax
  int v306; // ecx
  int v307; // ecx
  _DWORD *v308; // eax
  int v309; // eax
  int v310; // ecx
  _DWORD *v311; // eax
  int v312; // eax
  int v313; // ecx
  _DWORD *v314; // eax
  int v315; // eax
  int v316; // ecx
  _DWORD *v317; // eax
  int v318; // eax
  int v319; // ecx
  _DWORD *v320; // eax
  int v321; // eax
  int v322; // ecx
  int v323; // eax
  _DWORD *v324; // eax
  int v325; // edx
  int v326; // eax
  _DWORD *v327; // eax
  int v328; // eax
  int v329; // ecx
  _DWORD *v330; // eax
  int v331; // eax
  int v332; // ecx
  _DWORD *v333; // eax
  int v334; // eax
  int v335; // ecx
  _DWORD *v336; // eax
  int v337; // eax
  int v338; // eax
  int v339; // ecx
  int v340; // ecx
  _DWORD *v341; // eax
  int v342; // eax
  int v343; // ecx
  _DWORD *v344; // eax
  int v345; // eax
  int v346; // ecx
  _DWORD *v347; // eax
  int v348; // eax
  int v349; // ecx
  _DWORD *v350; // eax
  int v351; // eax
  int v352; // ecx
  _DWORD *v353; // eax
  int v354; // eax
  int v355; // ecx
  _DWORD *v356; // eax
  int v357; // eax
  int v358; // ecx
  int v359; // edx
  _DWORD *v360; // eax
  _DWORD *v361; // eax
  int v362; // eax
  _DWORD *v363; // eax
  _DWORD *v364; // eax
  int v365; // eax
  int v366; // eax
  int v367; // eax
  int v368; // eax
  int v369; // ecx
  int v370; // ecx
  int v371; // eax
  _DWORD *v372; // eax
  int v373; // eax
  int v374; // edx
  int v375; // eax
  _DWORD *v376; // eax
  int v377; // eax
  int v378; // ecx
  int v379; // eax
  int v380; // edx
  int v381; // eax
  _DWORD *v382; // eax
  int v383; // eax
  int v384; // eax
  int v385; // ecx
  int v386; // ecx
  _DWORD *v387; // eax
  int v388; // eax
  int v389; // ecx
  int v390; // eax
  _DWORD *v391; // eax
  int v392; // edx
  int v393; // eax
  _DWORD *v394; // eax
  int v395; // eax
  int v396; // ecx
  int v397; // eax
  _DWORD *v398; // eax
  int v399; // edx
  int v400; // eax
  _DWORD *v401; // eax
  int v402; // eax
  int v403; // ecx
  _DWORD *v404; // eax
  int v405; // eax
  int v406; // ecx
  _DWORD *v407; // eax
  int v408; // eax
  int v409; // ecx
  _DWORD *v410; // eax
  int v411; // eax
  int v412; // ecx
  _DWORD *v413; // eax
  int v414; // eax
  int v415; // ecx
  _DWORD *v416; // eax
  int v417; // eax
  int v418; // ecx
  _DWORD *v419; // eax
  int v420; // eax
  int v421; // ecx
  _DWORD *v422; // eax
  int v423; // eax
  int v424; // ecx
  _DWORD *v425; // eax
  int v426; // eax
  int v427; // ecx
  _DWORD *v428; // eax
  int v429; // eax
  int v430; // ecx
  _DWORD *v431; // eax
  int v432; // eax
  int v433; // ecx
  _DWORD *v434; // eax
  int v435; // eax
  int v436; // ecx
  _DWORD *v437; // eax
  int v438; // eax
  int v439; // ecx
  _DWORD *v440; // eax
  int v441; // eax
  int v442; // ecx
  _DWORD *v443; // eax
  int v444; // eax
  int v445; // ecx
  _DWORD *v446; // eax
  int v447; // eax
  int v448; // ecx
  _DWORD *v449; // eax
  int v450; // eax
  int v451; // ecx
  _DWORD *v452; // eax
  int v453; // eax
  int v454; // ecx
  _DWORD *v455; // eax
  int v456; // eax
  int v457; // ecx
  _DWORD *v458; // eax
  int v459; // eax
  int v460; // eax
  int v461; // ecx
  int v462; // ecx
  int v463; // eax
  _DWORD *v464; // eax
  int v465; // edx
  int v466; // eax
  _DWORD *v467; // eax
  int v468; // eax
  int v469; // ecx
  int v470; // ecx
  _DWORD *v471; // eax
  _DWORD *v472; // eax
  int v473; // eax
  int v474; // eax
  int v475; // ecx
  int v476; // ecx
  int v477; // eax
  _DWORD *v478; // eax
  int v479; // eax
  int v480; // eax
  int v481; // eax
  int v482; // ecx
  int v483; // eax
  _DWORD *v484; // eax
  int v485; // eax
  int v486; // eax
  int v487; // ecx
  int v488; // ecx
  _DWORD *v489; // eax
  _DWORD *v490; // eax
  int v491; // eax
  int v492; // ecx
  _DWORD *v493; // eax
  _DWORD *v494; // eax
  int v495; // eax
  int v496; // ecx
  _DWORD *v497; // eax
  _DWORD *v498; // eax
  int v499; // eax
  int v500; // ecx
  _DWORD *v501; // eax
  _DWORD *v502; // eax
  int v503; // eax
  int v504; // ecx
  _DWORD *v505; // eax
  _DWORD *v506; // eax
  int v507; // eax
  int v508; // ecx
  _DWORD *v509; // eax
  _DWORD *v510; // eax
  int v511; // eax
  int v512; // ecx
  _DWORD *v513; // eax
  _DWORD *v514; // eax
  int v515; // eax
  int v516; // ecx
  _DWORD *v517; // eax
  _DWORD *v518; // eax
  int v519; // eax
  int v520; // ecx
  _DWORD *v521; // eax
  _DWORD *v522; // eax
  int v523; // eax
  int v524; // ecx
  _DWORD *v525; // eax
  _DWORD *v526; // eax
  int v527; // eax
  int v528; // eax
  int v529; // ecx
  int v530; // ecx
  int v531; // eax
  _DWORD *v532; // eax
  int v533; // edx
  int v534; // eax
  _DWORD *v535; // eax
  int v536; // eax
  int v537; // ecx
  int v538; // eax
  _DWORD *v539; // eax
  int v540; // edx
  int v541; // eax
  _DWORD *v542; // eax
  int v543; // eax
  int v544; // ecx
  _DWORD *v545; // eax
  int v546; // eax
  int v547; // ecx
  _DWORD *v548; // eax
  int v549; // eax
  int v550; // ecx
  int v551; // eax
  _DWORD *v552; // eax
  int v553; // edx
  int v554; // eax
  _DWORD *v555; // eax
  int v556; // eax
  int v557; // ecx
  _DWORD *v558; // eax
  int v559; // eax
  int v560; // ecx
  _DWORD *v561; // eax
  int v562; // eax
  int v563; // ecx
  _DWORD *v564; // eax
  int v565; // eax
  int v566; // ecx
  _DWORD *v567; // eax
  int v568; // eax
  int v569; // ecx
  _DWORD *v570; // eax
  int v571; // eax
  int v572; // ecx
  _DWORD *v573; // eax
  int v574; // eax
  int v575; // ecx
  _DWORD *v576; // eax
  int v577; // eax
  int v578; // ecx
  int v579; // eax
  _DWORD *v580; // eax
  int v581; // edx
  int v582; // eax
  _DWORD *v583; // eax
  int v584; // eax
  int v585; // ecx
  _DWORD *v586; // eax
  int v587; // eax
  int v588; // ecx
  _DWORD *v589; // eax
  int v590; // eax
  int v591; // ecx
  _DWORD *v592; // eax
  int v593; // eax
  int v594; // eax
  int v595; // ecx
  int v596; // ecx
  _DWORD *v597; // eax
  int v598; // eax
  int v599; // ecx
  _DWORD *v600; // eax
  int v601; // eax
  int v602; // ecx
  _DWORD *v603; // eax
  int v604; // eax
  int v605; // ecx
  _DWORD *v606; // eax
  int v607; // eax
  int v608; // ecx
  _DWORD *v609; // eax
  int v610; // eax
  int v611; // ecx
  _DWORD *v612; // eax
  int v613; // eax
  int v614; // ecx
  _DWORD *v615; // eax
  int v616; // eax
  int v617; // ecx
  _DWORD *v618; // eax
  int v619; // eax
  int v620; // ecx
  _DWORD *v621; // eax
  int v622; // eax
  int v623; // ecx
  _DWORD *v624; // eax
  int v625; // eax
  int v626; // ecx
  int v627; // eax
  _DWORD *v628; // eax
  int v629; // edx
  int v630; // eax
  _DWORD *v631; // eax
  int v632; // eax
  int v633; // eax
  int v634; // ecx
  int v635; // ecx
  _DWORD *v636; // eax
  int v637; // eax
  int v638; // ecx
  _DWORD *v639; // eax
  int v640; // eax
  int v641; // ecx
  _DWORD *v642; // eax
  int v643; // eax
  int v644; // ecx
  _DWORD *v645; // eax
  int v646; // eax
  int v647; // ecx
  _DWORD *v648; // eax
  int v649; // eax
  int v650; // ecx
  _DWORD *v651; // eax
  int v652; // eax
  int v653; // ecx
  _DWORD *v654; // eax
  int v655; // eax
  int v656; // ecx
  _DWORD *v657; // eax
  int v658; // eax
  int v659; // ecx
  _DWORD *v660; // eax
  int v661; // eax
  int v662; // ecx
  int v663; // eax
  _DWORD *v664; // eax
  int v665; // eax
  int v666; // edx
  int v667; // eax
  _DWORD *v668; // eax
  int v669; // eax
  int v670; // ecx
  _DWORD *v671; // eax
  int v672; // eax
  int v673; // ecx
  _DWORD *v674; // eax
  int v675; // eax
  int v676; // ecx
  _DWORD *v677; // eax
  int v678; // eax
  int v679; // ecx
  _DWORD *v680; // eax
  int v681; // eax
  int v682; // ecx
  _DWORD *v683; // eax
  int v684; // eax
  int v685; // ecx
  int v686; // ecx
  int v687; // eax
  int v688; // edx
  int v689; // eax
  _DWORD *v690; // eax
  int v691; // eax
  int v692; // ecx
  _DWORD *v693; // eax
  int v694; // eax
  int v695; // ecx
  _DWORD *v696; // eax
  int v697; // eax
  int v698; // ecx
  _DWORD *v699; // eax
  int v700; // eax
  int v701; // ecx
  _DWORD *v702; // eax
  int v703; // eax
  int v704; // ecx
  _DWORD *v705; // eax
  int v706; // eax
  int v707; // ecx
  _DWORD *v708; // eax
  int v709; // eax
  int v710; // ecx
  int v711; // eax
  _DWORD *v712; // eax
  int v713; // eax
  int v714; // edx
  int v715; // eax
  _DWORD *v716; // eax
  int v717; // eax
  int v718; // ecx
  _DWORD *v719; // eax
  int v720; // eax
  int v721; // ecx
  _DWORD *v722; // eax
  int v723; // eax
  int v724; // ecx
  _DWORD *v725; // eax
  int v726; // eax
  int v727; // ecx
  _DWORD *v728; // eax
  int v729; // eax
  int v730; // ecx
  _DWORD *v731; // eax
  int v732; // eax
  int v733; // ecx
  _DWORD *v734; // eax
  int v735; // eax
  int v736; // ecx
  _DWORD *v737; // eax
  int v738; // eax
  int v739; // eax
  int v740; // ecx
  int v741; // ecx
  _DWORD *v742; // eax
  int v743; // eax
  int v744; // ecx
  _DWORD *v745; // eax
  int v746; // eax
  int v747; // ecx
  _DWORD *v748; // eax
  int v749; // eax
  int v750; // ecx
  int v751; // eax
  _DWORD *v752; // eax
  int v753; // edx
  int v754; // eax
  _DWORD *v755; // eax
  int v756; // eax
  int v757; // ecx
  _DWORD *v758; // eax
  int v759; // eax
  int v760; // ecx
  _DWORD *v761; // eax
  int v762; // eax
  int v763; // ecx
  _DWORD *v764; // eax
  int v765; // eax
  int v766; // ecx
  _DWORD *v767; // eax
  int v768; // eax
  int v769; // eax
  int v770; // ecx
  int v771; // ecx
  int v772; // eax
  int v773; // eax
  int v774; // ecx
  int v775; // eax
  int v776; // eax
  int v777; // ecx
  int v778; // eax
  _DWORD *v779; // eax
  int v780; // eax
  int v781; // eax
  int v782; // ecx
  int v783; // eax
  int v784; // eax
  int v785; // ecx
  _DWORD *v786; // eax
  int v787; // eax
  int v788; // ecx
  _DWORD *v789; // eax
  int v790; // eax
  int v791; // ecx
  int v792; // eax
  _DWORD *v793; // eax
  int v794; // eax
  int v795; // eax
  int v796; // eax
  int v797; // ecx
  int v798; // ecx
  _DWORD *v799; // eax
  int v800; // eax
  int v801; // ecx
  _DWORD *v802; // eax
  int v803; // eax
  int v804; // ecx
  _DWORD *v805; // eax
  int v806; // eax
  int v807; // ecx
  int v808; // eax
  _DWORD *v809; // eax
  int v810; // edx
  int v811; // eax
  _DWORD *v812; // eax
  int v813; // eax
  int v814; // ecx
  _DWORD *v815; // eax
  int v816; // eax
  int v817; // ecx
  _DWORD *v818; // eax
  int v819; // eax
  int v820; // ecx
  _DWORD *v821; // eax
  int v822; // eax
  int v823; // ecx
  _DWORD *v824; // eax
  int v825; // eax
  int v826; // ecx
  int v827; // eax
  _DWORD *v828; // eax
  int v829; // edx
  int v830; // eax
  _DWORD *v831; // eax
  int v832; // eax
  int v833; // ecx
  _DWORD *v834; // eax
  int v835; // eax
  int v836; // ecx
  _DWORD *v837; // eax
  int v838; // eax
  int v839; // ecx
  _DWORD *v840; // eax
  int v841; // eax
  int v842; // ecx
  _DWORD *v843; // eax
  int v844; // eax
  int v845; // ecx
  _DWORD *v846; // eax
  int v847; // eax
  int v848; // ecx
  _DWORD *v849; // eax
  int v850; // eax
  int v851; // ecx
  _DWORD *v852; // eax
  int v853; // eax
  int v854; // ecx
  _DWORD *v855; // eax
  int v856; // eax
  int v857; // ecx
  int v858; // eax
  _DWORD *v859; // eax
  int v860; // edx
  int v861; // eax
  _DWORD *v862; // eax
  int v863; // eax
  int v864; // ecx
  _DWORD *v865; // eax
  int v866; // eax
  int v867; // ecx
  int v868; // eax
  _DWORD *v869; // eax
  int v870; // edx
  int v871; // eax
  _DWORD *v872; // eax
  int v873; // eax
  int v874; // eax
  int v875; // ecx
  int v876; // ecx
  _DWORD *v877; // eax
  _DWORD *v878; // eax
  int v879; // eax
  int v880; // ecx
  _DWORD *v881; // eax
  _DWORD *v882; // eax
  int v883; // eax
  int v884; // ecx
  _DWORD *v885; // eax
  _DWORD *v886; // eax
  int v887; // eax
  int v888; // ecx
  _DWORD *v889; // eax
  _DWORD *v890; // eax
  int v891; // eax
  int v892; // ecx
  _DWORD *v893; // eax
  _DWORD *v894; // eax
  int v895; // eax
  int v896; // ecx
  _DWORD *v897; // eax
  _DWORD *v898; // eax
  int v899; // eax
  int v900; // ecx
  _DWORD *v901; // eax
  _DWORD *v902; // eax
  int v903; // eax
  int v904; // ecx
  _DWORD *v905; // eax
  _DWORD *v906; // eax
  int v907; // eax
  int v908; // ecx
  _DWORD *v909; // eax
  _DWORD *v910; // eax
  int v911; // eax
  int v912; // ecx
  _DWORD *v913; // eax
  _DWORD *v914; // eax
  int v915; // eax
  int v916; // eax
  int v917; // ecx
  int v918; // ecx
  _DWORD *v919; // eax
  _DWORD *v920; // eax
  int v921; // eax
  int v922; // ecx
  _DWORD *v923; // eax
  _DWORD *v924; // eax
  int v925; // eax
  int v926; // ecx
  _DWORD *v927; // eax
  _DWORD *v928; // eax
  int v929; // eax
  int v930; // ecx
  _DWORD *v931; // eax
  _DWORD *v932; // eax
  int v933; // eax
  int v934; // ecx
  _DWORD *v935; // eax
  _DWORD *v936; // eax
  int v937; // eax
  int v938; // ecx
  _DWORD *v939; // eax
  _DWORD *v940; // eax
  int v941; // eax
  int v942; // ecx
  _DWORD *v943; // eax
  _DWORD *v944; // eax
  int v945; // eax
  int v946; // ecx
  _DWORD *v947; // eax
  _DWORD *v948; // eax
  int v949; // eax
  int v950; // ecx
  _DWORD *v951; // eax
  _DWORD *v952; // eax
  int v953; // eax
  int v954; // ecx
  _DWORD *v955; // eax
  _DWORD *v956; // eax
  int v957; // eax
  int v958; // eax
  int v959; // ecx
  int v960; // ecx
  _DWORD *v961; // eax
  int v962; // eax
  int v963; // ecx
  _DWORD *v964; // eax
  int v965; // eax
  int v966; // ecx
  _DWORD *v967; // eax
  int v968; // eax
  int v969; // ecx
  int v970; // eax
  _DWORD *v971; // eax
  int v972; // eax
  int v973; // eax
  int v974; // eax
  int v975; // ecx
  _DWORD *v976; // eax
  int v977; // eax
  int v978; // ecx
  _DWORD *v979; // eax
  int v980; // eax
  int v981; // ecx
  _DWORD *v982; // eax
  int v983; // eax
  int v984; // ecx
  _DWORD *v985; // eax
  int v986; // eax
  int v987; // eax
  int v988; // ecx
  int v989; // ecx
  int v990; // eax
  _DWORD *v991; // eax
  int v992; // eax
  int v993; // eax
  int v994; // eax
  int v995; // ecx
  _DWORD *v996; // eax
  int v997; // eax
  int v998; // ecx
  _DWORD *v999; // eax
  int v1000; // eax
  int v1001; // ecx
  _DWORD *v1002; // eax
  int v1003; // eax
  int v1004; // ecx
  _DWORD *v1005; // eax
  int v1006; // eax
  int v1007; // ecx
  _DWORD *v1008; // eax
  int v1009; // eax
  int v1010; // ecx
  _DWORD *v1011; // eax
  int v1012; // eax
  int v1013; // ecx
  _DWORD *v1014; // eax
  int v1015; // eax
  int v1016; // ecx
  _DWORD *v1017; // eax
  int v1018; // eax
  int v1019; // ecx
  int v1020; // eax
  _DWORD *v1021; // eax
  int v1022; // eax
  int v1023; // eax
  int v1024; // eax
  int v1025; // eax
  int v1026; // ecx
  int v1027; // ecx
  _DWORD *v1028; // eax
  _DWORD *v1029; // eax
  int v1030; // eax
  int v1031; // ecx
  _DWORD *v1032; // eax
  _DWORD *v1033; // eax
  int v1034; // eax
  int v1035; // ecx
  _DWORD *v1036; // eax
  _DWORD *v1037; // eax
  int v1038; // eax
  int v1039; // ecx
  _DWORD *v1040; // eax
  _DWORD *v1041; // eax
  int v1042; // eax
  int v1043; // ecx
  _DWORD *v1044; // eax
  _DWORD *v1045; // eax
  int v1046; // eax
  int v1047; // ecx
  _DWORD *v1048; // eax
  _DWORD *v1049; // eax
  int v1050; // eax
  int v1051; // ecx
  _DWORD *v1052; // eax
  _DWORD *v1053; // eax
  int v1054; // eax
  int v1055; // ecx
  _DWORD *v1056; // eax
  _DWORD *v1057; // eax
  int v1058; // eax
  int v1059; // ecx
  _DWORD *v1060; // eax
  _DWORD *v1061; // eax
  int v1062; // eax
  int v1063; // ecx
  _DWORD *v1064; // eax
  _DWORD *v1065; // eax
  int v1066; // eax
  int v1067; // eax
  int v1068; // ecx
  int v1069; // ecx
  _DWORD *v1070; // eax
  int v1071; // eax
  int v1072; // ecx
  _DWORD *v1073; // eax
  int v1074; // eax
  int v1075; // ecx
  _DWORD *v1076; // eax
  int v1077; // eax
  int v1078; // ecx
  _DWORD *v1079; // eax
  int v1080; // eax
  int v1081; // ecx
  _DWORD *v1082; // eax
  int v1083; // eax
  int v1084; // ecx
  int v1085; // eax
  _DWORD *v1086; // eax
  int v1087; // edx
  int v1088; // eax
  _DWORD *v1089; // eax
  int v1090; // eax
  int v1091; // ecx
  _DWORD *v1092; // eax
  int v1093; // eax
  int v1094; // ecx
  _DWORD *v1095; // eax
  int v1096; // eax
  int v1097; // ecx
  _DWORD *v1098; // eax
  int v1099; // eax
  int v1100; // ecx
  _DWORD *v1101; // eax
  int v1102; // eax
  int v1103; // ecx
  int v1104; // eax
  _DWORD *v1105; // eax
  int v1106; // edx
  int v1107; // eax
  _DWORD *v1108; // eax
  int v1109; // eax
  int v1110; // ecx
  _DWORD *v1111; // eax
  int v1112; // eax
  int v1113; // ecx
  _DWORD *v1114; // eax
  int v1115; // eax
  int v1116; // ecx
  int v1117; // eax
  _DWORD *v1118; // eax
  int v1119; // edx
  int v1120; // eax
  _DWORD *v1121; // eax
  int v1122; // eax
  int v1123; // ecx
  _DWORD *v1124; // eax
  int v1125; // eax
  int v1126; // ecx
  _DWORD *v1127; // eax
  int v1128; // eax
  int v1129; // ecx
  _DWORD *v1130; // eax
  int v1131; // eax
  int v1132; // ecx
  _DWORD *v1133; // eax
  int v1134; // eax
  int v1135; // ecx
  _DWORD *v1136; // eax
  int v1137; // eax
  int v1138; // ecx
  _DWORD *v1139; // eax
  int v1140; // eax
  int v1141; // ecx
  _DWORD *v1142; // eax
  int v1143; // eax
  int v1144; // ecx
  _DWORD *v1145; // eax
  int v1146; // eax
  int v1147; // ecx
  _DWORD *v1148; // eax
  int v1149; // eax
  int v1150; // ecx
  _DWORD *v1151; // eax
  int v1152; // eax
  int v1153; // ecx
  _DWORD *v1154; // eax
  int v1155; // eax
  int v1156; // ecx
  _DWORD *v1157; // eax
  int v1158; // eax
  int v1159; // ecx
  _DWORD *v1160; // eax
  int v1161; // eax
  int v1162; // eax
  int v1163; // ecx
  int v1164; // ecx
  _DWORD *v1165; // eax
  int v1166; // eax
  int v1167; // ecx
  int v1168; // eax
  _DWORD *v1169; // eax
  int v1170; // edx
  int v1171; // eax
  _DWORD *v1172; // eax
  int v1173; // eax
  int v1174; // ecx
  _DWORD *v1175; // eax
  int v1176; // eax
  int v1177; // eax
  int v1178; // ecx
  int v1179; // ecx
  int v1180; // eax
  _DWORD *v1181; // eax
  int v1182; // eax
  int v1183; // eax
  int v1184; // eax
  int v1185; // ecx
  _DWORD *v1186; // eax
  int v1187; // eax
  int v1188; // eax
  int v1189; // eax
  int v1190; // ecx
  _DWORD *v1191; // eax
  int v1192; // eax
  int v1193; // eax
  int v1194; // eax
  int v1195; // ecx
  _DWORD *v1196; // eax
  int v1197; // eax
  int v1198; // eax
  int v1199; // eax
  int v1200; // eax
  int v1201; // ecx
  int v1202; // ecx
  _DWORD *v1203; // eax
  int v1204; // eax
  int v1205; // ecx
  _DWORD *v1206; // eax
  int v1207; // eax
  int v1208; // ecx
  _DWORD *v1209; // eax
  int v1210; // eax
  int v1211; // ecx
  _DWORD *v1212; // eax
  int v1213; // eax
  int v1214; // ecx
  _DWORD *v1215; // eax
  int v1216; // eax
  int v1217; // ecx
  _DWORD *v1218; // eax
  int v1219; // eax
  int v1220; // ecx
  _DWORD *v1221; // eax
  int v1222; // eax
  int v1223; // ecx
  _DWORD *v1224; // eax
  int v1225; // eax
  int v1226; // ecx
  int v1227; // eax
  _DWORD *v1228; // eax
  int v1229; // edx
  int v1230; // eax
  _DWORD *v1231; // eax
  int v1232; // eax
  int v1233; // ecx
  int v1234; // eax
  _DWORD *v1235; // eax
  int v1236; // edx
  int v1237; // eax
  _DWORD *v1238; // eax
  int v1239; // eax
  int v1240; // ecx
  _DWORD *v1241; // eax
  int v1242; // eax
  int v1243; // ecx
  _DWORD *v1244; // eax
  int v1245; // eax
  int v1246; // ecx
  _DWORD *v1247; // eax
  int v1248; // eax
  int v1249; // ecx
  _DWORD *v1250; // eax
  int v1251; // eax
  int v1252; // ecx
  _DWORD *v1253; // eax
  int v1254; // eax
  int v1255; // ecx
  _DWORD *v1256; // eax
  int v1257; // eax
  int v1258; // ecx
  _DWORD *v1259; // eax
  int v1260; // eax
  int v1261; // ecx
  _DWORD *v1262; // eax
  int v1263; // eax
  int v1264; // ecx
  _DWORD *v1265; // eax
  int v1266; // eax
  int v1267; // ecx
  _DWORD *v1268; // eax
  int v1269; // eax
  int v1270; // ecx
  _DWORD *v1271; // eax
  int v1272; // eax
  int v1273; // ecx
  _DWORD *v1274; // eax
  int v1275; // eax
  int v1276; // ecx
  _DWORD *v1277; // eax
  int v1278; // eax
  int v1279; // ecx
  _DWORD *v1280; // eax
  int v1281; // eax
  int v1282; // eax
  int v1283; // ecx
  int v1284; // ecx
  _DWORD *v1285; // eax
  _DWORD *v1286; // eax
  int v1287; // edx
  int v1288; // eax
  _DWORD *v1289; // eax
  int v1290; // eax
  int v1291; // ecx
  _DWORD *v1292; // eax
  _DWORD *v1293; // eax
  int v1294; // edx
  int v1295; // eax
  _DWORD *v1296; // eax
  int v1297; // eax
  int v1298; // ecx
  _DWORD *v1299; // eax
  int v1300; // edx
  int v1301; // eax
  _DWORD *v1302; // eax
  int v1303; // eax
  int v1304; // ecx
  _DWORD *v1305; // eax
  _DWORD *v1306; // eax
  int v1307; // edx
  int v1308; // eax
  _DWORD *v1309; // eax
  int v1310; // eax
  int v1311; // ecx
  _DWORD *v1312; // eax
  _DWORD *v1313; // eax
  int v1314; // edx
  int v1315; // eax
  _DWORD *v1316; // eax
  int v1317; // eax
  int v1318; // ecx
  _DWORD *v1319; // eax
  _DWORD *v1320; // eax
  int v1321; // edx
  int v1322; // eax
  _DWORD *v1323; // eax
  int v1324; // eax
  int v1325; // ecx
  _DWORD *v1326; // eax
  int v1327; // edx
  int v1328; // eax
  _DWORD *v1329; // eax
  int v1330; // eax
  int v1331; // ecx
  _DWORD *v1332; // eax
  _DWORD *v1333; // eax
  int v1334; // edx
  int v1335; // eax
  _DWORD *v1336; // eax
  int v1337; // eax
  int v1338; // ecx
  _DWORD *v1339; // eax
  _DWORD *v1340; // eax
  int v1341; // edx
  int v1342; // eax
  _DWORD *v1343; // eax
  int v1344; // eax
  int v1345; // ecx
  _DWORD *v1346; // eax
  _DWORD *v1347; // eax
  int v1348; // edx
  int v1349; // eax
  _DWORD *v1350; // eax
  int v1351; // eax
  int v1352; // ecx
  _DWORD *v1353; // eax
  int v1354; // edx
  int v1355; // eax
  _DWORD *v1356; // eax
  int v1357; // eax
  int v1358; // ecx
  _DWORD *v1359; // eax
  _DWORD *v1360; // eax
  int v1361; // edx
  int v1362; // eax
  _DWORD *v1363; // eax
  int v1364; // eax
  int v1365; // ecx
  _DWORD *v1366; // eax
  _DWORD *v1367; // eax
  int v1368; // edx
  int v1369; // eax
  _DWORD *v1370; // eax
  int v1371; // eax
  int v1372; // eax
  int v1373; // ecx
  int v1374; // ecx
  _DWORD *v1375; // eax
  int v1376; // eax
  int v1377; // ecx
  _DWORD *v1378; // eax
  int v1379; // eax
  int v1380; // ecx
  int v1381; // eax
  _DWORD *v1382; // eax
  int v1383; // edx
  int v1384; // eax
  _DWORD *v1385; // eax
  int v1386; // eax
  int v1387; // ecx
  _DWORD *v1388; // eax
  int v1389; // eax
  int v1390; // eax
  int v1391; // ecx
  int v1392; // ecx
  _DWORD *v1393; // eax
  int v1394; // eax
  int v1395; // ecx
  int v1396; // eax
  _DWORD *v1397; // eax
  int v1398; // edx
  int v1399; // eax
  _DWORD *v1400; // eax
  int v1401; // eax
  int v1402; // ecx
  _DWORD *v1403; // eax
  int v1404; // eax
  int v1405; // ecx
  _DWORD *v1406; // eax
  int v1407; // eax
  int v1408; // ecx
  _DWORD *v1409; // eax
  int v1410; // eax
  int v1411; // ecx
  _DWORD *v1412; // eax
  int v1413; // eax
  int v1414; // ecx
  _DWORD *v1415; // eax
  int v1416; // eax
  int v1417; // ecx
  _DWORD *v1418; // eax
  int v1419; // eax
  int v1420; // ecx
  _DWORD *v1421; // eax
  int v1422; // eax
  int v1423; // ecx
  _DWORD *v1424; // eax
  int v1425; // eax
  int v1426; // ecx
  _DWORD *v1427; // eax
  int v1428; // eax
  int v1429; // ecx
  _DWORD *v1430; // eax
  int v1431; // eax
  int v1432; // eax
  int v1433; // ecx
  int v1434; // ecx
  _DWORD *v1435; // eax
  int v1436; // eax
  int v1437; // ecx
  _DWORD *v1438; // eax
  int v1439; // eax
  int v1440; // ecx
  _DWORD *v1441; // eax
  int v1442; // eax
  int v1443; // ecx
  _DWORD *v1444; // eax
  int v1445; // eax
  int v1446; // ecx
  _DWORD *v1447; // eax
  int v1448; // eax
  int v1449; // ecx
  _DWORD *v1450; // eax
  int v1451; // eax
  int v1452; // ecx
  _DWORD *v1453; // eax
  int v1454; // eax
  int v1455; // ecx
  _DWORD *v1456; // eax
  int v1457; // eax
  int v1458; // ecx
  int v1459; // eax
  _DWORD *v1460; // eax
  int v1461; // edx
  int v1462; // eax
  _DWORD *v1463; // eax
  int v1464; // eax
  int v1465; // ecx
  _DWORD *v1466; // eax
  int v1467; // eax
  std::_Rb_tree_header *v1468; // [esp+0h] [ebp-B8h]
  int v1469; // [esp+0h] [ebp-B8h]
  int v1470; // [esp+0h] [ebp-B8h]
  int v1471; // [esp+0h] [ebp-B8h]
  int v1472; // [esp+0h] [ebp-B8h]
  int v1473; // [esp+0h] [ebp-B8h]
  int v1474; // [esp+0h] [ebp-B8h]
  int v1475; // [esp+0h] [ebp-B8h]
  int v1476; // [esp+0h] [ebp-B8h]
  int v1477; // [esp+0h] [ebp-B8h]
  int v1478; // [esp+0h] [ebp-B8h]
  int v1479; // [esp+0h] [ebp-B8h]
  int v1480; // [esp+0h] [ebp-B8h]
  int v1481; // [esp+0h] [ebp-B8h]
  int v1482; // [esp+0h] [ebp-B8h]
  int v1483; // [esp+0h] [ebp-B8h]
  int v1484; // [esp+0h] [ebp-B8h]
  int v1485; // [esp+0h] [ebp-B8h]
  int v1486; // [esp+0h] [ebp-B8h]
  int v1487; // [esp+0h] [ebp-B8h]
  int v1488; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1489; // [esp+0h] [ebp-B8h]
  int v1490; // [esp+0h] [ebp-B8h]
  int v1491; // [esp+0h] [ebp-B8h]
  int v1492; // [esp+0h] [ebp-B8h]
  int v1493; // [esp+0h] [ebp-B8h]
  int v1494; // [esp+0h] [ebp-B8h]
  int v1495; // [esp+0h] [ebp-B8h]
  int v1496; // [esp+0h] [ebp-B8h]
  int v1497; // [esp+0h] [ebp-B8h]
  int v1498; // [esp+0h] [ebp-B8h]
  int v1499; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1500; // [esp+0h] [ebp-B8h]
  int v1501; // [esp+0h] [ebp-B8h]
  int v1502; // [esp+0h] [ebp-B8h]
  int v1503; // [esp+0h] [ebp-B8h]
  int v1504; // [esp+0h] [ebp-B8h]
  int v1505; // [esp+0h] [ebp-B8h]
  int v1506; // [esp+0h] [ebp-B8h]
  int v1507; // [esp+0h] [ebp-B8h]
  int v1508; // [esp+0h] [ebp-B8h]
  int v1509; // [esp+0h] [ebp-B8h]
  int v1510; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1511; // [esp+0h] [ebp-B8h]
  int v1512; // [esp+0h] [ebp-B8h]
  int v1513; // [esp+0h] [ebp-B8h]
  int v1514; // [esp+0h] [ebp-B8h]
  int v1515; // [esp+0h] [ebp-B8h]
  int v1516; // [esp+0h] [ebp-B8h]
  int v1517; // [esp+0h] [ebp-B8h]
  int v1518; // [esp+0h] [ebp-B8h]
  int v1519; // [esp+0h] [ebp-B8h]
  int v1520; // [esp+0h] [ebp-B8h]
  int v1521; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1522; // [esp+0h] [ebp-B8h]
  int v1523; // [esp+0h] [ebp-B8h]
  int v1524; // [esp+0h] [ebp-B8h]
  int v1525; // [esp+0h] [ebp-B8h]
  int v1526; // [esp+0h] [ebp-B8h]
  int v1527; // [esp+0h] [ebp-B8h]
  int v1528; // [esp+0h] [ebp-B8h]
  int v1529; // [esp+0h] [ebp-B8h]
  int v1530; // [esp+0h] [ebp-B8h]
  int v1531; // [esp+0h] [ebp-B8h]
  int v1532; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1533; // [esp+0h] [ebp-B8h]
  int v1534; // [esp+0h] [ebp-B8h]
  int v1535; // [esp+0h] [ebp-B8h]
  int v1536; // [esp+0h] [ebp-B8h]
  int v1537; // [esp+0h] [ebp-B8h]
  int v1538; // [esp+0h] [ebp-B8h]
  int v1539; // [esp+0h] [ebp-B8h]
  int v1540; // [esp+0h] [ebp-B8h]
  int v1541; // [esp+0h] [ebp-B8h]
  int v1542; // [esp+0h] [ebp-B8h]
  int v1543; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1544; // [esp+0h] [ebp-B8h]
  int v1545; // [esp+0h] [ebp-B8h]
  int v1546; // [esp+0h] [ebp-B8h]
  int v1547; // [esp+0h] [ebp-B8h]
  int v1548; // [esp+0h] [ebp-B8h]
  int v1549; // [esp+0h] [ebp-B8h]
  int v1550; // [esp+0h] [ebp-B8h]
  int v1551; // [esp+0h] [ebp-B8h]
  int v1552; // [esp+0h] [ebp-B8h]
  int v1553; // [esp+0h] [ebp-B8h]
  int v1554; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1555; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1556; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1557; // [esp+0h] [ebp-B8h]
  int v1558; // [esp+0h] [ebp-B8h]
  int v1559; // [esp+0h] [ebp-B8h]
  int v1560; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1561; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1562; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1563; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1564; // [esp+0h] [ebp-B8h]
  int v1565; // [esp+0h] [ebp-B8h]
  int v1566; // [esp+0h] [ebp-B8h]
  int v1567; // [esp+0h] [ebp-B8h]
  int v1568; // [esp+0h] [ebp-B8h]
  int v1569; // [esp+0h] [ebp-B8h]
  int v1570; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1571; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1572; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1573; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1574; // [esp+0h] [ebp-B8h]
  int v1575; // [esp+0h] [ebp-B8h]
  int v1576; // [esp+0h] [ebp-B8h]
  int v1577; // [esp+0h] [ebp-B8h]
  int v1578; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1579; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1580; // [esp+0h] [ebp-B8h]
  int v1581; // [esp+0h] [ebp-B8h]
  int v1582; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1583; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1584; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1585; // [esp+0h] [ebp-B8h]
  int v1586; // [esp+0h] [ebp-B8h]
  int v1587; // [esp+0h] [ebp-B8h]
  int v1588; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1589; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1590; // [esp+0h] [ebp-B8h]
  int v1591; // [esp+0h] [ebp-B8h]
  int v1592; // [esp+0h] [ebp-B8h]
  int v1593; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1594; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1595; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1596; // [esp+0h] [ebp-B8h]
  int v1597; // [esp+0h] [ebp-B8h]
  int v1598; // [esp+0h] [ebp-B8h]
  int v1599; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1600; // [esp+0h] [ebp-B8h]
  int v1601; // [esp+0h] [ebp-B8h]
  int v1602; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1603; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1604; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1605; // [esp+0h] [ebp-B8h]
  int v1606; // [esp+0h] [ebp-B8h]
  int v1607; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1608; // [esp+0h] [ebp-B8h]
  int v1609; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1610; // [esp+0h] [ebp-B8h]
  int v1611; // [esp+0h] [ebp-B8h]
  int v1612; // [esp+0h] [ebp-B8h]
  int v1613; // [esp+0h] [ebp-B8h]
  int v1614; // [esp+0h] [ebp-B8h]
  int v1615; // [esp+0h] [ebp-B8h]
  int v1616; // [esp+0h] [ebp-B8h]
  int v1617; // [esp+0h] [ebp-B8h]
  int v1618; // [esp+0h] [ebp-B8h]
  int v1619; // [esp+0h] [ebp-B8h]
  int v1620; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1621; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1622; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1623; // [esp+0h] [ebp-B8h]
  int v1624; // [esp+0h] [ebp-B8h]
  int v1625; // [esp+0h] [ebp-B8h]
  int v1626; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1627; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1628; // [esp+0h] [ebp-B8h]
  int v1629; // [esp+0h] [ebp-B8h]
  int v1630; // [esp+0h] [ebp-B8h]
  int v1631; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1632; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1633; // [esp+0h] [ebp-B8h]
  int v1634; // [esp+0h] [ebp-B8h]
  int v1635; // [esp+0h] [ebp-B8h]
  int v1636; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1637; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1638; // [esp+0h] [ebp-B8h]
  int v1639; // [esp+0h] [ebp-B8h]
  int v1640; // [esp+0h] [ebp-B8h]
  int v1641; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1642; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1643; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1644; // [esp+0h] [ebp-B8h]
  int v1645; // [esp+0h] [ebp-B8h]
  int v1646; // [esp+0h] [ebp-B8h]
  int v1647; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1648; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1649; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1650; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1651; // [esp+0h] [ebp-B8h]
  int v1652; // [esp+0h] [ebp-B8h]
  int v1653; // [esp+0h] [ebp-B8h]
  int v1654; // [esp+0h] [ebp-B8h]
  int v1655; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1656; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1657; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1658; // [esp+0h] [ebp-B8h]
  int v1659; // [esp+0h] [ebp-B8h]
  int v1660; // [esp+0h] [ebp-B8h]
  int v1661; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1662; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1663; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1664; // [esp+0h] [ebp-B8h]
  int v1665; // [esp+0h] [ebp-B8h]
  int v1666; // [esp+0h] [ebp-B8h]
  int v1667; // [esp+0h] [ebp-B8h]
  int v1668; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1669; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1670; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1671; // [esp+0h] [ebp-B8h]
  int v1672; // [esp+0h] [ebp-B8h]
  int v1673; // [esp+0h] [ebp-B8h]
  int v1674; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1675; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1676; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1677; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1678; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1679; // [esp+0h] [ebp-B8h]
  int v1680; // [esp+0h] [ebp-B8h]
  int v1681; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1682; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1683; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1684; // [esp+0h] [ebp-B8h]
  int v1685; // [esp+0h] [ebp-B8h]
  int v1686; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1687; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1688; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1689; // [esp+0h] [ebp-B8h]
  int v1690; // [esp+0h] [ebp-B8h]
  int v1691; // [esp+0h] [ebp-B8h]
  int v1692; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1693; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1694; // [esp+0h] [ebp-B8h]
  int v1695; // [esp+0h] [ebp-B8h]
  int v1696; // [esp+0h] [ebp-B8h]
  int v1697; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1698; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1699; // [esp+0h] [ebp-B8h]
  int v1700; // [esp+0h] [ebp-B8h]
  int v1701; // [esp+0h] [ebp-B8h]
  int v1702; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1703; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1704; // [esp+0h] [ebp-B8h]
  int v1705; // [esp+0h] [ebp-B8h]
  int v1706; // [esp+0h] [ebp-B8h]
  int v1707; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1708; // [esp+0h] [ebp-B8h]
  int v1709; // [esp+0h] [ebp-B8h]
  int v1710; // [esp+0h] [ebp-B8h]
  int v1711; // [esp+0h] [ebp-B8h]
  int v1712; // [esp+0h] [ebp-B8h]
  int v1713; // [esp+0h] [ebp-B8h]
  int v1714; // [esp+0h] [ebp-B8h]
  int v1715; // [esp+0h] [ebp-B8h]
  int v1716; // [esp+0h] [ebp-B8h]
  int v1717; // [esp+0h] [ebp-B8h]
  int v1718; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1719; // [esp+0h] [ebp-B8h]
  int v1720; // [esp+0h] [ebp-B8h]
  int v1721; // [esp+0h] [ebp-B8h]
  int v1722; // [esp+0h] [ebp-B8h]
  int v1723; // [esp+0h] [ebp-B8h]
  int v1724; // [esp+0h] [ebp-B8h]
  int v1725; // [esp+0h] [ebp-B8h]
  int v1726; // [esp+0h] [ebp-B8h]
  int v1727; // [esp+0h] [ebp-B8h]
  int v1728; // [esp+0h] [ebp-B8h]
  int v1729; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1730; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1731; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1732; // [esp+0h] [ebp-B8h]
  int v1733; // [esp+0h] [ebp-B8h]
  int v1734; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1735; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1736; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1737; // [esp+0h] [ebp-B8h]
  int v1738; // [esp+0h] [ebp-B8h]
  int v1739; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1740; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1741; // [esp+0h] [ebp-B8h]
  int v1742; // [esp+0h] [ebp-B8h]
  int v1743; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1744; // [esp+0h] [ebp-B8h]
  int v1745; // [esp+0h] [ebp-B8h]
  int v1746; // [esp+0h] [ebp-B8h]
  int v1747; // [esp+0h] [ebp-B8h]
  int v1748; // [esp+0h] [ebp-B8h]
  int v1749; // [esp+0h] [ebp-B8h]
  int v1750; // [esp+0h] [ebp-B8h]
  int v1751; // [esp+0h] [ebp-B8h]
  int v1752; // [esp+0h] [ebp-B8h]
  int v1753; // [esp+0h] [ebp-B8h]
  int v1754; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1755; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1756; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1757; // [esp+0h] [ebp-B8h]
  int v1758; // [esp+0h] [ebp-B8h]
  int v1759; // [esp+0h] [ebp-B8h]
  int v1760; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1761; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1762; // [esp+0h] [ebp-B8h]
  int v1763; // [esp+0h] [ebp-B8h]
  int v1764; // [esp+0h] [ebp-B8h]
  int v1765; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1766; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1767; // [esp+0h] [ebp-B8h]
  int v1768; // [esp+0h] [ebp-B8h]
  int v1769; // [esp+0h] [ebp-B8h]
  int v1770; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1771; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1772; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1773; // [esp+0h] [ebp-B8h]
  int v1774; // [esp+0h] [ebp-B8h]
  int v1775; // [esp+0h] [ebp-B8h]
  int v1776; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1777; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1778; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1779; // [esp+0h] [ebp-B8h]
  int v1780; // [esp+0h] [ebp-B8h]
  int v1781; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1782; // [esp+0h] [ebp-B8h]
  int v1783; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1784; // [esp+0h] [ebp-B8h]
  int v1785; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1786; // [esp+0h] [ebp-B8h]
  int v1787; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1788; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1789; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1790; // [esp+0h] [ebp-B8h]
  int v1791; // [esp+0h] [ebp-B8h]
  int v1792; // [esp+0h] [ebp-B8h]
  int v1793; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1794; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1795; // [esp+0h] [ebp-B8h]
  int v1796; // [esp+0h] [ebp-B8h]
  int v1797; // [esp+0h] [ebp-B8h]
  int v1798; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1799; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1800; // [esp+0h] [ebp-B8h]
  int v1801; // [esp+0h] [ebp-B8h]
  int v1802; // [esp+0h] [ebp-B8h]
  int v1803; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1804; // [esp+0h] [ebp-B8h]
  int v1805; // [esp+0h] [ebp-B8h]
  int v1806; // [esp+0h] [ebp-B8h]
  int v1807; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1808; // [esp+0h] [ebp-B8h]
  int v1809; // [esp+0h] [ebp-B8h]
  int v1810; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1811; // [esp+0h] [ebp-B8h]
  int v1812; // [esp+0h] [ebp-B8h]
  int v1813; // [esp+0h] [ebp-B8h]
  int v1814; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1815; // [esp+0h] [ebp-B8h]
  int v1816; // [esp+0h] [ebp-B8h]
  int v1817; // [esp+0h] [ebp-B8h]
  int v1818; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1819; // [esp+0h] [ebp-B8h]
  int v1820; // [esp+0h] [ebp-B8h]
  int v1821; // [esp+0h] [ebp-B8h]
  int v1822; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1823; // [esp+0h] [ebp-B8h]
  int v1824; // [esp+0h] [ebp-B8h]
  int v1825; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1826; // [esp+0h] [ebp-B8h]
  int v1827; // [esp+0h] [ebp-B8h]
  int v1828; // [esp+0h] [ebp-B8h]
  int v1829; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1830; // [esp+0h] [ebp-B8h]
  int v1831; // [esp+0h] [ebp-B8h]
  int v1832; // [esp+0h] [ebp-B8h]
  int v1833; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1834; // [esp+0h] [ebp-B8h]
  int v1835; // [esp+0h] [ebp-B8h]
  int v1836; // [esp+0h] [ebp-B8h]
  int v1837; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1838; // [esp+0h] [ebp-B8h]
  int v1839; // [esp+0h] [ebp-B8h]
  int v1840; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1841; // [esp+0h] [ebp-B8h]
  int v1842; // [esp+0h] [ebp-B8h]
  int v1843; // [esp+0h] [ebp-B8h]
  int v1844; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1845; // [esp+0h] [ebp-B8h]
  int v1846; // [esp+0h] [ebp-B8h]
  int v1847; // [esp+0h] [ebp-B8h]
  int v1848; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1849; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1850; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1851; // [esp+0h] [ebp-B8h]
  int v1852; // [esp+0h] [ebp-B8h]
  int v1853; // [esp+0h] [ebp-B8h]
  int v1854; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1855; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1856; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1857; // [esp+0h] [ebp-B8h]
  int v1858; // [esp+0h] [ebp-B8h]
  int v1859; // [esp+0h] [ebp-B8h]
  int v1860; // [esp+0h] [ebp-B8h]
  std::_Rb_tree_header *v1861; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Terminal *v1862; // [esp+0h] [ebp-B8h]
  WXML::EXPRLib::Action *v1863; // [esp+0h] [ebp-B8h]
  int v1864; // [esp+0h] [ebp-B8h]
  int v1865; // [esp+0h] [ebp-B8h]
  int v1866; // [esp+0h] [ebp-B8h]
  int v1867; // [esp+10h] [ebp-A8h]
  int v1868; // [esp+10h] [ebp-A8h]
  int v1869; // [esp+10h] [ebp-A8h]
  int v1870; // [esp+10h] [ebp-A8h]
  int v1871; // [esp+10h] [ebp-A8h]
  int v1872; // [esp+10h] [ebp-A8h]
  int v1873; // [esp+10h] [ebp-A8h]
  int v1874; // [esp+10h] [ebp-A8h]
  int v1875; // [esp+10h] [ebp-A8h]
  int v1876; // [esp+10h] [ebp-A8h]
  int v1877; // [esp+10h] [ebp-A8h]
  int v1878; // [esp+10h] [ebp-A8h]
  int v1879; // [esp+10h] [ebp-A8h]
  int v1880; // [esp+10h] [ebp-A8h]
  int v1881; // [esp+10h] [ebp-A8h]
  int v1882; // [esp+10h] [ebp-A8h]
  int v1883; // [esp+10h] [ebp-A8h]
  int v1884; // [esp+10h] [ebp-A8h]
  int v1885; // [esp+10h] [ebp-A8h]
  int v1886; // [esp+10h] [ebp-A8h]
  int v1887; // [esp+10h] [ebp-A8h]
  int v1888; // [esp+10h] [ebp-A8h]
  int v1889; // [esp+10h] [ebp-A8h]
  int v1890; // [esp+10h] [ebp-A8h]
  int v1891; // [esp+10h] [ebp-A8h]
  int v1892; // [esp+10h] [ebp-A8h]
  int v1893; // [esp+10h] [ebp-A8h]
  int v1894; // [esp+10h] [ebp-A8h]
  int v1895; // [esp+10h] [ebp-A8h]
  int v1896; // [esp+10h] [ebp-A8h]
  int v1897; // [esp+10h] [ebp-A8h]
  int v1898; // [esp+10h] [ebp-A8h]
  int v1899; // [esp+10h] [ebp-A8h]
  int v1900; // [esp+10h] [ebp-A8h]
  int v1901; // [esp+10h] [ebp-A8h]
  int v1902; // [esp+10h] [ebp-A8h]
  int v1903; // [esp+10h] [ebp-A8h]
  int v1904; // [esp+10h] [ebp-A8h]
  int v1905; // [esp+10h] [ebp-A8h]
  int v1906; // [esp+10h] [ebp-A8h]
  int v1907; // [esp+10h] [ebp-A8h]
  int v1908; // [esp+10h] [ebp-A8h]
  int v1909; // [esp+10h] [ebp-A8h]
  int v1910; // [esp+10h] [ebp-A8h]
  int v1911; // [esp+10h] [ebp-A8h]
  int v1912; // [esp+10h] [ebp-A8h]
  int v1913; // [esp+10h] [ebp-A8h]
  int v1914; // [esp+10h] [ebp-A8h]
  int v1915; // [esp+10h] [ebp-A8h]
  int v1916; // [esp+10h] [ebp-A8h]
  int v1917; // [esp+10h] [ebp-A8h]
  int v1918; // [esp+10h] [ebp-A8h]
  int v1919; // [esp+10h] [ebp-A8h]
  int v1920; // [esp+10h] [ebp-A8h]
  int v1921; // [esp+10h] [ebp-A8h]
  int v1922; // [esp+10h] [ebp-A8h]
  int v1923; // [esp+10h] [ebp-A8h]
  int v1924; // [esp+10h] [ebp-A8h]
  int v1925; // [esp+10h] [ebp-A8h]
  int v1926; // [esp+10h] [ebp-A8h]
  int v1927; // [esp+10h] [ebp-A8h]
  int v1928; // [esp+10h] [ebp-A8h]
  int v1929; // [esp+10h] [ebp-A8h]
  int v1930; // [esp+10h] [ebp-A8h]
  int v1931; // [esp+10h] [ebp-A8h]
  int v1932; // [esp+10h] [ebp-A8h]
  int v1933; // [esp+10h] [ebp-A8h]
  int v1934; // [esp+10h] [ebp-A8h]
  int v1935; // [esp+10h] [ebp-A8h]
  int v1936; // [esp+10h] [ebp-A8h]
  int v1937; // [esp+10h] [ebp-A8h]
  int v1938; // [esp+10h] [ebp-A8h]
  int v1939; // [esp+10h] [ebp-A8h]
  int v1940; // [esp+10h] [ebp-A8h]
  int v1941; // [esp+10h] [ebp-A8h]
  int v1942; // [esp+10h] [ebp-A8h]
  int v1943; // [esp+10h] [ebp-A8h]
  int v1944; // [esp+10h] [ebp-A8h]
  int v1945; // [esp+10h] [ebp-A8h]
  int v1946; // [esp+10h] [ebp-A8h]
  int v1947; // [esp+10h] [ebp-A8h]
  int v1948; // [esp+10h] [ebp-A8h]
  int v1949; // [esp+10h] [ebp-A8h]
  int v1950; // [esp+10h] [ebp-A8h]
  int v1951; // [esp+10h] [ebp-A8h]
  int v1952; // [esp+10h] [ebp-A8h]
  int v1953; // [esp+10h] [ebp-A8h]
  int v1954; // [esp+10h] [ebp-A8h]
  int v1955; // [esp+10h] [ebp-A8h]
  int v1956; // [esp+10h] [ebp-A8h]
  int v1957; // [esp+10h] [ebp-A8h]
  int v1958; // [esp+10h] [ebp-A8h]
  int v1959; // [esp+10h] [ebp-A8h]
  int v1960; // [esp+10h] [ebp-A8h]
  int v1961; // [esp+10h] [ebp-A8h]
  int v1962; // [esp+10h] [ebp-A8h]
  int v1963; // [esp+10h] [ebp-A8h]
  int v1964; // [esp+10h] [ebp-A8h]
  int v1965; // [esp+54h] [ebp-64h] BYREF
  char v1966[4]; // [esp+58h] [ebp-60h] BYREF
  int v1967; // [esp+5Ch] [ebp-5Ch] BYREF
  char v1968[4]; // [esp+60h] [ebp-58h] BYREF
  int v1969; // [esp+64h] [ebp-54h] BYREF
  char v1970[4]; // [esp+68h] [ebp-50h] BYREF
  int v1971; // [esp+6Ch] [ebp-4Ch] BYREF
  char v1972[4]; // [esp+70h] [ebp-48h] BYREF
  int v1973; // [esp+74h] [ebp-44h] BYREF
  char v1974[4]; // [esp+78h] [ebp-40h] BYREF
  int v1975; // [esp+7Ch] [ebp-3Ch] BYREF
  char v1976[4]; // [esp+80h] [ebp-38h] BYREF
  int v1977; // [esp+84h] [ebp-34h] BYREF
  char v1978[4]; // [esp+88h] [ebp-30h] BYREF
  int v1979; // [esp+8Ch] [ebp-2Ch] BYREF
  int v1980; // [esp+90h] [ebp-28h] BYREF
  int v1981; // [esp+94h] [ebp-24h]
  int v1982; // [esp+98h] [ebp-20h] BYREF
  int v1983; // [esp+9Ch] [ebp-1Ch] BYREF
  int v1984; // [esp+A0h] [ebp-18h]

    // int a1
  if ( !*(_BYTE *)(a1 + 24) ) // a1.offset_24
  {
    *(_BYTE *)(a1 + 24) = 1;
    v1 = std::_Rb_tree_header::_Rb_tree_header(v1468);
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v1);
    // ret[1]
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    // ret[1] = 
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v2);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    ////////////////////// ! ////////////////
    std::string::basic_string("!");
    v1977 = 1;
    // map1 = ret[1]
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    // map1["!"]
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    // map1["!"] = 
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v3);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    // base_1
    v4 = (_DWORD *)operator new(8u);
    *v4 = &off_55F1E4;
    v4[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v4);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    // base_2
    v5 = (_DWORD *)operator new(8u);
    *v5 = &off_55F1E4;
    v5[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v5);
    *(_DWORD *)(v1977 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    // base_3
    v6 = (_DWORD *)operator new(8u);
    *v6 = &off_55F1E4;
    v6[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v6);
    *(_DWORD *)(v1979 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v7 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v7);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1469);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1470);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    //////////////////////////////$DECIMAL///////////////////////////////////
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 1;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v8);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v9 = (_DWORD *)operator new(8u);
    *v9 = &off_55F1E4;
    v9[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v9);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v10 = (_DWORD *)operator new(8u);
    *v10 = &off_55F1E4;
    v10[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v10);
    *(_DWORD *)(v1977 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v11 = (_DWORD *)operator new(8u);
    *v11 = &off_55F1E4;
    v11[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v11);
    *(_DWORD *)(v1979 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v12 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v12);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1471);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1472);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    //////////////////"$STRING"//////////////////
    std::string::basic_string("$STRING");
    v1977 = 1;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v13);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v14 = (_DWORD *)operator new(8u);
    *v14 = &off_55F1E4;
    v14[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v14);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v15 = (_DWORD *)operator new(8u);
    *v15 = &off_55F1E4;
    v15[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v15);
    *(_DWORD *)(v1977 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v16 = (_DWORD *)operator new(8u);
    *v16 = &off_55F1E4;
    v16[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v16);
    *(_DWORD *)(v1979 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v17 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v17);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1473);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1474);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    ////////////////// ( //////////////////
    std::string::basic_string("(");
    v1977 = 1;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v18);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v19 = (_DWORD *)operator new(8u);
    *v19 = &off_55F1E4;
    v19[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v19);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v20 = (_DWORD *)operator new(8u);
    *v20 = &off_55F1E4;
    v20[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v20);
    *(_DWORD *)(v1977 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v21 = (_DWORD *)operator new(8u);
    *v21 = &off_55F1E4;
    v21[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v21);
    *(_DWORD *)(v1979 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v22 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v22);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1475);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1476);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    
    ////////////////// - //////////////////
    std::string::basic_string("-");
    v1977 = 1;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v23);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v24 = (_DWORD *)operator new(8u);
    *v24 = &off_55F1E4;
    v24[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v24);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v25 = (_DWORD *)operator new(8u);
    *v25 = &off_55F1E4;
    v25[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v25);
    *(_DWORD *)(v1977 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v26 = (_DWORD *)operator new(8u);
    *v26 = &off_55F1E4;
    v26[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v26);
    *(_DWORD *)(v1979 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v27 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v27);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1477);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1478);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    /////////////////////$KEYWORD/////////////////
    std::string::basic_string("$KEYWORD");
    v1977 = 1;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v28);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v29 = (_DWORD *)operator new(8u);
    *v29 = &off_55F1E4;
    v29[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v29);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v30 = (_DWORD *)operator new(8u);
    *v30 = &off_55F1E4;
    v30[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v30);
    *(_DWORD *)(v1977 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v31 = (_DWORD *)operator new(8u);
    *v31 = &off_55F1E4;
    v31[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v31);
    *(_DWORD *)(v1979 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v32 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v32);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1479);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1480);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    //////////////////////////[/////////////////////
    std::string::basic_string("[");
    v1977 = 1;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v33);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v34 = (_DWORD *)operator new(8u);
    *v34 = &off_55F1E4;
    v34[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v34);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v35 = (_DWORD *)operator new(8u);
    *v35 = &off_55F1E4;
    v35[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v35);
    *(_DWORD *)(v1977 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v36 = (_DWORD *)operator new(8u);
    *v36 = &off_55F1E4;
    v36[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v36);
    *(_DWORD *)(v1979 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v37 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v37);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1481);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1482);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;

    ////////////////////$VAR///////////////////////
    std::string::basic_string("$VAR");
    v1977 = 1;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v38);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v39 = (_DWORD *)operator new(8u);
    *v39 = &off_55F1E4;
    v39[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v39);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v40 = (_DWORD *)operator new(8u);
    *v40 = &off_55F1E4;
    v40[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v40);
    *(_DWORD *)(v1977 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v41 = (_DWORD *)operator new(8u);
    *v41 = &off_55F1E4;
    v41[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v41);
    *(_DWORD *)(v1979 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v42 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v42);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1483);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1484);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    ////////////// { ///////////////
    std::string::basic_string("{");
    v1977 = 1;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v43);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v44 = (_DWORD *)operator new(8u);
    *v44 = &off_55F1E4;
    v44[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v44);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v45 = (_DWORD *)operator new(8u);
    *v45 = &off_55F1E4;
    v45[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v45);
    *(_DWORD *)(v1977 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v46 = (_DWORD *)operator new(8u);
    *v46 = &off_55F1E4;
    v46[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v46);
    *(_DWORD *)(v1979 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v47 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v47);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1485);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1486);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 1;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v48);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v49 = (_DWORD *)operator new(8u);
    *v49 = &off_55F1E4;
    v49[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v49);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v50 = (_DWORD *)operator new(8u);
    *v50 = &off_55F1E4;
    v50[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v50);
    *(_DWORD *)(v1977 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v51 = (_DWORD *)operator new(8u);
    *v51 = &off_55F1E4;
    v51[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v51);
    *(_DWORD *)(v1979 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v52 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v52);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1487);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1488);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v53 = std::_Rb_tree_header::_Rb_tree_header(v1489);
    v1979 = 2;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v53);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v54);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 2;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v55);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v56 = (_DWORD *)operator new(8u);
    *v56 = &off_55F1E4;
    v56[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v56);
    *(_DWORD *)(v1977 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v57 = (_DWORD *)operator new(8u);
    *v57 = &off_55F1E4;
    v57[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v57);
    *(_DWORD *)(v1979 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v58 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v58);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1490);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 2;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v59);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v60 = (_DWORD *)operator new(8u);
    *v60 = &off_55F1E4;
    v60[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v60);
    *(_DWORD *)(v1977 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v61 = (_DWORD *)operator new(8u);
    *v61 = &off_55F1E4;
    v61[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v61);
    *(_DWORD *)(v1979 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v62 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v62);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1491);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 2;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v63);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v64 = (_DWORD *)operator new(8u);
    *v64 = &off_55F1E4;
    v64[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v64);
    *(_DWORD *)(v1977 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v65 = (_DWORD *)operator new(8u);
    *v65 = &off_55F1E4;
    v65[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v65);
    *(_DWORD *)(v1979 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v66 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v66);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1492);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 2;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v67);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v68 = (_DWORD *)operator new(8u);
    *v68 = &off_55F1E4;
    v68[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v68);
    *(_DWORD *)(v1977 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v69 = (_DWORD *)operator new(8u);
    *v69 = &off_55F1E4;
    v69[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v69);
    *(_DWORD *)(v1979 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v70 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v70);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1493);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 2;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v71);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v72 = (_DWORD *)operator new(8u);
    *v72 = &off_55F1E4;
    v72[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v72);
    *(_DWORD *)(v1977 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v73 = (_DWORD *)operator new(8u);
    *v73 = &off_55F1E4;
    v73[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v73);
    *(_DWORD *)(v1979 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v74 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v74);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1494);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 2;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v75);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v76 = (_DWORD *)operator new(8u);
    *v76 = &off_55F1E4;
    v76[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v76);
    *(_DWORD *)(v1977 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v77 = (_DWORD *)operator new(8u);
    *v77 = &off_55F1E4;
    v77[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v77);
    *(_DWORD *)(v1979 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v78 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v78);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1495);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 2;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v79);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v80 = (_DWORD *)operator new(8u);
    *v80 = &off_55F1E4;
    v80[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v80);
    *(_DWORD *)(v1977 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v81 = (_DWORD *)operator new(8u);
    *v81 = &off_55F1E4;
    v81[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v81);
    *(_DWORD *)(v1979 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v82 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v82);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1496);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 2;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v83);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v84 = (_DWORD *)operator new(8u);
    *v84 = &off_55F1E4;
    v84[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v84);
    *(_DWORD *)(v1977 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v85 = (_DWORD *)operator new(8u);
    *v85 = &off_55F1E4;
    v85[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v85);
    *(_DWORD *)(v1979 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v86 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v86);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1497);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 2;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v87);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v88 = (_DWORD *)operator new(8u);
    *v88 = &off_55F1E4;
    v88[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v88);
    *(_DWORD *)(v1977 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v89 = (_DWORD *)operator new(8u);
    *v89 = &off_55F1E4;
    v89[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v89);
    *(_DWORD *)(v1979 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v90 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v90);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1498);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 2;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v91);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v92 = (_DWORD *)operator new(8u);
    *v92 = &off_55F1E4;
    v92[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v92);
    *(_DWORD *)(v1977 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v93 = (_DWORD *)operator new(8u);
    *v93 = &off_55F1E4;
    v93[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v93);
    *(_DWORD *)(v1979 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v94 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v94);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1499);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v95 = std::_Rb_tree_header::_Rb_tree_header(v1500);
    v1979 = 3;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v95);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v96);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 3;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v97);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v98 = (_DWORD *)operator new(8u);
    *v98 = &off_55F1E4;
    v98[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v98);
    *(_DWORD *)(v1977 + 4) = 6;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v99 = (_DWORD *)operator new(8u);
    *v99 = &off_55F1E4;
    v99[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v99);
    *(_DWORD *)(v1979 + 4) = 8;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v100 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v100);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1501);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 3;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v101);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v102 = (_DWORD *)operator new(8u);
    *v102 = &off_55F1E4;
    v102[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v102);
    *(_DWORD *)(v1977 + 4) = 6;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v103 = (_DWORD *)operator new(8u);
    *v103 = &off_55F1E4;
    v103[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v103);
    *(_DWORD *)(v1979 + 4) = 8;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v104 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v104);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1502);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 3;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v105);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v106 = (_DWORD *)operator new(8u);
    *v106 = &off_55F1E4;
    v106[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v106);
    *(_DWORD *)(v1977 + 4) = 6;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v107 = (_DWORD *)operator new(8u);
    *v107 = &off_55F1E4;
    v107[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v107);
    *(_DWORD *)(v1979 + 4) = 8;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v108 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v108);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1503);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 3;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v109);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v110 = (_DWORD *)operator new(8u);
    *v110 = &off_55F1E4;
    v110[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v110);
    *(_DWORD *)(v1977 + 4) = 6;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v111 = (_DWORD *)operator new(8u);
    *v111 = &off_55F1E4;
    v111[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v111);
    *(_DWORD *)(v1979 + 4) = 8;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v112 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v112);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1504);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 3;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v113);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v114 = (_DWORD *)operator new(8u);
    *v114 = &off_55F1E4;
    v114[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v114);
    *(_DWORD *)(v1977 + 4) = 6;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v115 = (_DWORD *)operator new(8u);
    *v115 = &off_55F1E4;
    v115[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v115);
    *(_DWORD *)(v1979 + 4) = 8;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v116 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v116);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1505);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 3;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v117);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v118 = (_DWORD *)operator new(8u);
    *v118 = &off_55F1E4;
    v118[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v118);
    *(_DWORD *)(v1977 + 4) = 6;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v119 = (_DWORD *)operator new(8u);
    *v119 = &off_55F1E4;
    v119[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v119);
    *(_DWORD *)(v1979 + 4) = 8;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v120 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v120);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1506);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 3;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v121);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v122 = (_DWORD *)operator new(8u);
    *v122 = &off_55F1E4;
    v122[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v122);
    *(_DWORD *)(v1977 + 4) = 6;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v123 = (_DWORD *)operator new(8u);
    *v123 = &off_55F1E4;
    v123[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v123);
    *(_DWORD *)(v1979 + 4) = 8;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v124 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v124);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1507);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 3;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v125);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v126 = (_DWORD *)operator new(8u);
    *v126 = &off_55F1E4;
    v126[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v126);
    *(_DWORD *)(v1977 + 4) = 6;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v127 = (_DWORD *)operator new(8u);
    *v127 = &off_55F1E4;
    v127[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v127);
    *(_DWORD *)(v1979 + 4) = 8;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v128 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v128);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1508);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 3;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v129);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v130 = (_DWORD *)operator new(8u);
    *v130 = &off_55F1E4;
    v130[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v130);
    *(_DWORD *)(v1977 + 4) = 6;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v131 = (_DWORD *)operator new(8u);
    *v131 = &off_55F1E4;
    v131[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v131);
    *(_DWORD *)(v1979 + 4) = 8;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v132 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v132);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1509);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 3;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v133);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v134 = (_DWORD *)operator new(8u);
    *v134 = &off_55F1E4;
    v134[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v134);
    *(_DWORD *)(v1977 + 4) = 6;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v135 = (_DWORD *)operator new(8u);
    *v135 = &off_55F1E4;
    v135[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v135);
    *(_DWORD *)(v1979 + 4) = 8;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v136 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v136);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1510);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    ////////////////// root - 4 ////////////////////
    v137 = std::_Rb_tree_header::_Rb_tree_header(v1511);
    v1979 = 4;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v137);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v138);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 4;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v139);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v140 = (_DWORD *)operator new(8u);
    *v140 = &off_55F1E4;
    v140[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v140);
    *(_DWORD *)(v1977 + 4) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v141 = (_DWORD *)operator new(8u);
    *v141 = &off_55F1E4;
    v141[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v141);
    *(_DWORD *)(v1979 + 4) = 18;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v142 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v142);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1512);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 4;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v143);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v144 = (_DWORD *)operator new(8u);
    *v144 = &off_55F1E4;
    v144[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v144);
    *(_DWORD *)(v1977 + 4) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v145 = (_DWORD *)operator new(8u);
    *v145 = &off_55F1E4;
    v145[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v145);
    *(_DWORD *)(v1979 + 4) = 18;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v146 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v146);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1513);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 4;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v147);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v148 = (_DWORD *)operator new(8u);
    *v148 = &off_55F1E4;
    v148[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v148);
    *(_DWORD *)(v1977 + 4) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v149 = (_DWORD *)operator new(8u);
    *v149 = &off_55F1E4;
    v149[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v149);
    *(_DWORD *)(v1979 + 4) = 18;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v150 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v150);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1514);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 4;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v151);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v152 = (_DWORD *)operator new(8u);
    *v152 = &off_55F1E4;
    v152[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v152);
    *(_DWORD *)(v1977 + 4) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v153 = (_DWORD *)operator new(8u);
    *v153 = &off_55F1E4;
    v153[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v153);
    *(_DWORD *)(v1979 + 4) = 18;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v154 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v154);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1515);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 4;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v155);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v156 = (_DWORD *)operator new(8u);
    *v156 = &off_55F1E4;
    v156[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v156);
    *(_DWORD *)(v1977 + 4) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v157 = (_DWORD *)operator new(8u);
    *v157 = &off_55F1E4;
    v157[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v157);
    *(_DWORD *)(v1979 + 4) = 18;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v158 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v158);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1516);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 4;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v159);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v160 = (_DWORD *)operator new(8u);
    *v160 = &off_55F1E4;
    v160[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v160);
    *(_DWORD *)(v1977 + 4) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v161 = (_DWORD *)operator new(8u);
    *v161 = &off_55F1E4;
    v161[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v161);
    *(_DWORD *)(v1979 + 4) = 18;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v162 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v162);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1517);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 4;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v163);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v164 = (_DWORD *)operator new(8u);
    *v164 = &off_55F1E4;
    v164[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v164);
    *(_DWORD *)(v1977 + 4) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v165 = (_DWORD *)operator new(8u);
    *v165 = &off_55F1E4;
    v165[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v165);
    *(_DWORD *)(v1979 + 4) = 18;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v166 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v166);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1518);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 4;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v167);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v168 = (_DWORD *)operator new(8u);
    *v168 = &off_55F1E4;
    v168[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v168);
    *(_DWORD *)(v1977 + 4) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v169 = (_DWORD *)operator new(8u);
    *v169 = &off_55F1E4;
    v169[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v169);
    *(_DWORD *)(v1979 + 4) = 18;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v170 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v170);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1519);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 4;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v171);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v172 = (_DWORD *)operator new(8u);
    *v172 = &off_55F1E4;
    v172[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v172);
    *(_DWORD *)(v1977 + 4) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v173 = (_DWORD *)operator new(8u);
    *v173 = &off_55F1E4;
    v173[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v173);
    *(_DWORD *)(v1979 + 4) = 18;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v174 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v174);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1520);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 4;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v175);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v176 = (_DWORD *)operator new(8u);
    *v176 = &off_55F1E4;
    v176[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v176);
    *(_DWORD *)(v1977 + 4) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v177 = (_DWORD *)operator new(8u);
    *v177 = &off_55F1E4;
    v177[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v177);
    *(_DWORD *)(v1979 + 4) = 18;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v178 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v178);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1521);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    ////////////////// root - 5 ////////////////////
    v179 = std::_Rb_tree_header::_Rb_tree_header(v1522);
    v1979 = 5;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v179);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v180);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 5;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v181);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v182 = (_DWORD *)operator new(8u);
    *v182 = &off_55F1E4;
    v182[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v182);
    *(_DWORD *)(v1977 + 4) = 25;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v183 = (_DWORD *)operator new(8u);
    *v183 = &off_55F1E4;
    v183[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v183);
    *(_DWORD *)(v1979 + 4) = 16;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v184 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v184);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1523);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 5;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v185);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v186 = (_DWORD *)operator new(8u);
    *v186 = &off_55F1E4;
    v186[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v186);
    *(_DWORD *)(v1977 + 4) = 25;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v187 = (_DWORD *)operator new(8u);
    *v187 = &off_55F1E4;
    v187[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v187);
    *(_DWORD *)(v1979 + 4) = 16;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v188 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v188);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1524);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 5;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v189);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v190 = (_DWORD *)operator new(8u);
    *v190 = &off_55F1E4;
    v190[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v190);
    *(_DWORD *)(v1977 + 4) = 25;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v191 = (_DWORD *)operator new(8u);
    *v191 = &off_55F1E4;
    v191[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v191);
    *(_DWORD *)(v1979 + 4) = 16;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v192 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v192);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1525);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 5;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v193);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v194 = (_DWORD *)operator new(8u);
    *v194 = &off_55F1E4;
    v194[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v194);
    *(_DWORD *)(v1977 + 4) = 25;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v195 = (_DWORD *)operator new(8u);
    *v195 = &off_55F1E4;
    v195[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v195);
    *(_DWORD *)(v1979 + 4) = 16;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v196 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v196);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1526);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 5;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v197);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v198 = (_DWORD *)operator new(8u);
    *v198 = &off_55F1E4;
    v198[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v198);
    *(_DWORD *)(v1977 + 4) = 25;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v199 = (_DWORD *)operator new(8u);
    *v199 = &off_55F1E4;
    v199[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v199);
    *(_DWORD *)(v1979 + 4) = 16;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v200 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v200);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1527);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 5;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v201);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v202 = (_DWORD *)operator new(8u);
    *v202 = &off_55F1E4;
    v202[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v202);
    *(_DWORD *)(v1977 + 4) = 25;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v203 = (_DWORD *)operator new(8u);
    *v203 = &off_55F1E4;
    v203[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v203);
    *(_DWORD *)(v1979 + 4) = 16;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v204 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v204);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1528);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 5;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v205);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v206 = (_DWORD *)operator new(8u);
    *v206 = &off_55F1E4;
    v206[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v206);
    *(_DWORD *)(v1977 + 4) = 25;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v207 = (_DWORD *)operator new(8u);
    *v207 = &off_55F1E4;
    v207[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v207);
    *(_DWORD *)(v1979 + 4) = 16;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v208 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v208);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1529);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 5;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v209);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v210 = (_DWORD *)operator new(8u);
    *v210 = &off_55F1E4;
    v210[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v210);
    *(_DWORD *)(v1977 + 4) = 25;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v211 = (_DWORD *)operator new(8u);
    *v211 = &off_55F1E4;
    v211[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v211);
    *(_DWORD *)(v1979 + 4) = 16;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v212 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v212);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1530);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 5;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v213);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v214 = (_DWORD *)operator new(8u);
    *v214 = &off_55F1E4;
    v214[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v214);
    *(_DWORD *)(v1977 + 4) = 25;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v215 = (_DWORD *)operator new(8u);
    *v215 = &off_55F1E4;
    v215[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v215);
    *(_DWORD *)(v1979 + 4) = 16;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v216 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v216);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1531);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 5;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v217);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v218 = (_DWORD *)operator new(8u);
    *v218 = &off_55F1E4;
    v218[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v218);
    *(_DWORD *)(v1977 + 4) = 25;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v219 = (_DWORD *)operator new(8u);
    *v219 = &off_55F1E4;
    v219[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v219);
    *(_DWORD *)(v1979 + 4) = 16;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v220 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v220);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1532);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    ////////////////// root - 6 ////////////////////
    v221 = std::_Rb_tree_header::_Rb_tree_header(v1533);
    v1979 = 6;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v221);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v222);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 6;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v223);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v224 = (_DWORD *)operator new(8u);
    *v224 = &off_55F1E4;
    v224[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v224);
    *(_DWORD *)(v1977 + 4) = 5;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v225 = (_DWORD *)operator new(8u);
    *v225 = &off_55F1E4;
    v225[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v225);
    *(_DWORD *)(v1979 + 4) = 33;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v226 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v226);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1534);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 6;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v227);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v228 = (_DWORD *)operator new(8u);
    *v228 = &off_55F1E4;
    v228[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v228);
    *(_DWORD *)(v1977 + 4) = 5;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v229 = (_DWORD *)operator new(8u);
    *v229 = &off_55F1E4;
    v229[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v229);
    *(_DWORD *)(v1979 + 4) = 33;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v230 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v230);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1535);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 6;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v231);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v232 = (_DWORD *)operator new(8u);
    *v232 = &off_55F1E4;
    v232[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v232);
    *(_DWORD *)(v1977 + 4) = 5;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v233 = (_DWORD *)operator new(8u);
    *v233 = &off_55F1E4;
    v233[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v233);
    *(_DWORD *)(v1979 + 4) = 33;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v234 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v234);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1536);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 6;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v235);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v236 = (_DWORD *)operator new(8u);
    *v236 = &off_55F1E4;
    v236[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v236);
    *(_DWORD *)(v1977 + 4) = 5;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v237 = (_DWORD *)operator new(8u);
    *v237 = &off_55F1E4;
    v237[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v237);
    *(_DWORD *)(v1979 + 4) = 33;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v238 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v238);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1537);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 6;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v239);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v240 = (_DWORD *)operator new(8u);
    *v240 = &off_55F1E4;
    v240[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v240);
    *(_DWORD *)(v1977 + 4) = 5;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v241 = (_DWORD *)operator new(8u);
    *v241 = &off_55F1E4;
    v241[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v241);
    *(_DWORD *)(v1979 + 4) = 33;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v242 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v242);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1538);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 6;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v243);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v244 = (_DWORD *)operator new(8u);
    *v244 = &off_55F1E4;
    v244[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v244);
    *(_DWORD *)(v1977 + 4) = 5;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v245 = (_DWORD *)operator new(8u);
    *v245 = &off_55F1E4;
    v245[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v245);
    *(_DWORD *)(v1979 + 4) = 33;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v246 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v246);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1539);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 6;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v247);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v248 = (_DWORD *)operator new(8u);
    *v248 = &off_55F1E4;
    v248[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v248);
    *(_DWORD *)(v1977 + 4) = 5;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v249 = (_DWORD *)operator new(8u);
    *v249 = &off_55F1E4;
    v249[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v249);
    *(_DWORD *)(v1979 + 4) = 33;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v250 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v250);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1540);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 6;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v251);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v252 = (_DWORD *)operator new(8u);
    *v252 = &off_55F1E4;
    v252[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v252);
    *(_DWORD *)(v1977 + 4) = 5;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v253 = (_DWORD *)operator new(8u);
    *v253 = &off_55F1E4;
    v253[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v253);
    *(_DWORD *)(v1979 + 4) = 33;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v254 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v254);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1541);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 6;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v255);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v256 = (_DWORD *)operator new(8u);
    *v256 = &off_55F1E4;
    v256[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v256);
    *(_DWORD *)(v1977 + 4) = 5;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v257 = (_DWORD *)operator new(8u);
    *v257 = &off_55F1E4;
    v257[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v257);
    *(_DWORD *)(v1979 + 4) = 33;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v258 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v258);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1542);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 6;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v259);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v260 = (_DWORD *)operator new(8u);
    *v260 = &off_55F1E4;
    v260[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v260);
    *(_DWORD *)(v1977 + 4) = 5;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v261 = (_DWORD *)operator new(8u);
    *v261 = &off_55F1E4;
    v261[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v261);
    *(_DWORD *)(v1979 + 4) = 33;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v262 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v262);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1543);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    ////////////////// root - 7 ////////////////////
    v263 = std::_Rb_tree_header::_Rb_tree_header(v1544);
    v1979 = 7;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v263);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v264);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 7;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v265);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v266 = (_DWORD *)operator new(8u);
    *v266 = &off_55F1E4;
    v266[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v266);
    *(_DWORD *)(v1977 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v267 = (_DWORD *)operator new(8u);
    *v267 = &off_55F1E4;
    v267[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v267);
    *(_DWORD *)(v1979 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v268 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v268);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1545);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 7;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v269);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v270 = (_DWORD *)operator new(8u);
    *v270 = &off_55F1E4;
    v270[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v270);
    *(_DWORD *)(v1977 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v271 = (_DWORD *)operator new(8u);
    *v271 = &off_55F1E4;
    v271[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v271);
    *(_DWORD *)(v1979 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v272 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v272);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1546);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 7;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v273);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v274 = (_DWORD *)operator new(8u);
    *v274 = &off_55F1E4;
    v274[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v274);
    *(_DWORD *)(v1977 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v275 = (_DWORD *)operator new(8u);
    *v275 = &off_55F1E4;
    v275[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v275);
    *(_DWORD *)(v1979 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v276 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v276);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1547);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 7;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v277);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v278 = (_DWORD *)operator new(8u);
    *v278 = &off_55F1E4;
    v278[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v278);
    *(_DWORD *)(v1977 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v279 = (_DWORD *)operator new(8u);
    *v279 = &off_55F1E4;
    v279[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v279);
    *(_DWORD *)(v1979 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v280 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v280);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1548);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 7;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v281);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v282 = (_DWORD *)operator new(8u);
    *v282 = &off_55F1E4;
    v282[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v282);
    *(_DWORD *)(v1977 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v283 = (_DWORD *)operator new(8u);
    *v283 = &off_55F1E4;
    v283[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v283);
    *(_DWORD *)(v1979 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v284 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v284);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1549);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 7;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v285);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v286 = (_DWORD *)operator new(8u);
    *v286 = &off_55F1E4;
    v286[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v286);
    *(_DWORD *)(v1977 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v287 = (_DWORD *)operator new(8u);
    *v287 = &off_55F1E4;
    v287[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v287);
    *(_DWORD *)(v1979 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v288 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v288);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1550);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 7;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v289);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v290 = (_DWORD *)operator new(8u);
    *v290 = &off_55F1E4;
    v290[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v290);
    *(_DWORD *)(v1977 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v291 = (_DWORD *)operator new(8u);
    *v291 = &off_55F1E4;
    v291[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v291);
    *(_DWORD *)(v1979 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v292 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v292);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1551);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 7;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v293);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v294 = (_DWORD *)operator new(8u);
    *v294 = &off_55F1E4;
    v294[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v294);
    *(_DWORD *)(v1977 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v295 = (_DWORD *)operator new(8u);
    *v295 = &off_55F1E4;
    v295[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v295);
    *(_DWORD *)(v1979 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v296 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v296);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1552);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 7;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v297);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v298 = (_DWORD *)operator new(8u);
    *v298 = &off_55F1E4;
    v298[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v298);
    *(_DWORD *)(v1977 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v299 = (_DWORD *)operator new(8u);
    *v299 = &off_55F1E4;
    v299[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v299);
    *(_DWORD *)(v1979 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v300 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v300);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1553);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 7;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v301);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v302 = (_DWORD *)operator new(8u);
    *v302 = &off_55F1E4;
    v302[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v302);
    *(_DWORD *)(v1977 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v303 = (_DWORD *)operator new(8u);
    *v303 = &off_55F1E4;
    v303[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v303);
    *(_DWORD *)(v1979 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v304 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v304);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1554);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    ////////////////// root - 8 ////////////////////
    v305 = std::_Rb_tree_header::_Rb_tree_header(v1555);
    v1979 = 8;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v305);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v306);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 8;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v307);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v308 = (_DWORD *)operator new(4u);
    *v308 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v308);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v309 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v309);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 8;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v310);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v311 = (_DWORD *)operator new(4u);
    *v311 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v311);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v312 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v312);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 8;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v313);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v314 = (_DWORD *)operator new(4u);
    *v314 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v314);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v315 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v315);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("||");
    v1977 = 8;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v316);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v317 = (_DWORD *)operator new(4u);
    *v317 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v317);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v318 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v318);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 8;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v319);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v320 = (_DWORD *)operator new(4u);
    *v320 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v320);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v321 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v321);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&&");
    v1977 = 8;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v322);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1867 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1556);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1867);

    std::string::basic_string("&&");
    v323 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v323);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v324 = (_DWORD *)operator new(8u);
    *v324 = &off_55F1E4;
    v324[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v324);
    *(_DWORD *)(v1975 + 4) = 6;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);

    v1868 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1557);
    /**
     * off_55F20C
     * 2
    */
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1868);
    std::string::basic_string("a=pop();b=pop();c=b&&a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v325);

    std::string::operator=("&&");
    v326 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v326 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);

    v327 = (_DWORD *)operator new(8u);
    *v327 = &off_55F1E4;
    v327[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v327);
    *(_DWORD *)(v1982 + 4) = 8;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v328 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v328);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1558);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1559);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1560);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788); // :
    v1977 = 8;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v329);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v330 = (_DWORD *)operator new(4u);
    *v330 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v330);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v331 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v331);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]); // ]
    v1977 = 8;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v332);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v333 = (_DWORD *)operator new(4u);
    *v333 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v333);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v334 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v334);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 8;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v335);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v336 = (_DWORD *)operator new(4u);
    *v336 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v336);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v337 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v337);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    //////////////// root - 9 ///////////
    v338 = std::_Rb_tree_header::_Rb_tree_header(v1561);
    v1979 = 9;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v338);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v339);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 9;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v340);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v341 = (_DWORD *)operator new(4u);
    *v341 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v341);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v342 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v342);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 9;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v343);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v344 = (_DWORD *)operator new(4u);
    *v344 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v344);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v345 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v345);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]); // ]
    v1977 = 9;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v346);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v347 = (_DWORD *)operator new(4u);
    *v347 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v347);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v348 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v348);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 9;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v349);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v350 = (_DWORD *)operator new(4u);
    *v350 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v350);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v351 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v351);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788);
    v1977 = 9;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v352);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v353 = (_DWORD *)operator new(4u);
    *v353 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v353);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v354 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v354);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 9;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v355);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v356 = (_DWORD *)operator new(4u);
    *v356 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v356);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v357 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v357);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 9;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v358);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1869 = operator new(0x38u);
    /**
     * off_55F220
    */
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1562);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1869);
    std::string::basic_string("?");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v359);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1965);
    v360 = (_DWORD *)operator new(8u);
    *v360 = &off_55F1E4;
    v360[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v360);
    *(_DWORD *)(v1967 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1967);
    v361 = (_DWORD *)operator new(8u);
    *v361 = &off_55F1E4;
    v361[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v361);
    *(_DWORD *)(v1969 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1969);
    //////////////////////////////////
    v1870 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1563);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1870);
    std::string::basic_string((char *)off_554788);
    v362 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v362);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1971);

    v363 = (_DWORD *)operator new(8u);
    *v363 = &off_55F1E4;
    v363[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v363);
    *(_DWORD *)(v1973 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v364 = (_DWORD *)operator new(8u);
    *v364 = &off_55F1E4;
    v364[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v364);
    *(_DWORD *)(v1975 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);

    v1871 = operator new(0x3Cu);
    /**
     * off_55F20C
    */
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1564);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1871);
    std::string::basic_string("a=pop();b=pop();c=pop();c?b:a");
    v365 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v365);
    std::string::operator=("?:");
    v366 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v366 + 32) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v367 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v367);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1565);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1566);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1972, v1567);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1970, v1568);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1968, v1569);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1966, v1570);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);

    //////////////////// root - 10 ///////////////////
    v368 = std::_Rb_tree_header::_Rb_tree_header(v1571);
    v1979 = 10;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v368);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v369);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 10;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v370);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1872 = operator new(0x38u);
/**
 * off_55F220
 * 0
*/
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1572);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1872);
    std::string::basic_string("[");
    v371 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v371);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1971);
    v372 = (_DWORD *)operator new(8u);
    *v372 = &off_55F1E4;
    v372[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v372);
    *(_DWORD *)(v1973 + 4) = 30;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);

    v1873 = operator new(0x38u);
/**
 * off_55F220
 * 0
*/
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1573);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1873);
    std::string::basic_string((char *)&off_554788[2]); // ]
    v373 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v373);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);

    v1874 = operator new(0x3Cu);
/**
 * off_55F20C
*/
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1574);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1874);
    std::string::basic_string("a=pop;c=make_list(a);push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v374);
    std::string::operator=("OP_LIST");
    v375 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v375 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v376 = (_DWORD *)operator new(8u);
    *v376 = &off_55F1E4;
    v376[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v376);
    *(_DWORD *)(v1982 + 4) = 17;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v377 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v377);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1575);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1576);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1577);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1972, v1578);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 10;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v378);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1875 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1579);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1875);
    std::string::basic_string("$VAR");
    v379 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v379);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1876 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1580);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1876);
    std::string::basic_string("a=pop;c=[];c.append()");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v380);
    std::string::operator=("OP_PATH");
    v381 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v381 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v382 = (_DWORD *)operator new(8u);
    *v382 = &off_55F1E4;
    v382[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v382);
    *(_DWORD *)(v1982 + 4) = 17;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v383 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v383);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1581);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1582);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);

    ////////////////////// root - 11 ////////////////////
    v384 = std::_Rb_tree_header::_Rb_tree_header(v1583);
    v1979 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v384);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v385);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">=");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v386);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v387 = (_DWORD *)operator new(4u);
    *v387 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v387);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v388 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v388);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">>");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v389);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1877 = operator new(0x38u);
    
/**
 * off_55F220
 * 0
*/
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1584);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1877);
    std::string::basic_string(">>");
    v390 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v390);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    
    v391 = (_DWORD *)operator new(8u);
    *v391 = &off_55F1E4;
    v391[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v391);
    *(_DWORD *)(v1975 + 4) = 22;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1878 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1585);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1878);
    std::string::basic_string("a=pop();b=pop();c=b>>a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v392);
    std::string::operator=(">>");
    v393 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v393 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v394 = (_DWORD *)operator new(8u);
    *v394 = &off_55F1E4;
    v394[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v394);
    *(_DWORD *)(v1982 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v395 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v395);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1586);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1587);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1588);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<<");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v396);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1879 = operator new(0x38u);
/**
 * off_55F220
 * 0
*/
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1589);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1879);
    std::string::basic_string("<<");
    v397 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v397);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v398 = (_DWORD *)operator new(8u);
    *v398 = &off_55F1E4;
    v398[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v398);
    *(_DWORD *)(v1975 + 4) = 22;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1880 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1590);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1880);
    std::string::basic_string("a=pop();b=pop();c=b<<a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v399);
    std::string::operator=("<<");
    v400 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v400 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v401 = (_DWORD *)operator new(8u);
    *v401 = &off_55F1E4;
    v401[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v401);
    *(_DWORD *)(v1982 + 4) = 11;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v402 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v402);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1591);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1592);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1593);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<=");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v403);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v404 = (_DWORD *)operator new(4u);
    *v404 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v404);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v405 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v405);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!=");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v406);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v407 = (_DWORD *)operator new(4u);
    *v407 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v407);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v408 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v408);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v409);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v410 = (_DWORD *)operator new(4u);
    *v410 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v410);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v411 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v411);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v412);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v413 = (_DWORD *)operator new(4u);
    *v413 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v413);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v414 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v414);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v415);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v416 = (_DWORD *)operator new(4u);
    *v416 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v416);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v417 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v417);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v418);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v419 = (_DWORD *)operator new(4u);
    *v419 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v419);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v420 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v420);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788); // :
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v421);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v422 = (_DWORD *)operator new(4u);
    *v422 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v422);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v423 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v423);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v424);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v425 = (_DWORD *)operator new(4u);
    *v425 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v425);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v426 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v426);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v427);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v428 = (_DWORD *)operator new(4u);
    *v428 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v428);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v429 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v429);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v430);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v431 = (_DWORD *)operator new(4u);
    *v431 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v431);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v432 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v432);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("==");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v433);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v434 = (_DWORD *)operator new(4u);
    *v434 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v434);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v435 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v435);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&&");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v436);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v437 = (_DWORD *)operator new(4u);
    *v437 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v437);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v438 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v438);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]); // ]
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v439);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v440 = (_DWORD *)operator new(4u);
    *v440 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v440);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v441 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v441);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("^");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v442);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v443 = (_DWORD *)operator new(4u);
    *v443 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v443);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v444 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v444);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("===");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v445);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v446 = (_DWORD *)operator new(4u);
    *v446 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v446);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v447 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v447);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("||");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v448);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v449 = (_DWORD *)operator new(4u);
    *v449 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v449);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v450 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v450);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!==");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v451);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v452 = (_DWORD *)operator new(4u);
    *v452 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v452);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v453 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v453);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v454);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v455 = (_DWORD *)operator new(4u);
    *v455 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v455);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v456 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v456);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("|");
    v1977 = 11;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v457);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v458 = (_DWORD *)operator new(4u);
    *v458 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v458);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v459 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v459);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    ////////////////// root - 12 ////////////
    v460 = std::_Rb_tree_header::_Rb_tree_header(v1594);
    v1979 = 12;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v460);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v461);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("...");
    v1977 = 12;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v462);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1881 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1595);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1881);
    std::string::basic_string("...");
    v463 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v463);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v464 = (_DWORD *)operator new(8u);
    *v464 = &off_55F1E4;
    v464[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v464);
    *(_DWORD *)(v1975 + 4) = 14;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1882 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1596);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1882);
    std::string::basic_string("a=pop();c=expand(a);push(c);");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v465);
    std::string::operator=("OP_EXPAND");
    v466 = v1977;
    *(_DWORD *)(v1977 + 28) = 1;
    *(_DWORD *)(v466 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v467 = (_DWORD *)operator new(8u);
    *v467 = &off_55F1E4;
    v467[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v467);
    *(_DWORD *)(v1982 + 4) = 27;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v468 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v468);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1597);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1598);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1599);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 12;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v469);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1883 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1600);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1883);
    std::string::basic_string("$VAR");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v470);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v471 = (_DWORD *)operator new(8u);
    *v471 = &off_55F1E4;
    v471[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v471);
    *(_DWORD *)(v1977 + 4) = 28;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    
    v472 = (_DWORD *)operator new(8u);
    *v472 = &off_55F1E4;
    v472[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v472);
    *(_DWORD *)(v1982 + 4) = 27;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v473 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v473);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1601);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1602);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    ////////////////// root - 13 //////////////////////
    v474 = std::_Rb_tree_header::_Rb_tree_header(v1603);
    v1979 = 13;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v474);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v475);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("...");
    v1977 = 13;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v476);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1884 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1604);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1884);
    std::string::basic_string("...");
    v477 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v477);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v478 = (_DWORD *)operator new(8u);
    *v478 = &off_55F1E4;
    v478[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v478);
    *(_DWORD *)(v1975 + 4) = 14;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1885 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1605);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1885);
    std::string::basic_string("a=pop();c=expand(a);push(c);");
    v479 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v479);
    std::string::operator=("OP_EXPAND");
    v480 = v1977;
    *(_DWORD *)(v1977 + 28) = 1;
    *(_DWORD *)(v480 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v481 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v481);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1606);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1607);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 13;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v482);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1886 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1608);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1886);
    std::string::basic_string("$VAR");
    v483 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v483);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v484 = (_DWORD *)operator new(8u);
    *v484 = &off_55F1E4;
    v484[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v484);
    *(_DWORD *)(v1982 + 4) = 28;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v485 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v485);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1609);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    
    ////////////////// root - 14 //////////////////////
    v486 = std::_Rb_tree_header::_Rb_tree_header(v1610);
    v1979 = 14;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v486);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v487);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 14;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v488);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v489 = (_DWORD *)operator new(8u);
    *v489 = &off_55F1E4;
    v489[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v489);
    *(_DWORD *)(v1977 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v490 = (_DWORD *)operator new(8u);
    *v490 = &off_55F1E4;
    v490[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v490);
    *(_DWORD *)(v1979 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v491 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v491);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1611);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 14;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v492);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v493 = (_DWORD *)operator new(8u);
    *v493 = &off_55F1E4;
    v493[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v493);
    *(_DWORD *)(v1977 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v494 = (_DWORD *)operator new(8u);
    *v494 = &off_55F1E4;
    v494[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v494);
    *(_DWORD *)(v1979 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v495 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v495);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1612);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 14;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v496);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v497 = (_DWORD *)operator new(8u);
    *v497 = &off_55F1E4;
    v497[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v497);
    *(_DWORD *)(v1977 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v498 = (_DWORD *)operator new(8u);
    *v498 = &off_55F1E4;
    v498[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v498);
    *(_DWORD *)(v1979 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v499 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v499);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1613);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 14;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v500);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v501 = (_DWORD *)operator new(8u);
    *v501 = &off_55F1E4;
    v501[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v501);
    *(_DWORD *)(v1977 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v502 = (_DWORD *)operator new(8u);
    *v502 = &off_55F1E4;
    v502[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v502);
    *(_DWORD *)(v1979 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v503 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v503);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1614);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 14;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v504);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v505 = (_DWORD *)operator new(8u);
    *v505 = &off_55F1E4;
    v505[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v505);
    *(_DWORD *)(v1977 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v506 = (_DWORD *)operator new(8u);
    *v506 = &off_55F1E4;
    v506[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v506);
    *(_DWORD *)(v1979 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v507 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v507);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1615);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 14;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v508);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v509 = (_DWORD *)operator new(8u);
    *v509 = &off_55F1E4;
    v509[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v509);
    *(_DWORD *)(v1977 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v510 = (_DWORD *)operator new(8u);
    *v510 = &off_55F1E4;
    v510[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v510);
    *(_DWORD *)(v1979 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v511 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v511);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1616);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 14;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v512);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v513 = (_DWORD *)operator new(8u);
    *v513 = &off_55F1E4;
    v513[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v513);
    *(_DWORD *)(v1977 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v514 = (_DWORD *)operator new(8u);
    *v514 = &off_55F1E4;
    v514[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v514);
    *(_DWORD *)(v1979 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v515 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v515);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1617);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 14;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v516);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v517 = (_DWORD *)operator new(8u);
    *v517 = &off_55F1E4;
    v517[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v517);
    *(_DWORD *)(v1977 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v518 = (_DWORD *)operator new(8u);
    *v518 = &off_55F1E4;
    v518[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v518);
    *(_DWORD *)(v1979 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v519 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v519);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1618);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 14;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v520);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v521 = (_DWORD *)operator new(8u);
    *v521 = &off_55F1E4;
    v521[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v521);
    *(_DWORD *)(v1977 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v522 = (_DWORD *)operator new(8u);
    *v522 = &off_55F1E4;
    v522[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v522);
    *(_DWORD *)(v1979 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v523 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v523);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1619);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 14;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v524);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v525 = (_DWORD *)operator new(8u);
    *v525 = &off_55F1E4;
    v525[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v525);
    *(_DWORD *)(v1977 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v526 = (_DWORD *)operator new(8u);
    *v526 = &off_55F1E4;
    v526[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v526);
    *(_DWORD *)(v1979 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v527 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v527);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1620);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 15 ///////////////
    v528 = std::_Rb_tree_header::_Rb_tree_header(v1621);
    v1979 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v528);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v529);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("===");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v530);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1887 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1622);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1887);
    std::string::basic_string("===");
    v531 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v531);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v532 = (_DWORD *)operator new(8u);
    *v532 = &off_55F1E4;
    v532[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v532);
    *(_DWORD *)(v1975 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1888 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1623);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1888);
    std::string::basic_string("a=pop();b=pop();c=b===a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v533);
    std::string::operator=("===");
    v534 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v534 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v535 = (_DWORD *)operator new(8u);
    *v535 = &off_55F1E4;
    v535[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v535);
    *(_DWORD *)(v1982 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v536 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v536);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1624);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1625);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1626);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!==");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v537);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1889 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1627);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1889);
    std::string::basic_string("!==");
    v538 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v538);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v539 = (_DWORD *)operator new(8u);
    *v539 = &off_55F1E4;
    v539[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v539);
    *(_DWORD *)(v1975 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1890 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1628);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1890);
    std::string::basic_string("a=pop();b=pop();c=b!==a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v540);
    std::string::operator=("!==");
    v541 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v541 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v542 = (_DWORD *)operator new(8u);
    *v542 = &off_55F1E4;
    v542[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v542);
    *(_DWORD *)(v1982 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v543 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v543);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1629);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1630);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1631);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v544);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v545 = (_DWORD *)operator new(4u);
    *v545 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v545);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v546 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v546);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v547);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v548 = (_DWORD *)operator new(4u);
    *v548 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v548);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v549 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v549);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("==");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v550);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1891 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1632);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1891);
    std::string::basic_string("==");
    v551 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v551);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v552 = (_DWORD *)operator new(8u);
    *v552 = &off_55F1E4;
    v552[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v552);
    *(_DWORD *)(v1975 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1892 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1633);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1892);
    std::string::basic_string("a=pop();b=pop();c=b==a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v553);
    std::string::operator=("==");
    v554 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v554 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v555 = (_DWORD *)operator new(8u);
    *v555 = &off_55F1E4;
    v555[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v555);
    *(_DWORD *)(v1982 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v556 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v556);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1634);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1635);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1636);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v557);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v558 = (_DWORD *)operator new(4u);
    *v558 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v558);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v559 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v559);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("||");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v560);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v561 = (_DWORD *)operator new(4u);
    *v561 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v561);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v562 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v562);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]);
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v563);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v564 = (_DWORD *)operator new(4u);
    *v564 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v564);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v565 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v565);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v566);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v567 = (_DWORD *)operator new(4u);
    *v567 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v567);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v568 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v568);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v569);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v570 = (_DWORD *)operator new(4u);
    *v570 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v570);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v571 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v571);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&&");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v572);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v573 = (_DWORD *)operator new(4u);
    *v573 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v573);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v574 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v574);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788);
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v575);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v576 = (_DWORD *)operator new(4u);
    *v576 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v576);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v577 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v577);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!=");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v578);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1893 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1637);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1893);
    std::string::basic_string("!=");
    v579 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v579);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v580 = (_DWORD *)operator new(8u);
    *v580 = &off_55F1E4;
    v580[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v580);
    *(_DWORD *)(v1975 + 4) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1894 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1638);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1894);
    std::string::basic_string("a=pop();b=pop();c=b!=a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v581);
    std::string::operator=("!=");
    v582 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v582 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v583 = (_DWORD *)operator new(8u);
    *v583 = &off_55F1E4;
    v583[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v583);
    *(_DWORD *)(v1982 + 4) = 15;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v584 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v584);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1639);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1640);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1641);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("|");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v585);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v586 = (_DWORD *)operator new(4u);
    *v586 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v586);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v587 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v587);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v588);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v589 = (_DWORD *)operator new(4u);
    *v589 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v589);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v590 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v590);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("^");
    v1977 = 15;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v591);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v592 = (_DWORD *)operator new(4u);
    *v592 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v592);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v593 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v593);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 16 ///////////////
    v594 = std::_Rb_tree_header::_Rb_tree_header(v1642);
    v1979 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v594);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v595);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v596);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v597 = (_DWORD *)operator new(4u);
    *v597 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v597);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v598 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v598);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v599);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v600 = (_DWORD *)operator new(4u);
    *v600 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v600);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v601 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v601);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v602);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v603 = (_DWORD *)operator new(4u);
    *v603 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v603);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v604 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v604);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("||");
    v1977 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v605);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v606 = (_DWORD *)operator new(4u);
    *v606 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v606);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v607 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v607);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v608);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v609 = (_DWORD *)operator new(4u);
    *v609 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v609);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v610 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v610);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&&");
    v1977 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v611);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v612 = (_DWORD *)operator new(4u);
    *v612 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v612);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v613 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v613);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788);
    v1977 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v614);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v615 = (_DWORD *)operator new(4u);
    *v615 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v615);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v616 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v616);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]);
    v1977 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v617);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v618 = (_DWORD *)operator new(4u);
    *v618 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v618);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v619 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v619);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("|");
    v1977 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v620);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v621 = (_DWORD *)operator new(4u);
    *v621 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v621);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v622 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v622);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v623);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v624 = (_DWORD *)operator new(4u);
    *v624 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v624);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v625 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v625);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("^");
    v1977 = 16;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v626);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1895 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1643);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1895);
    std::string::basic_string("^");
    v627 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v627);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v628 = (_DWORD *)operator new(8u);
    *v628 = &off_55F1E4;
    v628[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v628);
    *(_DWORD *)(v1975 + 4) = 25;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1896 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1644);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1896);
    std::string::basic_string("a=pop();b=pop();c=b^a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v629);
    std::string::operator=("^");
    v630 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v630 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v631 = (_DWORD *)operator new(8u);
    *v631 = &off_55F1E4;
    v631[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v631);
    *(_DWORD *)(v1982 + 4) = 16;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v632 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v632);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1645);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1646);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1647);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    //////////////// root - 17 ///////////////
    v633 = std::_Rb_tree_header::_Rb_tree_header(v1648);
    v1979 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v633);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v634);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">=");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v635);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v636 = (_DWORD *)operator new(4u);
    *v636 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v636);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v637 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v637);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">>");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v638);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v639 = (_DWORD *)operator new(4u);
    *v639 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v639);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v640 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v640);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("||");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v641);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v642 = (_DWORD *)operator new(4u);
    *v642 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v642);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v643 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v643);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<=");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v644);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v645 = (_DWORD *)operator new(4u);
    *v645 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v645);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v646 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v646);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!=");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v647);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v648 = (_DWORD *)operator new(4u);
    *v648 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v648);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v649 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v649);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("%");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v650);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v651 = (_DWORD *)operator new(4u);
    *v651 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v651);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v652 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v652);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v653);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v654 = (_DWORD *)operator new(4u);
    *v654 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v654);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v655 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v655);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v656);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v657 = (_DWORD *)operator new(4u);
    *v657 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v657);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v658 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v658);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v659);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v660 = (_DWORD *)operator new(4u);
    *v660 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v660);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v661 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v661);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v662);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1897 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1649);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1897);
    std::string::basic_string("(");
    v663 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v663);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1971);
    v664 = (_DWORD *)operator new(8u);
    *v664 = &off_55F1E4;
    v664[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v664);
    *(_DWORD *)(v1973 + 4) = 30;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1898 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1650);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1898);
    std::string::basic_string(")");
    v665 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v665);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1899 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1651);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1899);
    std::string::basic_string("a=pop;b=pop;c=b[a]");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v666);
    std::string::operator=("OP_FUNC");
    v667 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v667 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v668 = (_DWORD *)operator new(8u);
    *v668 = &off_55F1E4;
    v668[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v668);
    *(_DWORD *)(v1982 + 4) = 17;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v669 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v669);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1652);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1653);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1654);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1972, v1655);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)asc_554938);
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v670);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v671 = (_DWORD *)operator new(4u);
    *v671 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v671);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v672 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v672);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&asc_554938[2]);
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v673);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v674 = (_DWORD *)operator new(4u);
    *v674 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v674);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v675 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v675);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v676);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v677 = (_DWORD *)operator new(4u);
    *v677 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v677);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v678 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v678);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v679);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v680 = (_DWORD *)operator new(4u);
    *v680 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v680);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v681 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v681);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&asc_554938[4]);
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v682);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v683 = (_DWORD *)operator new(4u);
    *v683 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v683);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v684 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v684);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&asc_554938[6]);
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v685);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1900 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1656);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1900);
    std::string::basic_string((char *)&asc_554938[6]);
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v686);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1901 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1657);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1901);
    std::string::basic_string("$VAR");
    v687 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v687);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1902 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1658);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1902);
    std::string::basic_string("a=pop;c=top;c.append(a)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v688);
    std::string::operator=("OP_DICT");
    v689 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v689 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v690 = (_DWORD *)operator new(8u);
    *v690 = &off_55F1E4;
    v690[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v690);
    *(_DWORD *)(v1982 + 4) = 17;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v691 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v691);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1659);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1660);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1661);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788);
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v692);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v693 = (_DWORD *)operator new(4u);
    *v693 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v693);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v694 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v694);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<<");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v695);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v696 = (_DWORD *)operator new(4u);
    *v696 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v696);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v697 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v697);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v698);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v699 = (_DWORD *)operator new(4u);
    *v699 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v699);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v700 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v700);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v701);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v702 = (_DWORD *)operator new(4u);
    *v702 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v702);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v703 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v703);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("==");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v704);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v705 = (_DWORD *)operator new(4u);
    *v705 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v705);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v706 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v706);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&&");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v707);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v708 = (_DWORD *)operator new(4u);
    *v708 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v708);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v709 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v709);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v710);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1903 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1662);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1903);
    std::string::basic_string("[");
    v711 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v711);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1971);
    v712 = (_DWORD *)operator new(8u);
    *v712 = &off_55F1E4;
    v712[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v712);
    *(_DWORD *)(v1973 + 4) = 14;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1904 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1663);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1904);
    std::string::basic_string((char *)&off_554788[2]);
    v713 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v713);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1905 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1664);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1905);
    std::string::basic_string("a=pop;b=pop;c=b[a]");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v714);
    std::string::operator=("OP_DICT");
    v715 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v715 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v716 = (_DWORD *)operator new(8u);
    *v716 = &off_55F1E4;
    v716[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v716);
    *(_DWORD *)(v1982 + 4) = 17;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v717 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v717);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1665);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1666);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1667);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1972, v1668);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]);
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v718);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v719 = (_DWORD *)operator new(4u);
    *v719 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v719);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v720 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v720);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("^");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v721);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v722 = (_DWORD *)operator new(4u);
    *v722 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v722);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v723 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v723);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("===");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v724);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v725 = (_DWORD *)operator new(4u);
    *v725 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v725);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v726 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v726);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!==");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v727);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v728 = (_DWORD *)operator new(4u);
    *v728 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v728);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v729 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v729);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v730);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v731 = (_DWORD *)operator new(4u);
    *v731 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v731);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v732 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v732);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v733);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v734 = (_DWORD *)operator new(4u);
    *v734 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v734);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v735 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v735);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("|");
    v1977 = 17;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v736);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v737 = (_DWORD *)operator new(4u);
    *v737 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v737);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v738 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v738);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 18 ///////////////
    v739 = std::_Rb_tree_header::_Rb_tree_header(v1669);
    v1979 = 18;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v739);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v740);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 18;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v741);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v742 = (_DWORD *)operator new(4u);
    *v742 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v742);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v743 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v743);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 18;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v744);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v745 = (_DWORD *)operator new(4u);
    *v745 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v745);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v746 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v746);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 18;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v747);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v748 = (_DWORD *)operator new(4u);
    *v748 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v748);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v749 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v749);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("||");
    v1977 = 18;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v750);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1906 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1670);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1906);
    std::string::basic_string("||");
    v751 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v751);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v752 = (_DWORD *)operator new(8u);
    *v752 = &off_55F1E4;
    v752[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v752);
    *(_DWORD *)(v1975 + 4) = 3;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1907 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1671);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1907);
    std::string::basic_string("a=pop();b=pop();c=b||a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v753);
    std::string::operator=("||");
    v754 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v754 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v755 = (_DWORD *)operator new(8u);
    *v755 = &off_55F1E4;
    v755[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v755);
    *(_DWORD *)(v1982 + 4) = 18;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v756 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v756);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1672);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1673);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1674);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 18;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v757);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v758 = (_DWORD *)operator new(4u);
    *v758 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v758);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v759 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v759);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788);
    v1977 = 18;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v760);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v761 = (_DWORD *)operator new(4u);
    *v761 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v761);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v762 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v762);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]);
    v1977 = 18;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v763);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v764 = (_DWORD *)operator new(4u);
    *v764 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v764);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v765 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v765);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 18;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v766);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v767 = (_DWORD *)operator new(4u);
    *v767 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v767);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v768 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v768);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 19 ///////////////
    v769 = std::_Rb_tree_header::_Rb_tree_header(v1675);
    v1979 = 19;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v769);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v770);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 19;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v771);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1908 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1676);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1908);
    std::string::basic_string("$DECIMAL");
    v772 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v772);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v773 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v773);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 19;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v774);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1909 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1677);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1909);
    std::string::basic_string("$STRING");
    v775 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v775);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v776 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v776);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 19;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v777);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1910 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1678);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1910);
    std::string::basic_string("(");
    v778 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v778);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v779 = (_DWORD *)operator new(8u);
    *v779 = &off_55F1E4;
    v779[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v779);
    *(_DWORD *)(v1975 + 4) = 14;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1911 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1679);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1911);
    std::string::basic_string(")");
    v780 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v780);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v781 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v781);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1680);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1681);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 19;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v782);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1912 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1682);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1912);
    std::string::basic_string("$KEYWORD");
    v783 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v783);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v784 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v784);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 19;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v785);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v786 = (_DWORD *)operator new(8u);
    *v786 = &off_55F1E4;
    v786[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v786);
    *(_DWORD *)(v1979 + 4) = 10;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v787 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v787);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 19;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v788);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v789 = (_DWORD *)operator new(8u);
    *v789 = &off_55F1E4;
    v789[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v789);
    *(_DWORD *)(v1979 + 4) = 10;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v790 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v790);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 19;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v791);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1913 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1683);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1913);
    std::string::basic_string("{");
    v792 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v792);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v793 = (_DWORD *)operator new(8u);
    *v793 = &off_55F1E4;
    v793[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v793);
    *(_DWORD *)(v1975 + 4) = 12;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1914 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1684);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1914);
    std::string::basic_string("}");
    v794 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v794);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v795 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v795);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1685);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1686);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    //////////////// root - 20 ///////////////
    v796 = std::_Rb_tree_header::_Rb_tree_header(v1687);
    v1979 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v796);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v797);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("===");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v798);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v799 = (_DWORD *)operator new(4u);
    *v799 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v799);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v800 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v800);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788);
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v801);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v802 = (_DWORD *)operator new(4u);
    *v802 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v802);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v803 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v803);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!==");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v804);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v805 = (_DWORD *)operator new(4u);
    *v805 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v805);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v806 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v806);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">=");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v807);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1915 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1688);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1915);
    std::string::basic_string(">=");
    v808 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v808);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v809 = (_DWORD *)operator new(8u);
    *v809 = &off_55F1E4;
    v809[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v809);
    *(_DWORD *)(v1975 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1916 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1689);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1916);
    std::string::basic_string("a=pop();b=pop();c=b>=a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v810);
    std::string::operator=(">=");
    v811 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v811 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v812 = (_DWORD *)operator new(8u);
    *v812 = &off_55F1E4;
    v812[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v812);
    *(_DWORD *)(v1982 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v813 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v813);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1690);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1691);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1692);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v814);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v815 = (_DWORD *)operator new(4u);
    *v815 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v815);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v816 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v816);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("==");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v817);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v818 = (_DWORD *)operator new(4u);
    *v818 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v818);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v819 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v819);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]);
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v820);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v821 = (_DWORD *)operator new(4u);
    *v821 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v821);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v822 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v822);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("||");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v823);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v824 = (_DWORD *)operator new(4u);
    *v824 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v824);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v825 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v825);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<=");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v826);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1917 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1693);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1917);
    std::string::basic_string("<=");
    v827 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v827);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v828 = (_DWORD *)operator new(8u);
    *v828 = &off_55F1E4;
    v828[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v828);
    *(_DWORD *)(v1975 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1918 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1694);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1918);
    std::string::basic_string("a=pop();b=pop();c=b<=a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v829);
    std::string::operator=("<=");
    v830 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v830 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v831 = (_DWORD *)operator new(8u);
    *v831 = &off_55F1E4;
    v831[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v831);
    *(_DWORD *)(v1982 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v832 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v832);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1695);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1696);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1697);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v833);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v834 = (_DWORD *)operator new(4u);
    *v834 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v834);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v835 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v835);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("|");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v836);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v837 = (_DWORD *)operator new(4u);
    *v837 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v837);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v838 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v838);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v839);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v840 = (_DWORD *)operator new(4u);
    *v840 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v840);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v841 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v841);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v842);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v843 = (_DWORD *)operator new(4u);
    *v843 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v843);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v844 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v844);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&&");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v845);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v846 = (_DWORD *)operator new(4u);
    *v846 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v846);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v847 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v847);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v848);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v849 = (_DWORD *)operator new(4u);
    *v849 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v849);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v850 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v850);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("^");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v851);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v852 = (_DWORD *)operator new(4u);
    *v852 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v852);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v853 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v853);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!=");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v854);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v855 = (_DWORD *)operator new(4u);
    *v855 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v855);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v856 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v856);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v857);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1919 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1698);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1919);
    std::string::basic_string("<");
    v858 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v858);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v859 = (_DWORD *)operator new(8u);
    *v859 = &off_55F1E4;
    v859[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v859);
    *(_DWORD *)(v1975 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1920 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1699);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1920);
    std::string::basic_string("a=pop();b=pop();c=b<a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v860);
    std::string::operator=("<");
    v861 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v861 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v862 = (_DWORD *)operator new(8u);
    *v862 = &off_55F1E4;
    v862[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v862);
    *(_DWORD *)(v1982 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v863 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v863);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1700);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1701);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1702);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v864);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v865 = (_DWORD *)operator new(4u);
    *v865 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v865);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v866 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v866);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">");
    v1977 = 20;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v867);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1921 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1703);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1921);
    std::string::basic_string(">");
    v868 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v868);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v869 = (_DWORD *)operator new(8u);
    *v869 = &off_55F1E4;
    v869[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v869);
    *(_DWORD *)(v1975 + 4) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1922 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1704);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1922);
    std::string::basic_string("a=pop();b=pop();c=b>a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v870);
    std::string::operator=(">");
    v871 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v871 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v872 = (_DWORD *)operator new(8u);
    *v872 = &off_55F1E4;
    v872[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v872);
    *(_DWORD *)(v1982 + 4) = 20;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v873 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v873);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1705);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1706);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1707);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    //////////////// root - 21 ///////////////
    v874 = std::_Rb_tree_header::_Rb_tree_header(v1708);
    v1979 = 21;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v874);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v875);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 21;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v876);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v877 = (_DWORD *)operator new(8u);
    *v877 = &off_55F1E4;
    v877[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v877);
    *(_DWORD *)(v1977 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v878 = (_DWORD *)operator new(8u);
    *v878 = &off_55F1E4;
    v878[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v878);
    *(_DWORD *)(v1979 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v879 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v879);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1709);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 21;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v880);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v881 = (_DWORD *)operator new(8u);
    *v881 = &off_55F1E4;
    v881[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v881);
    *(_DWORD *)(v1977 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v882 = (_DWORD *)operator new(8u);
    *v882 = &off_55F1E4;
    v882[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v882);
    *(_DWORD *)(v1979 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v883 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v883);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1710);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 21;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v884);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v885 = (_DWORD *)operator new(8u);
    *v885 = &off_55F1E4;
    v885[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v885);
    *(_DWORD *)(v1977 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v886 = (_DWORD *)operator new(8u);
    *v886 = &off_55F1E4;
    v886[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v886);
    *(_DWORD *)(v1979 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v887 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v887);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1711);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 21;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v888);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v889 = (_DWORD *)operator new(8u);
    *v889 = &off_55F1E4;
    v889[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v889);
    *(_DWORD *)(v1977 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v890 = (_DWORD *)operator new(8u);
    *v890 = &off_55F1E4;
    v890[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v890);
    *(_DWORD *)(v1979 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v891 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v891);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1712);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 21;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v892);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v893 = (_DWORD *)operator new(8u);
    *v893 = &off_55F1E4;
    v893[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v893);
    *(_DWORD *)(v1977 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v894 = (_DWORD *)operator new(8u);
    *v894 = &off_55F1E4;
    v894[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v894);
    *(_DWORD *)(v1979 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v895 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v895);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1713);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 21;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v896);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v897 = (_DWORD *)operator new(8u);
    *v897 = &off_55F1E4;
    v897[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v897);
    *(_DWORD *)(v1977 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v898 = (_DWORD *)operator new(8u);
    *v898 = &off_55F1E4;
    v898[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v898);
    *(_DWORD *)(v1979 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v899 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v899);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1714);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 21;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v900);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v901 = (_DWORD *)operator new(8u);
    *v901 = &off_55F1E4;
    v901[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v901);
    *(_DWORD *)(v1977 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v902 = (_DWORD *)operator new(8u);
    *v902 = &off_55F1E4;
    v902[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v902);
    *(_DWORD *)(v1979 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v903 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v903);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1715);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 21;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v904);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v905 = (_DWORD *)operator new(8u);
    *v905 = &off_55F1E4;
    v905[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v905);
    *(_DWORD *)(v1977 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v906 = (_DWORD *)operator new(8u);
    *v906 = &off_55F1E4;
    v906[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v906);
    *(_DWORD *)(v1979 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v907 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v907);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1716);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 21;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v908);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v909 = (_DWORD *)operator new(8u);
    *v909 = &off_55F1E4;
    v909[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v909);
    *(_DWORD *)(v1977 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v910 = (_DWORD *)operator new(8u);
    *v910 = &off_55F1E4;
    v910[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v910);
    *(_DWORD *)(v1979 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v911 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v911);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1717);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 21;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v912);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v913 = (_DWORD *)operator new(8u);
    *v913 = &off_55F1E4;
    v913[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v913);
    *(_DWORD *)(v1977 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v914 = (_DWORD *)operator new(8u);
    *v914 = &off_55F1E4;
    v914[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v914);
    *(_DWORD *)(v1979 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v915 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v915);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1718);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 22 ///////////////
    v916 = std::_Rb_tree_header::_Rb_tree_header(v1719);
    v1979 = 22;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v916);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v917);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 22;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v918);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v919 = (_DWORD *)operator new(8u);
    *v919 = &off_55F1E4;
    v919[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v919);
    *(_DWORD *)(v1977 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v920 = (_DWORD *)operator new(8u);
    *v920 = &off_55F1E4;
    v920[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v920);
    *(_DWORD *)(v1979 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v921 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v921);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1720);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 22;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v922);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v923 = (_DWORD *)operator new(8u);
    *v923 = &off_55F1E4;
    v923[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v923);
    *(_DWORD *)(v1977 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v924 = (_DWORD *)operator new(8u);
    *v924 = &off_55F1E4;
    v924[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v924);
    *(_DWORD *)(v1979 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v925 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v925);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1721);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 22;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v926);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v927 = (_DWORD *)operator new(8u);
    *v927 = &off_55F1E4;
    v927[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v927);
    *(_DWORD *)(v1977 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v928 = (_DWORD *)operator new(8u);
    *v928 = &off_55F1E4;
    v928[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v928);
    *(_DWORD *)(v1979 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v929 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v929);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1722);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 22;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v930);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v931 = (_DWORD *)operator new(8u);
    *v931 = &off_55F1E4;
    v931[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v931);
    *(_DWORD *)(v1977 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v932 = (_DWORD *)operator new(8u);
    *v932 = &off_55F1E4;
    v932[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v932);
    *(_DWORD *)(v1979 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v933 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v933);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1723);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 22;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v934);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v935 = (_DWORD *)operator new(8u);
    *v935 = &off_55F1E4;
    v935[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v935);
    *(_DWORD *)(v1977 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v936 = (_DWORD *)operator new(8u);
    *v936 = &off_55F1E4;
    v936[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v936);
    *(_DWORD *)(v1979 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v937 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v937);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1724);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 22;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v938);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v939 = (_DWORD *)operator new(8u);
    *v939 = &off_55F1E4;
    v939[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v939);
    *(_DWORD *)(v1977 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v940 = (_DWORD *)operator new(8u);
    *v940 = &off_55F1E4;
    v940[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v940);
    *(_DWORD *)(v1979 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v941 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v941);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1725);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 22;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v942);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v943 = (_DWORD *)operator new(8u);
    *v943 = &off_55F1E4;
    v943[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v943);
    *(_DWORD *)(v1977 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v944 = (_DWORD *)operator new(8u);
    *v944 = &off_55F1E4;
    v944[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v944);
    *(_DWORD *)(v1979 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v945 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v945);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1726);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 22;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v946);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v947 = (_DWORD *)operator new(8u);
    *v947 = &off_55F1E4;
    v947[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v947);
    *(_DWORD *)(v1977 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v948 = (_DWORD *)operator new(8u);
    *v948 = &off_55F1E4;
    v948[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v948);
    *(_DWORD *)(v1979 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v949 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v949);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1727);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 22;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v950);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v951 = (_DWORD *)operator new(8u);
    *v951 = &off_55F1E4;
    v951[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v951);
    *(_DWORD *)(v1977 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v952 = (_DWORD *)operator new(8u);
    *v952 = &off_55F1E4;
    v952[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v952);
    *(_DWORD *)(v1979 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v953 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v953);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1728);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 22;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v954);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v955 = (_DWORD *)operator new(8u);
    *v955 = &off_55F1E4;
    v955[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v955);
    *(_DWORD *)(v1977 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v956 = (_DWORD *)operator new(8u);
    *v956 = &off_55F1E4;
    v956[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v956);
    *(_DWORD *)(v1979 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v957 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v957);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1729);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 23 ///////////////
    v958 = std::_Rb_tree_header::_Rb_tree_header(v1730);
    v1979 = 23;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v958);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v959);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 23;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v960);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v961 = (_DWORD *)operator new(8u);
    *v961 = &off_55F1E4;
    v961[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v961);
    *(_DWORD *)(v1979 + 4) = 19;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v962 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v962);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 23;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v963);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v964 = (_DWORD *)operator new(8u);
    *v964 = &off_55F1E4;
    v964[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v964);
    *(_DWORD *)(v1979 + 4) = 19;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v965 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v965);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 23;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v966);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v967 = (_DWORD *)operator new(8u);
    *v967 = &off_55F1E4;
    v967[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v967);
    *(_DWORD *)(v1979 + 4) = 19;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v968 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v968);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 23;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v969);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);

    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1923 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1731);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1923);
    std::string::basic_string("-");
    v970 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v970);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v971 = (_DWORD *)operator new(8u);
    *v971 = &off_55F1E4;
    v971[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v971);
    *(_DWORD *)(v1975 + 4) = 23;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1924 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1732);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1924);
    std::string::basic_string("a=pop();c=-a;push(c)");
    v972 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v972);
    std::string::operator=("-");
    v973 = v1977;
    *(_DWORD *)(v1977 + 28) = 1;
    *(_DWORD *)(v973 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v974 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v974);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1733);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1734);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 23;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v975);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v976 = (_DWORD *)operator new(8u);
    *v976 = &off_55F1E4;
    v976[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v976);
    *(_DWORD *)(v1979 + 4) = 19;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v977 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v977);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 23;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v978);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v979 = (_DWORD *)operator new(8u);
    *v979 = &off_55F1E4;
    v979[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v979);
    *(_DWORD *)(v1979 + 4) = 19;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v980 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v980);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 23;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v981);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v982 = (_DWORD *)operator new(8u);
    *v982 = &off_55F1E4;
    v982[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v982);
    *(_DWORD *)(v1979 + 4) = 19;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v983 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v983);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 23;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v984);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v985 = (_DWORD *)operator new(8u);
    *v985 = &off_55F1E4;
    v985[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v985);
    *(_DWORD *)(v1979 + 4) = 19;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v986 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v986);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 24 ///////////////
    v987 = std::_Rb_tree_header::_Rb_tree_header(v1735);
    v1979 = 24;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v987);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v988);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 24;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v989);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1925 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1736);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1925);
    std::string::basic_string("!");
    v990 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v990);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v991 = (_DWORD *)operator new(8u);
    *v991 = &off_55F1E4;
    v991[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v991);
    *(_DWORD *)(v1975 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1926 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1737);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1926);
    std::string::basic_string("a=pop();c=!a;push(c)");
    v992 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v992);
    std::string::operator=("!");
    v993 = v1977;
    *(_DWORD *)(v1977 + 28) = 1;
    *(_DWORD *)(v993 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v994 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v994);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1738);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1739);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 24;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v995);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v996 = (_DWORD *)operator new(8u);
    *v996 = &off_55F1E4;
    v996[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v996);
    *(_DWORD *)(v1979 + 4) = 23;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v997 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v997);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 24;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v998);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v999 = (_DWORD *)operator new(8u);
    *v999 = &off_55F1E4;
    v999[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v999);
    *(_DWORD *)(v1979 + 4) = 23;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1000 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1000);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 24;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1001);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1002 = (_DWORD *)operator new(8u);
    *v1002 = &off_55F1E4;
    v1002[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1002);
    *(_DWORD *)(v1979 + 4) = 23;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1003 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1003);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 24;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1004);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1005 = (_DWORD *)operator new(8u);
    *v1005 = &off_55F1E4;
    v1005[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1005);
    *(_DWORD *)(v1979 + 4) = 23;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1006 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1006);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 24;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1007);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1008 = (_DWORD *)operator new(8u);
    *v1008 = &off_55F1E4;
    v1008[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1008);
    *(_DWORD *)(v1979 + 4) = 23;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1009 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1009);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 24;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1010);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1011 = (_DWORD *)operator new(8u);
    *v1011 = &off_55F1E4;
    v1011[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1011);
    *(_DWORD *)(v1979 + 4) = 23;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1012 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1012);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 24;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1013);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1014 = (_DWORD *)operator new(8u);
    *v1014 = &off_55F1E4;
    v1014[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1014);
    *(_DWORD *)(v1979 + 4) = 23;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1015 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1015);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 24;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1016);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1017 = (_DWORD *)operator new(8u);
    *v1017 = &off_55F1E4;
    v1017[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1017);
    *(_DWORD *)(v1979 + 4) = 23;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1018 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1018);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 24;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1019);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1927 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1740);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1927);
    std::string::basic_string("~");
    v1020 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1020);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1021 = (_DWORD *)operator new(8u);
    *v1021 = &off_55F1E4;
    v1021[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1021);
    *(_DWORD *)(v1975 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1928 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1741);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1928);
    std::string::basic_string("a=pop();c=~a;push(c)");
    v1022 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1022);
    std::string::operator=("~");
    v1023 = v1977;
    *(_DWORD *)(v1977 + 28) = 1;
    *(_DWORD *)(v1023 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1024 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1024);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1742);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1743);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    //////////////// root - 25 ///////////////
    v1025 = std::_Rb_tree_header::_Rb_tree_header(v1744);
    v1979 = 25;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v1025);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v1026);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 25;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1027);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1028 = (_DWORD *)operator new(8u);
    *v1028 = &off_55F1E4;
    v1028[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1028);
    *(_DWORD *)(v1977 + 4) = 7;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1029 = (_DWORD *)operator new(8u);
    *v1029 = &off_55F1E4;
    v1029[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1029);
    *(_DWORD *)(v1979 + 4) = 32;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1030 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1030);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1745);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 25;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1031);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1032 = (_DWORD *)operator new(8u);
    *v1032 = &off_55F1E4;
    v1032[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1032);
    *(_DWORD *)(v1977 + 4) = 7;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1033 = (_DWORD *)operator new(8u);
    *v1033 = &off_55F1E4;
    v1033[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1033);
    *(_DWORD *)(v1979 + 4) = 32;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1034 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1034);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1746);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 25;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1035);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1036 = (_DWORD *)operator new(8u);
    *v1036 = &off_55F1E4;
    v1036[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1036);
    *(_DWORD *)(v1977 + 4) = 7;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1037 = (_DWORD *)operator new(8u);
    *v1037 = &off_55F1E4;
    v1037[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1037);
    *(_DWORD *)(v1979 + 4) = 32;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1038 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1038);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1747);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 25;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1039);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1040 = (_DWORD *)operator new(8u);
    *v1040 = &off_55F1E4;
    v1040[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1040);
    *(_DWORD *)(v1977 + 4) = 7;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1041 = (_DWORD *)operator new(8u);
    *v1041 = &off_55F1E4;
    v1041[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1041);
    *(_DWORD *)(v1979 + 4) = 32;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1042 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1042);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1748);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 25;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1043);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1044 = (_DWORD *)operator new(8u);
    *v1044 = &off_55F1E4;
    v1044[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1044);
    *(_DWORD *)(v1977 + 4) = 7;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1045 = (_DWORD *)operator new(8u);
    *v1045 = &off_55F1E4;
    v1045[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1045);
    *(_DWORD *)(v1979 + 4) = 32;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1046 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1046);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1749);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 25;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1047);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1048 = (_DWORD *)operator new(8u);
    *v1048 = &off_55F1E4;
    v1048[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1048);
    *(_DWORD *)(v1977 + 4) = 7;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1049 = (_DWORD *)operator new(8u);
    *v1049 = &off_55F1E4;
    v1049[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1049);
    *(_DWORD *)(v1979 + 4) = 32;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1050 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1050);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1750);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 25;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1051);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1052 = (_DWORD *)operator new(8u);
    *v1052 = &off_55F1E4;
    v1052[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1052);
    *(_DWORD *)(v1977 + 4) = 7;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1053 = (_DWORD *)operator new(8u);
    *v1053 = &off_55F1E4;
    v1053[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1053);
    *(_DWORD *)(v1979 + 4) = 32;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1054 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1054);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1751);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 25;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1055);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1056 = (_DWORD *)operator new(8u);
    *v1056 = &off_55F1E4;
    v1056[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1056);
    *(_DWORD *)(v1977 + 4) = 7;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1057 = (_DWORD *)operator new(8u);
    *v1057 = &off_55F1E4;
    v1057[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1057);
    *(_DWORD *)(v1979 + 4) = 32;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1058 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1058);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1752);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 25;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1059);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1060 = (_DWORD *)operator new(8u);
    *v1060 = &off_55F1E4;
    v1060[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1060);
    *(_DWORD *)(v1977 + 4) = 7;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1061 = (_DWORD *)operator new(8u);
    *v1061 = &off_55F1E4;
    v1061[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1061);
    *(_DWORD *)(v1979 + 4) = 32;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1062 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1062);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1753);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 25;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1063);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1064 = (_DWORD *)operator new(8u);
    *v1064 = &off_55F1E4;
    v1064[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1064);
    *(_DWORD *)(v1977 + 4) = 7;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1065 = (_DWORD *)operator new(8u);
    *v1065 = &off_55F1E4;
    v1065[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1065);
    *(_DWORD *)(v1979 + 4) = 32;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1066 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1066);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1754);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 26 ///////////////
    v1067 = std::_Rb_tree_header::_Rb_tree_header(v1755);
    v1979 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v1067);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v1068);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">=");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1069);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1070 = (_DWORD *)operator new(4u);
    *v1070 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1070);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1071 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1071);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">>");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1072);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1073 = (_DWORD *)operator new(4u);
    *v1073 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1073);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1074 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1074);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("||");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1075);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1076 = (_DWORD *)operator new(4u);
    *v1076 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1076);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1077 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1077);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<=");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1078);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1079 = (_DWORD *)operator new(4u);
    *v1079 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1079);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1080 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1080);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!=");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1081);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1082 = (_DWORD *)operator new(4u);
    *v1082 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1082);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1083 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1083);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("%");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1084);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1929 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1756);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1929);
    std::string::basic_string("%");
    v1085 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1085);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1086 = (_DWORD *)operator new(8u);
    *v1086 = &off_55F1E4;
    v1086[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1086);
    *(_DWORD *)(v1975 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1930 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1757);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1930);
    std::string::basic_string("a=pop();b=pop();c=b%a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1087);
    std::string::operator=("%");
    v1088 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1088 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1089 = (_DWORD *)operator new(8u);
    *v1089 = &off_55F1E4;
    v1089[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1089);
    *(_DWORD *)(v1982 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1090 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1090);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1758);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1759);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1760);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1091);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1092 = (_DWORD *)operator new(4u);
    *v1092 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1092);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1093 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1093);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1094);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1095 = (_DWORD *)operator new(4u);
    *v1095 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1095);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1096 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1096);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1097);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1098 = (_DWORD *)operator new(4u);
    *v1098 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1098);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1099 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1099);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)asc_554938);
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1100);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1101 = (_DWORD *)operator new(4u);
    *v1101 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1101);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1102 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1102);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&asc_554938[2]);
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1103);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1931 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1761);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1931);
    std::string::basic_string((char *)&asc_554938[2]);
    v1104 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1104);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1105 = (_DWORD *)operator new(8u);
    *v1105 = &off_55F1E4;
    v1105[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1105);
    *(_DWORD *)(v1975 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1932 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1762);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1932);
    std::string::basic_string("a=pop();b=pop();c=b*a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1106);
    std::string::operator=((char *)&asc_554938[2]);
    v1107 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1107 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1108 = (_DWORD *)operator new(8u);
    *v1108 = &off_55F1E4;
    v1108[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1108);
    *(_DWORD *)(v1982 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1109 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1109);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1763);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1764);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1765);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1110);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1111 = (_DWORD *)operator new(4u);
    *v1111 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1111);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1112 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1112);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1113);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1114 = (_DWORD *)operator new(4u);
    *v1114 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1114);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1115 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1115);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&asc_554938[4]);
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1116);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1933 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1766);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1933);
    std::string::basic_string((char *)&asc_554938[4]);
    v1117 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1117);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1118 = (_DWORD *)operator new(8u);
    *v1118 = &off_55F1E4;
    v1118[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1118);
    *(_DWORD *)(v1975 + 4) = 24;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1934 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1767);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1934);
    std::string::basic_string("a=pop();b=pop();c=b/a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1119);
    std::string::operator=((char *)&asc_554938[4]);
    v1120 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1120 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1121 = (_DWORD *)operator new(8u);
    *v1121 = &off_55F1E4;
    v1121[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1121);
    *(_DWORD *)(v1982 + 4) = 26;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1122 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1122);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1768);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1769);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1770);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788);
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1123);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1124 = (_DWORD *)operator new(4u);
    *v1124 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1124);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1125 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1125);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<<");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1126);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1127 = (_DWORD *)operator new(4u);
    *v1127 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1127);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1128 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1128);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1129);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1130 = (_DWORD *)operator new(4u);
    *v1130 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1130);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1131 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1131);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1132);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1133 = (_DWORD *)operator new(4u);
    *v1133 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1133);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1134 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1134);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("==");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1135);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1136 = (_DWORD *)operator new(4u);
    *v1136 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1136);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1137 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1137);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&&");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1138);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1139 = (_DWORD *)operator new(4u);
    *v1139 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1139);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1140 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1140);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]);
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1141);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1142 = (_DWORD *)operator new(4u);
    *v1142 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1142);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1143 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1143);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("^");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1144);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1145 = (_DWORD *)operator new(4u);
    *v1145 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1145);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1146 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1146);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("===");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1147);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1148 = (_DWORD *)operator new(4u);
    *v1148 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1148);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1149 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1149);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!==");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1150);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1151 = (_DWORD *)operator new(4u);
    *v1151 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1151);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1152 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1152);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1153);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1154 = (_DWORD *)operator new(4u);
    *v1154 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1154);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1155 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1155);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1156);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1157 = (_DWORD *)operator new(4u);
    *v1157 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1157);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1158 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1158);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("|");
    v1977 = 26;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1159);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1160 = (_DWORD *)operator new(4u);
    *v1160 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1160);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1161 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1161);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 27 ///////////////
    v1162 = std::_Rb_tree_header::_Rb_tree_header(v1771);
    v1979 = 27;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v1162);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v1163);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 27;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1164);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1165 = (_DWORD *)operator new(4u);
    *v1165 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1165);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1166 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1166);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 27;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1167);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1935 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1772);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1935);
    std::string::basic_string(",");
    v1168 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1168);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1169 = (_DWORD *)operator new(8u);
    *v1169 = &off_55F1E4;
    v1169[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1169);
    *(_DWORD *)(v1975 + 4) = 13;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1936 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1773);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1936);
    std::string::basic_string("a=pop();b=top();c=b.a;");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1170);
    std::string::operator=("OP_DICT_CONCAT");
    v1171 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1171 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1172 = (_DWORD *)operator new(8u);
    *v1172 = &off_55F1E4;
    v1172[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1172);
    *(_DWORD *)(v1982 + 4) = 27;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1173 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1173);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1774);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1775);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1776);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 27;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1174);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1175 = (_DWORD *)operator new(4u);
    *v1175 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1175);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1176 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1176);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 28 ///////////////
    v1177 = std::_Rb_tree_header::_Rb_tree_header(v1777);
    v1979 = 28;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v1177);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v1178);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788);
    v1977 = 28;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1179);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1937 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1778);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1937);
    std::string::basic_string((char *)off_554788);
    v1180 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1180);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1181 = (_DWORD *)operator new(8u);
    *v1181 = &off_55F1E4;
    v1181[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1181);
    *(_DWORD *)(v1975 + 4) = 14;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1938 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1779);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1938);
    std::string::basic_string("a=pop(),key=pop(),c={key:a};push(c)");
    v1182 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1182);
    std::string::operator=("OP_MAKE_DICT");
    v1183 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1183 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1184 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1184);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1780);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1781);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 28;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1185);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1186 = (_DWORD *)operator new(4u);
    *v1186 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1186);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1939 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1782);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1939);
    std::string::basic_string("a=pop();c={a:a}");
    v1187 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1187);
    std::string::operator=("OP_MAKE_DICT");
    v1188 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1188 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1189 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1189);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1783);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 28;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1190);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1191 = (_DWORD *)operator new(4u);
    *v1191 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1191);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1940 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1784);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1940);
    std::string::basic_string("a=pop();c={a:a}");
    v1192 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1192);
    std::string::operator=("OP_MAKE_DICT");
    v1193 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1193 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1194 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1194);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1785);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 28;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1195);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1196 = (_DWORD *)operator new(4u);
    *v1196 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1196);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1941 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1786);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1941);
    std::string::basic_string("a=pop();c={a:a}");
    v1197 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1197);
    std::string::operator=("OP_MAKE_DICT");
    v1198 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1198 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1199 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1199);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1787);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    //////////////// root - 29 ///////////////
    v1200 = std::_Rb_tree_header::_Rb_tree_header(v1788);
    v1979 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v1200);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v1201);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">=");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1202);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1203 = (_DWORD *)operator new(4u);
    *v1203 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1203);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1204 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1204);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">>");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1205);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1206 = (_DWORD *)operator new(4u);
    *v1206 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1206);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1207 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1207);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("||");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1208);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1209 = (_DWORD *)operator new(4u);
    *v1209 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1209);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1210 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1210);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<=");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1211);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1212 = (_DWORD *)operator new(4u);
    *v1212 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1212);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1213 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1213);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!=");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1214);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1215 = (_DWORD *)operator new(4u);
    *v1215 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1215);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1216 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1216);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1217);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1218 = (_DWORD *)operator new(4u);
    *v1218 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1218);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1219 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1219);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1220);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1221 = (_DWORD *)operator new(4u);
    *v1221 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1221);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1222 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1222);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1223);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1224 = (_DWORD *)operator new(4u);
    *v1224 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1224);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1225 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1225);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)asc_554938);
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1226);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1942 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1789);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1942);
    std::string::basic_string((char *)asc_554938);
    v1227 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1227);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1228 = (_DWORD *)operator new(8u);
    *v1228 = &off_55F1E4;
    v1228[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1228);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1943 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1790);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1943);
    std::string::basic_string("a=pop();b=pop();c=b+a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1229);
    std::string::operator=((char *)asc_554938);
    v1230 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1230 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1231 = (_DWORD *)operator new(8u);
    *v1231 = &off_55F1E4;
    v1231[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1231);
    *(_DWORD *)(v1982 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1232 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1232);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1791);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1792);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1793);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1233);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1944 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1794);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1944);
    std::string::basic_string("-");
    v1234 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1234);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1235 = (_DWORD *)operator new(8u);
    *v1235 = &off_55F1E4;
    v1235[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1235);
    *(_DWORD *)(v1975 + 4) = 21;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1945 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1795);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1945);
    std::string::basic_string("a=pop();b=pop();c=b-a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1236);
    std::string::operator=("-");
    v1237 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1237 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1238 = (_DWORD *)operator new(8u);
    *v1238 = &off_55F1E4;
    v1238[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1238);
    *(_DWORD *)(v1982 + 4) = 29;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1239 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1239);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1796);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1797);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1798);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1240);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1241 = (_DWORD *)operator new(4u);
    *v1241 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1241);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1242 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1242);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788);
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1243);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1244 = (_DWORD *)operator new(4u);
    *v1244 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1244);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1245 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1245);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<<");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1246);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1247 = (_DWORD *)operator new(4u);
    *v1247 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1247);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1248 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1248);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1249);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1250 = (_DWORD *)operator new(4u);
    *v1250 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1250);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1251 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1251);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(">");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1252);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1253 = (_DWORD *)operator new(4u);
    *v1253 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1253);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1254 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1254);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("==");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1255);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1256 = (_DWORD *)operator new(4u);
    *v1256 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1256);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1257 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1257);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&&");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1258);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1259 = (_DWORD *)operator new(4u);
    *v1259 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1259);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1260 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1260);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]);
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1261);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1262 = (_DWORD *)operator new(4u);
    *v1262 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1262);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1263 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1263);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("^");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1264);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1265 = (_DWORD *)operator new(4u);
    *v1265 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1265);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1266 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1266);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("===");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1267);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1268 = (_DWORD *)operator new(4u);
    *v1268 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1268);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1269 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1269);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!==");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1270);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1271 = (_DWORD *)operator new(4u);
    *v1271 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1271);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1272 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1272);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("<");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1273);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1274 = (_DWORD *)operator new(4u);
    *v1274 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1274);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1275 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1275);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1276);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1277 = (_DWORD *)operator new(4u);
    *v1277 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1277);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1278 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1278);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("|");
    v1977 = 29;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1279);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1280 = (_DWORD *)operator new(4u);
    *v1280 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1280);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1281 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1281);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 30 ///////////////
    v1282 = std::_Rb_tree_header::_Rb_tree_header(v1799);
    v1979 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v1282);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v1283);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("!");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1284);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1285 = (_DWORD *)operator new(8u);
    *v1285 = &off_55F1E4;
    v1285[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1285);
    *(_DWORD *)(v1973 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1286 = (_DWORD *)operator new(8u);
    *v1286 = &off_55F1E4;
    v1286[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1286);
    *(_DWORD *)(v1975 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1946 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1800);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1946);
    std::string::basic_string("a=pop();c=make_list(a);push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1287);
    std::string::operator=("OP_LIST_CONCAT");
    v1288 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1288 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1289 = (_DWORD *)operator new(8u);
    *v1289 = &off_55F1E4;
    v1289[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1289);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1290 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1290);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1801);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1802);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1803);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$DECIMAL");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1291);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1292 = (_DWORD *)operator new(8u);
    *v1292 = &off_55F1E4;
    v1292[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1292);
    *(_DWORD *)(v1973 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1293 = (_DWORD *)operator new(8u);
    *v1293 = &off_55F1E4;
    v1293[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1293);
    *(_DWORD *)(v1975 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1947 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1804);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1947);
    std::string::basic_string("a=pop();c=make_list(a);push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1294);
    std::string::operator=("OP_LIST_CONCAT");
    v1295 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1295 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1296 = (_DWORD *)operator new(8u);
    *v1296 = &off_55F1E4;
    v1296[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1296);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1297 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1297);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1805);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1806);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1807);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1298);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1299 = (_DWORD *)operator new(4u);
    *v1299 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1299);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1948 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1808);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1948);
    std::string::basic_string("c=make_list;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1300);
    std::string::operator=("OP_LIST_CONCAT");
    v1301 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1301 + 32) = 0;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1302 = (_DWORD *)operator new(8u);
    *v1302 = &off_55F1E4;
    v1302[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1302);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1303 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1303);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1809);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1810);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$STRING");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1304);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1305 = (_DWORD *)operator new(8u);
    *v1305 = &off_55F1E4;
    v1305[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1305);
    *(_DWORD *)(v1973 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1306 = (_DWORD *)operator new(8u);
    *v1306 = &off_55F1E4;
    v1306[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1306);
    *(_DWORD *)(v1975 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1949 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1811);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1949);
    std::string::basic_string("a=pop();c=make_list(a);push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1307);
    std::string::operator=("OP_LIST_CONCAT");
    v1308 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1308 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1309 = (_DWORD *)operator new(8u);
    *v1309 = &off_55F1E4;
    v1309[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1309);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1310 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1310);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1812);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1813);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1814);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("(");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1311);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1312 = (_DWORD *)operator new(8u);
    *v1312 = &off_55F1E4;
    v1312[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1312);
    *(_DWORD *)(v1973 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1313 = (_DWORD *)operator new(8u);
    *v1313 = &off_55F1E4;
    v1313[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1313);
    *(_DWORD *)(v1975 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1950 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1815);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1950);
    std::string::basic_string("a=pop();c=make_list(a);push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1314);
    std::string::operator=("OP_LIST_CONCAT");
    v1315 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1315 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1316 = (_DWORD *)operator new(8u);
    *v1316 = &off_55F1E4;
    v1316[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1316);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1317 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1317);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1816);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1817);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1818);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("-");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1318);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1319 = (_DWORD *)operator new(8u);
    *v1319 = &off_55F1E4;
    v1319[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1319);
    *(_DWORD *)(v1973 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1320 = (_DWORD *)operator new(8u);
    *v1320 = &off_55F1E4;
    v1320[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1320);
    *(_DWORD *)(v1975 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1951 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1819);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1951);
    std::string::basic_string("a=pop();c=make_list(a);push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1321);
    std::string::operator=("OP_LIST_CONCAT");
    v1322 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1322 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1323 = (_DWORD *)operator new(8u);
    *v1323 = &off_55F1E4;
    v1323[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1323);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1324 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1324);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1820);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1821);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1822);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1325);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1326 = (_DWORD *)operator new(4u);
    *v1326 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1326);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1952 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1823);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1952);
    std::string::basic_string("c=make_list;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1327);
    std::string::operator=("OP_LIST_CONCAT");
    v1328 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1328 + 32) = 0;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1329 = (_DWORD *)operator new(8u);
    *v1329 = &off_55F1E4;
    v1329[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1329);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1330 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1330);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1824);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1825);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$KEYWORD");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1331);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1332 = (_DWORD *)operator new(8u);
    *v1332 = &off_55F1E4;
    v1332[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1332);
    *(_DWORD *)(v1973 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1333 = (_DWORD *)operator new(8u);
    *v1333 = &off_55F1E4;
    v1333[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1333);
    *(_DWORD *)(v1975 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1953 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1826);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1953);
    std::string::basic_string("a=pop();c=make_list(a);push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1334);
    std::string::operator=("OP_LIST_CONCAT");
    v1335 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1335 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1336 = (_DWORD *)operator new(8u);
    *v1336 = &off_55F1E4;
    v1336[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1336);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1337 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1337);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1827);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1828);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1829);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("[");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1338);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1339 = (_DWORD *)operator new(8u);
    *v1339 = &off_55F1E4;
    v1339[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1339);
    *(_DWORD *)(v1973 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1340 = (_DWORD *)operator new(8u);
    *v1340 = &off_55F1E4;
    v1340[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1340);
    *(_DWORD *)(v1975 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1954 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1830);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1954);
    std::string::basic_string("a=pop();c=make_list(a);push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1341);
    std::string::operator=("OP_LIST_CONCAT");
    v1342 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1342 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1343 = (_DWORD *)operator new(8u);
    *v1343 = &off_55F1E4;
    v1343[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1343);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1344 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1344);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1831);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1832);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1833);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$VAR");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1345);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1346 = (_DWORD *)operator new(8u);
    *v1346 = &off_55F1E4;
    v1346[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1346);
    *(_DWORD *)(v1973 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1347 = (_DWORD *)operator new(8u);
    *v1347 = &off_55F1E4;
    v1347[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1347);
    *(_DWORD *)(v1975 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1955 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1834);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1955);
    std::string::basic_string("a=pop();c=make_list(a);push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1348);
    std::string::operator=("OP_LIST_CONCAT");
    v1349 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1349 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1350 = (_DWORD *)operator new(8u);
    *v1350 = &off_55F1E4;
    v1350[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1350);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1351 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1351);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1835);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1836);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1837);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]);
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1352);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1353 = (_DWORD *)operator new(4u);
    *v1353 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1353);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1956 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1838);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1956);
    std::string::basic_string("c=make_list;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1354);
    std::string::operator=("OP_LIST_CONCAT");
    v1355 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1355 + 32) = 0;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1356 = (_DWORD *)operator new(8u);
    *v1356 = &off_55F1E4;
    v1356[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1356);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1357 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1357);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1839);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1840);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("{");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1358);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1359 = (_DWORD *)operator new(8u);
    *v1359 = &off_55F1E4;
    v1359[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1359);
    *(_DWORD *)(v1973 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1360 = (_DWORD *)operator new(8u);
    *v1360 = &off_55F1E4;
    v1360[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1360);
    *(_DWORD *)(v1975 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1957 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1841);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1957);
    std::string::basic_string("a=pop();c=make_list(a);push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1361);
    std::string::operator=("OP_LIST_CONCAT");
    v1362 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1362 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1363 = (_DWORD *)operator new(8u);
    *v1363 = &off_55F1E4;
    v1363[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1363);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1364 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1364);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1842);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1843);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1844);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("~");
    v1977 = 30;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1365);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1366 = (_DWORD *)operator new(8u);
    *v1366 = &off_55F1E4;
    v1366[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1366);
    *(_DWORD *)(v1973 + 4) = 4;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1367 = (_DWORD *)operator new(8u);
    *v1367 = &off_55F1E4;
    v1367[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1367);
    *(_DWORD *)(v1975 + 4) = 9;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1958 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1845);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1958);
    std::string::basic_string("a=pop();c=make_list(a);push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1368);
    std::string::operator=("OP_LIST_CONCAT");
    v1369 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1369 + 32) = 1;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1370 = (_DWORD *)operator new(8u);
    *v1370 = &off_55F1E4;
    v1370[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1370);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1371 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1371);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1846);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1847);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1848);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    //////////////// root - 31 ///////////////
    v1372 = std::_Rb_tree_header::_Rb_tree_header(v1849);
    v1979 = 31;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v1372);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v1373);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 31;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1374);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1375 = (_DWORD *)operator new(4u);
    *v1375 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1375);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1376 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1376);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]);
    v1977 = 31;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1377);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1378 = (_DWORD *)operator new(4u);
    *v1378 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1378);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1379 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1379);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 31;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1380);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1959 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1850);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1959);
    std::string::basic_string(",");
    v1381 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1381);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1382 = (_DWORD *)operator new(8u);
    *v1382 = &off_55F1E4;
    v1382[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1382);
    *(_DWORD *)(v1975 + 4) = 14;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1960 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1851);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1960);
    std::string::basic_string("a=pop();b=pop();c=b.a");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1383);
    std::string::operator=("OP_LIST_CONCAT");
    v1384 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1384 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1385 = (_DWORD *)operator new(8u);
    *v1385 = &off_55F1E4;
    v1385[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1385);
    *(_DWORD *)(v1982 + 4) = 31;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1386 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1386);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1852);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1853);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1854);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 31;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1387);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1388 = (_DWORD *)operator new(4u);
    *v1388 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1388);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1389 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1389);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 32 ///////////////
    v1390 = std::_Rb_tree_header::_Rb_tree_header(v1855);
    v1979 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v1390);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v1391);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1392);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1393 = (_DWORD *)operator new(4u);
    *v1393 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1393);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1394 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1394);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&");
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1395);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1961 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1856);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1961);
    std::string::basic_string("&");
    v1396 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1396);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1397 = (_DWORD *)operator new(8u);
    *v1397 = &off_55F1E4;
    v1397[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1397);
    *(_DWORD *)(v1975 + 4) = 7;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1962 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1857);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1962);
    std::string::basic_string("a=pop();b=pop();c=b&a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1398);
    std::string::operator=("&");
    v1399 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1399 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1400 = (_DWORD *)operator new(8u);
    *v1400 = &off_55F1E4;
    v1400[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1400);
    *(_DWORD *)(v1982 + 4) = 32;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1401 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1401);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1858);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1859);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1860);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1402);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1403 = (_DWORD *)operator new(4u);
    *v1403 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1403);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1404 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1404);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1405);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1406 = (_DWORD *)operator new(4u);
    *v1406 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1406);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1407 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1407);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("||");
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1408);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1409 = (_DWORD *)operator new(4u);
    *v1409 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1409);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1410 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1410);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1411);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1412 = (_DWORD *)operator new(4u);
    *v1412 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1412);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1413 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1413);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&&");
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1414);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1415 = (_DWORD *)operator new(4u);
    *v1415 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1415);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1416 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1416);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788);
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1417);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1418 = (_DWORD *)operator new(4u);
    *v1418 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1418);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1419 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1419);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]);
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1420);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1421 = (_DWORD *)operator new(4u);
    *v1421 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1421);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1422 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1422);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("|");
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1423);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1424 = (_DWORD *)operator new(4u);
    *v1424 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1424);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1425 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1425);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1426);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1427 = (_DWORD *)operator new(4u);
    *v1427 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1427);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1428 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1428);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("^");
    v1977 = 32;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1429);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1430 = (_DWORD *)operator new(4u);
    *v1430 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1430);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1431 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1431);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    //////////////// root - 33 ///////////////
    v1432 = std::_Rb_tree_header::_Rb_tree_header(v1861);
    v1979 = 33;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](v1432);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::operator=(&v1982);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>,std::_Select1st<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<WXML::EXPRLib::BNF>>>>::~_Rb_tree(
      &v1982,
      v1433);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("$");
    v1977 = 33;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1434);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1435 = (_DWORD *)operator new(4u);
    *v1435 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1435);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1436 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1436);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(")");
    v1977 = 33;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1437);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1438 = (_DWORD *)operator new(4u);
    *v1438 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1438);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1439 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1439);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)&off_554788[2]);
    v1977 = 33;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1440);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1441 = (_DWORD *)operator new(4u);
    *v1441 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1441);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1442 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1442);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("||");
    v1977 = 33;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1443);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1444 = (_DWORD *)operator new(4u);
    *v1444 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1444);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1445 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1445);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string(",");
    v1977 = 33;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1446);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1447 = (_DWORD *)operator new(4u);
    *v1447 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1447);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1448 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1448);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("&&");
    v1977 = 33;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1449);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1450 = (_DWORD *)operator new(4u);
    *v1450 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1450);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1451 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1451);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string((char *)off_554788);
    v1977 = 33;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1452);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1453 = (_DWORD *)operator new(4u);
    *v1453 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1453);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1454 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1454);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("}");
    v1977 = 33;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1455);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1456 = (_DWORD *)operator new(4u);
    *v1456 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1456);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1457 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1457);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("|");
    v1977 = 33;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1458);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    v1963 = operator new(0x38u);
    // Init_55F220_0
    WXML::EXPRLib::Terminal::Terminal(v1862);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1963);
    std::string::basic_string("|");
    v1459 = std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1459);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1973);
    v1460 = (_DWORD *)operator new(8u);
    *v1460 = &off_55F1E4;
    v1460[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1460);
    *(_DWORD *)(v1975 + 4) = 5;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1975);
    v1964 = operator new(0x3Cu);
    // Init_55F20C
    WXML::EXPRLib::Terminal::Terminal(v1863);
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1964);
    std::string::basic_string("a=pop();b=pop();c=b|a;push(c)");
    std::string::_M_assign(&v1982);
    std::string::_M_dispose(&v1982, v1461);
    std::string::operator=("|");
    v1462 = v1977;
    *(_DWORD *)(v1977 + 28) = 0;
    *(_DWORD *)(v1462 + 32) = 2;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1977);
    v1463 = (_DWORD *)operator new(8u);
    *v1463 = &off_55F1E4;
    v1463[1] = 0;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1463);
    *(_DWORD *)(v1982 + 4) = 33;
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1982);
    v1464 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1979);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1983, v1464);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1978, v1864);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1976, v1865);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v1974, v1866);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1979);
    v1979 = 0;
    v1980 = 0;
    v1981 = 0;
    std::string::basic_string("?");
    v1977 = 33;
    std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>>::operator[](&v1977);
    std::map<std::string,std::vector<WXML::EXPRLib::BNF>>::operator[](&v1982);
    std::vector<WXML::EXPRLib::BNF>::_M_move_assign(&v1979);
    std::string::_M_dispose(&v1982, v1465);
    std::vector<WXML::EXPRLib::BNF>::~vector(&v1979);
    v1982 = 0;
    v1983 = 0;
    v1984 = 0;
    v1466 = (_DWORD *)operator new(4u);
    *v1466 = &off_55F1F8;
    zcc::shared_ptr<WXML::EXPRLib::Base>::shared_ptr(v1466);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::push_back(&v1979);
    v1467 = std::vector<WXML::EXPRLib::BNF>::push_back(&v1982);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v1980, v1467);
    std::vector<zcc::shared_ptr<WXML::EXPRLib::Base>>::~vector(&v1982);
  }
}