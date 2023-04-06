#include "unit_initializations.h"
#include "unit_initializations/unit_initializations_func_scripts.h"
#include "../ida_macros.h"
#include "../stdafx.h"

// local variable allocation has failed, the output may be wrong!
int __fastcall sub_4DDFF4(__int64 a1)
{
	int v1; // r9
	int v2; // r21
	int v3; // r8
	int v4; // r23
	int v5; // r12
	int v6; // r22
	int v7; // r25
	int v8; // r23
	int v9; // r24
	int v10; // r25
	int v12; // r22
	int v13; // r25
	int v14; // r23
	int v15; // r20
	int v16; // r24
	int v17; // r23
	int v18; // r24
	int v19; // r25
	int v20; // r23
	int v21; // r20
	int *v22; // r9
	int v23; // r24
	int v24; // r23
	int v25; // r3
	int v26; // r3
	int v27; // r3
	int v28; // r3
	int v29; // r25
	int v30; // r24
	int v31; // r23
	int v32; // r21
	int *v33; // r9
	int v34; // r24
	int v35; // r23
	int v36; // r3
	int v37; // r3
	int v38; // r3
	int v39; // r20
	int v40; // r11
	int v41; // r23
	int v42; // r20
	int v43; // r25
	int v44; // r23
	int v45; // r24
	int v46; // r25
	int v47; // r23
	int v48; // r24
	int v49; // r25
	int v50; // r23
	int v51; // r20
	int *v52; // r9
	int v53; // r24
	int v54; // r23
	int v55; // r3
	int v56; // r3
	int v57; // r3
	int v58; // r20
	int v59; // r25
	int v60; // r23
	int v61; // r26
	int v62; // r25
	int v63; // r23
	int v64; // r26
	int v65; // r25
	int v66; // r23
	int v67; // r21
	int *v68; // r9
	int v69; // r24
	int v70; // r23
	int v71; // r3
	int v72; // r3
	int v73; // r3
	int v74; // r21
	int *v75; // r9
	int v76; // r24
	int v77; // r23
	int v78; // r3
	int v79; // r3
	int v80; // r3
	int v81; // r26
	int v82; // r11
	int v83; // r23
	int v84; // r26
	int v85; // r25
	int v86; // r23
	int v87; // r20
	int v88; // r29
	int v89; // r20
	int v90; // r25
	int v91; // r23
	int v92; // r24
	int v93; // r8
	int v94; // r23
	int v95; // r24
	int v96; // r25
	int v97; // r23
	int v98; // r24
	int v99; // r25
	int v100; // r23
	int v101; // r20
	int *v102; // r9
	int v103; // r24
	int v104; // r23
	int v105; // r3
	int v106; // r3
	int v107; // r3
	int v108; // r20
	int *v109; // r9
	int v110; // r24
	int v111; // r23
	int v112; // r3
	int v113; // r3
	int v114; // r3
	int v115; // r24
	int v116; // r11
	int v117; // r23
	int v118; // r24
	int v119; // r25
	int v120; // r23
	int v121; // r24
	int v122; // r25
	int v123; // r23
	int v124; // r26
	int v125; // r24
	int v126; // r23
	int v127; // r26
	int v128; // r24
	int v129; // r23
	int v130; // r20
	int v131; // r11
	int v132; // r23
	int v133; // r29
	int v134; // r24
	int v135; // r22
	int v136; // r25
	int v137; // r23
	int v138; // r21
	int *v139; // r9
	int v140; // r24
	int v141; // r23
	int v142; // r3
	int v143; // r3
	int v144; // r3
	int v145; // r29
	int v146; // r24
	int v147; // r26
	int v148; // r24
	int v149; // r23
	int v150; // r24
	int v151; // r25
	int v152; // r23
	int v153; // r22
	int v154; // r24
	int v155; // r23
	int v156; // r3
	int v157; // r24
	int v158; // r21
	int v159; // r23
	int v160; // r26
	int v161; // r25
	int v162; // r23
	int v163; // r22
	int v164; // r24
	int v165; // r23
	int v166; // r21
	int *v167; // r9
	int v168; // r24
	int v169; // r23
	int v170; // r3
	int v171; // r3
	int v172; // r3
	int v173; // r26
	int v174; // r25
	int v175; // r23
	int v176; // r22
	int v177; // r23
	int v178; // r21
	int *v179; // r9
	int v180; // r24
	int v181; // r23
	int v182; // r3
	int v183; // r3
	int v184; // r3
	int v185; // r21
	int *v186; // r9
	int v187; // r24
	int v188; // r23
	int v189; // r3
	int v190; // r3
	int v191; // r3
	int v192; // r22
	int v193; // r25
	int v194; // r23
	int v195; // r20
	int v196; // r24
	int v197; // r23
	int v198; // r3
	int v199; // r24
	int v200; // r26
	int v201; // r23
	int v202; // r22
	int v203; // r25
	int v204; // r23
	int v205; // r21
	int v206; // r24
	int v207; // r23
	int v208; // r20
	int v209; // r24
	int v210; // r23
	int v211; // r22
	int v212; // r11
	int v213; // r23
	int v214; // r26
	int v215; // r25
	int v216; // r23
	int v217; // r20
	int v218; // r25
	int v219; // r23
	int v220; // r26
	int v221; // r23
	int v222; // r20
	int v223; // r24
	int v224; // r23
	int v225; // r22
	int v226; // r24
	int v227; // r23
	int v228; // r26
	int v229; // r25
	int v230; // r23
	int v231; // r20
	int v232; // r24
	int v233; // r23
	int v234; // r21
	int v235; // r24
	int v236; // r23
	int v237; // r22
	int v238; // r25
	int v239; // r23
	int v240; // r21
	int *v241; // r9
	int v242; // r24
	int v243; // r23
	int v244; // r3
	int v245; // r3
	int v246; // r3
	int v247; // r24
	int v248; // r8
	int v249; // r23
	int v250; // r26
	int v251; // r24
	int v252; // r23
	int v253; // r22
	int v254; // r24
	int v255; // r23
	int v256; // r26
	int v257; // r24
	int v258; // r23
	int v259; // r21
	int *v260; // r9
	int v261; // r24
	int v262; // r23
	int v263; // r3
	int v264; // r3
	int v265; // r3
	int v266; // r3
	int v267; // r24
	int v268; // r21
	int v269; // r23
	int v270; // r21
	int *v271; // r9
	int v272; // r24
	int v273; // r23
	int v274; // r3
	int v275; // r3
	int v276; // r3
	int v277; // r26
	int v278; // r24
	int v279; // r23
	int v280; // r26
	int v281; // r25
	int v282; // r23
	int v283; // r21
	int v284; // r25
	int v285; // r23
	int v286; // r21
	int *v287; // r9
	int v288; // r24
	int v289; // r23
	int v290; // r3
	int v291; // r3
	int v292; // r3
	int v293; // r26
	int v294; // r24
	int v295; // r23
	int v296; // r22
	int v297; // r11
	int v298; // r23
	int v299; // r20
	int v300; // r24
	int v301; // r23
	int v302; // r26
	int v303; // r24
	int v304; // r23
	int v305; // r21
	int *v306; // r9
	int v307; // r24
	int v308; // r23
	int v309; // r3
	int v310; // r3
	int v311; // r3
	int v312; // r21
	int *v313; // r9
	int v314; // r24
	int v315; // r23
	int v316; // r3
	int v317; // r3
	int v318; // r3
	int v319; // r26
	int v320; // r25
	int v321; // r23
	int v322; // r20
	int v323; // r25
	int v324; // r23
	int v325; // r21
	int v326; // r11
	int v327; // r23
	int v328; // r20
	int v329; // r11
	int v330; // r23
	int v331; // r26
	int v332; // r24
	int v333; // r22
	int v334; // r8
	int v335; // r23
	int v336; // r20
	int v337; // r8
	int v338; // r23
	int v339; // r21
	int *v340; // r9
	int v341; // r24
	int v342; // r23
	int v343; // r3
	int v344; // r3
	int v345; // r3
	int v346; // r26
	int v347; // r24
	int v348; // r23
	int v349; // r21
	int v350; // r25
	int v351; // r23
	int v352; // r20
	int v353; // r24
	int v354; // r23
	int v355; // r22
	int v356; // r25
	int v357; // r23
	int v358; // r20
	int v359; // r24
	int v360; // r23
	int v361; // r26
	int v362; // r25
	int v363; // r23
	int v364; // r3
	int v365; // r24
	int v366; // r20
	int v367; // r23
	int v368; // r3
	int v369; // r22
	int v370; // r21
	int v371; // r23
	int v372; // r21
	int v373; // r24
	int v374; // r23
	int v375; // r21
	int v376; // r24
	int v377; // r23
	int v378; // r21
	int *v379; // r9
	int v380; // r24
	int v381; // r23
	int v382; // r3
	int v383; // r3
	int v384; // r3
	int v385; // r22
	int v386; // r12
	int v387; // r22
	int v388; // r23
	int v389; // r21
	int v390; // r25
	int v391; // r23
	int v392; // r21
	int v393; // r25
	int v394; // r23
	int v395; // r26
	int v396; // r24
	int v397; // r23
	int v398; // r3
	int v399; // r24
	int v400; // r20
	int v401; // r23
	int v402; // r20
	int v403; // r24
	int v404; // r23
	int v405; // r21
	int v406; // r25
	int v407; // r23
	int v408; // r21
	int v409; // r25
	int v410; // r23
	int v411; // r21
	int *v412; // r9
	int v413; // r24
	int v414; // r23
	int v415; // r3
	int v416; // r3
	int v417; // r3
	int v418; // r21
	int v419; // r24
	int v420; // r23
	int v421; // r20
	int v422; // r25
	int v423; // r23
	int v424; // r20
	int v425; // r11
	int v426; // r23
	int v427; // r29
	int v428; // r12
	int v429; // r21
	int v430; // r12
	int v431; // r23
	int v432; // r21
	int *v433; // r9
	int v434; // r24
	int v435; // r23
	int v436; // r3
	int v437; // r3
	int v438; // r3
	int v439; // r21
	int *v440; // r9
	int v441; // r24
	int v442; // r23
	int v443; // r3
	int v444; // r3
	int v445; // r3
	int v446; // r21
	int v447; // r25
	int v448; // r23
	int v449; // r22
	int v450; // r25
	int v451; // r23
	int v452; // r21
	int v453; // r24
	int v454; // r29
	int v455; // r24
	int v456; // r21
	int v457; // r24
	int v458; // r23
	int v459; // r21
	int v460; // r11
	int v461; // r23
	int v462; // r22
	int v463; // r23
	int v464; // r20
	int v465; // r24
	int v466; // r23
	int v467; // r21
	int v468; // r24
	int v469; // r23
	int v470; // r22
	int v471; // r25
	int v472; // r23
	int v473; // r20
	int v474; // r24
	int v475; // r23
	int v476; // r20
	int v477; // r25
	int v478; // r23
	int v479; // r22
	int v480; // r24
	int v481; // r3
	int v482; // r24
	int v483; // r11
	int v484; // r25
	int v485; // r29
	int v486; // r28
	int v487; // r21
	int v488; // r6
	int v489; // r26
	int v490; // r3
	int v491; // r23
	int v492; // r22
	int v493; // r24
	int v494; // r23
	int v495; // r21
	int *v496; // r9
	int v497; // r24
	int v498; // r23
	int v499; // r3
	int v500; // r3
	int v501; // r3
	int v502; // r20
	int v503; // r24
	int v504; // r23
	int v505; // r21
	int v506; // r25
	int v507; // r23
	int v508; // r26
	int v509; // r23
	int v510; // r22
	int v511; // r24
	int v512; // r23
	int v513; // r9
	int v514; // r25
	int v515; // r12
	int v516; // r28
	int v517; // r11
	int *v518; // r3
	int v519; // r3
	int v520; // r26
	__int16 *v521; // r4
	int v522; // r20
	int v523; // r12
	int v524; // r28
	int v525; // r23
	int *v526; // r3
	int v527; // r9
	int v528; // r3
	int v529; // r3
	int v530; // r3
	int v531; // r0
	int v532; // r21
	int v533; // r22
	int *v534; // r3
	int v535; // r9
	int v536; // r3
	int v537; // r11
	int v538; // r3
	int v539; // r21
	int v540; // r12
	int v541; // r25
	int *v542; // r3
	int v543; // r9
	int v544; // r3
	int v545; // r3
	int v546; // r27
	int v547; // r22
	int v548; // r21
	int *v549; // r3
	int v550; // r9
	int v551; // r3
	int v552; // r5
	__int16 *v553; // r4
	int v554; // r22
	int v555; // r26
	int *v556; // r3
	int v557; // r9
	int v558; // r3
	int v559; // r27
	int v560; // r22
	int v561; // r21
	int *v562; // r3
	int v563; // r9
	int v564; // r3
	int v565; // r12
	int v566; // r26
	int v567; // r12
	int v568; // r21
	int v569; // r23
	int v570; // r25
	int v571; // r28
	int v572; // r29
	int v573; // r8
	int v574; // r27
	int v575; // r3
	int v576; // r5
	int v577; // r21
	int v578; // r11
	int v579; // r24
	int v580; // r12
	int v581; // r26
	int v582; // r27
	int v583; // r9
	int v584; // r11
	int v585; // r7
	int v586; // r10
	int v587; // r8
	int v588; // r24
	int v589; // r22
	int v590; // r20
	int v591; // r3
	int v592; // r12
	_BOOL1 v593; // cr34
	int v594; // r11
	int v595; // r25
	int *v596; // r3
	int v597; // r9
	int v598; // r3
	int v599; // r20
	int v600; // r20
	int v601; // r12
	int v602; // r27
	int *v603; // r3
	int v604; // r9
	int v605; // r3
	int v606; // r3
	int v607; // r11
	int v608; // r26
	int *v609; // r3
	int v610; // r9
	int v611; // r3
	int v612; // r12
	int v613; // r27
	int v614; // r26
	int *v615; // r3
	int v616; // r9
	int v617; // r3
	int v618; // r23
	int v619; // r20
	int v620; // r26
	int v621; // r27
	int *v622; // r3
	int v623; // r9
	int v624; // r3
	int v625; // r3
	int v626; // r20
	int *v627; // r9
	int v628; // r23
	int v629; // r24
	int v630; // r3
	int v631; // r3
	int v632; // r20
	int v633; // r11
	int v634; // r21
	int *v635; // r3
	int v636; // r9
	int v637; // r3
	int v638; // r3
	int v639; // r22
	int v640; // r12
	int v641; // r20
	int *v642; // r3
	int v643; // r9
	int v644; // r3
	int v645; // r3
	int v646; // r21
	int v647; // r22
	int v648; // r20
	int *v649; // r3
	int v650; // r9
	int v651; // r3
	int v652; // r3
	int v653; // r20
	int v654; // r25
	int v655; // r26
	int *v656; // r3
	int v657; // r9
	int v658; // r3
	int v659; // r3
	int v660; // r20
	int v661; // r26
	int v662; // r25
	int *v663; // r3
	int v664; // r9
	int v665; // r3
	int v666; // r3
	__int64 v667; // r29 OVERLAPPED
	__int64 v668; // r27 OVERLAPPED
	__int64 v669; // r25 OVERLAPPED
	__int64 v670; // r23 OVERLAPPED
	__int64 v671; // r21 OVERLAPPED
	int v673; // lr
	int *v674; // r31
	char *v675; // r5
	int v676; // r5
	_BYTE v677[4]; // [sp+48h] [-350h] BYREF
	_BYTE v678[4]; // [sp+4Ch] [-34Ch] BYREF
	_BYTE v679[4]; // [sp+50h] [-348h] BYREF
	_BYTE v680[4]; // [sp+54h] [-344h] BYREF
	_BYTE v681[4]; // [sp+58h] [-340h] BYREF
	_BYTE v682[4]; // [sp+5Ch] [-33Ch] BYREF
	_BYTE v683[4]; // [sp+60h] [-338h] BYREF
	_BYTE v684[4]; // [sp+64h] [-334h] BYREF
	_BYTE v685[4]; // [sp+68h] [-330h] BYREF
	_BYTE v686[4]; // [sp+6Ch] [-32Ch] BYREF
	__int16 v687; // [sp+70h] [-328h] BYREF
	__int16 v688; // [sp+74h] [-324h] BYREF
	__int16 v689; // [sp+78h] [-320h] BYREF
	__int16 v690; // [sp+7Ch] [-31Ch] BYREF
	__int16 v691; // [sp+80h] [-318h] BYREF
	__int16 v692; // [sp+84h] [-314h] BYREF
	__int16 v693; // [sp+88h] [-310h] BYREF
	__int16 v694; // [sp+8Ch] [-30Ch] BYREF
	__int16 v695; // [sp+90h] [-308h] BYREF
	__int16 v696; // [sp+94h] [-304h] BYREF
	__int16 v697; // [sp+98h] [-300h] BYREF
	__int16 v698; // [sp+9Ch] [-2FCh] BYREF
	__int16 v699; // [sp+A0h] [-2F8h] BYREF
	__int16 v700; // [sp+A4h] [-2F4h] BYREF
	__int16 v701; // [sp+A8h] [-2F0h] BYREF
	__int16 v702; // [sp+ACh] [-2ECh] BYREF
	__int16 v703; // [sp+B0h] [-2E8h] BYREF
	__int16 v704; // [sp+B4h] [-2E4h] BYREF
	__int16 v705; // [sp+B8h] [-2E0h] BYREF
	__int16 v706; // [sp+BCh] [-2DCh] BYREF
	__int16 v707; // [sp+C0h] [-2D8h] BYREF
	__int16 v708; // [sp+C4h] [-2D4h] BYREF
	__int16 v709; // [sp+C8h] [-2D0h] BYREF
	__int16 v710; // [sp+CCh] [-2CCh] BYREF
	__int16 v711; // [sp+D0h] [-2C8h] BYREF
	__int16 v712; // [sp+D4h] [-2C4h] BYREF
	__int16 v713; // [sp+D8h] [-2C0h] BYREF
	__int16 v714; // [sp+DCh] [-2BCh] BYREF
	__int16 v715; // [sp+E0h] [-2B8h] BYREF
	__int16 v716; // [sp+E4h] [-2B4h] BYREF
	__int16 v717; // [sp+E8h] [-2B0h] BYREF
	__int16 v718; // [sp+ECh] [-2ACh] BYREF
	__int16 v719; // [sp+F0h] [-2A8h] BYREF
	__int16 v720; // [sp+F4h] [-2A4h] BYREF
	__int16 v721; // [sp+F8h] [-2A0h] BYREF
	__int16 v722; // [sp+FCh] [-29Ch] BYREF
	__int16 v723; // [sp+100h] [-298h] BYREF
	__int16 v724; // [sp+104h] [-294h] BYREF
	__int16 v725; // [sp+108h] [-290h] BYREF
	__int16 v726; // [sp+10Ch] [-28Ch] BYREF
	__int16 v727; // [sp+110h] [-288h] BYREF
	__int16 v728; // [sp+114h] [-284h] BYREF
	__int16 v729; // [sp+118h] [-280h] BYREF
	__int16 v730; // [sp+11Ch] [-27Ch] BYREF
	__int16 v731; // [sp+120h] [-278h] BYREF
	__int16 v732; // [sp+124h] [-274h] BYREF
	__int16 v733; // [sp+128h] [-270h] BYREF
	__int16 v734; // [sp+12Ch] [-26Ch] BYREF
	__int16 v735; // [sp+130h] [-268h] BYREF
	__int16 v736; // [sp+134h] [-264h] BYREF
	__int16 v737; // [sp+138h] [-260h] BYREF
	__int16 v738; // [sp+13Ch] [-25Ch] BYREF
	__int16 v739; // [sp+140h] [-258h] BYREF
	__int16 v740; // [sp+144h] [-254h] BYREF
	__int16 v741; // [sp+148h] [-250h] BYREF
	__int16 v742; // [sp+14Ch] [-24Ch] BYREF
	__int16 v743; // [sp+150h] [-248h] BYREF
	__int16 v744; // [sp+154h] [-244h] BYREF
	__int16 v745; // [sp+158h] [-240h] BYREF
	__int16 v746; // [sp+15Ch] [-23Ch] BYREF
	__int16 v747; // [sp+160h] [-238h] BYREF
	__int16 v748; // [sp+164h] [-234h] BYREF
	__int16 v749; // [sp+168h] [-230h] BYREF
	__int16 v750; // [sp+16Ch] [-22Ch] BYREF
	__int16 v751; // [sp+170h] [-228h] BYREF
	__int16 v752; // [sp+174h] [-224h] BYREF
	__int16 v753; // [sp+178h] [-220h] BYREF
	__int16 v754; // [sp+17Ch] [-21Ch] BYREF
	__int16 v755; // [sp+180h] [-218h] BYREF
	__int16 v756; // [sp+184h] [-214h] BYREF
	__int16 v757; // [sp+188h] [-210h] BYREF
	__int16 v758; // [sp+18Ch] [-20Ch] BYREF
	__int16 v759; // [sp+190h] [-208h] BYREF
	__int16 v760; // [sp+194h] [-204h] BYREF
	__int16 v761; // [sp+198h] [-200h] BYREF
	__int16 v762; // [sp+19Ch] [-1FCh] BYREF
	__int16 v763; // [sp+1A0h] [-1F8h] BYREF
	__int16 v764; // [sp+1A4h] [-1F4h] BYREF
	__int16 v765; // [sp+1A8h] [-1F0h] BYREF
	__int16 v766; // [sp+1ACh] [-1ECh] BYREF
	__int16 v767; // [sp+1B0h] [-1E8h] BYREF
	__int16 v768; // [sp+1B4h] [-1E4h] BYREF
	__int16 v769; // [sp+1B8h] [-1E0h] BYREF
	__int16 v770; // [sp+1BCh] [-1DCh] BYREF
	__int16 v771; // [sp+1C0h] [-1D8h] BYREF
	__int16 v772; // [sp+1C4h] [-1D4h] BYREF
	__int16 v773; // [sp+1C8h] [-1D0h] BYREF
	__int16 v774; // [sp+1CCh] [-1CCh] BYREF
	__int16 v775; // [sp+1D0h] [-1C8h] BYREF
	__int16 v776; // [sp+1D4h] [-1C4h] BYREF
	__int16 v777; // [sp+1D8h] [-1C0h] BYREF
	__int16 v778; // [sp+1DCh] [-1BCh] BYREF
	__int16 v779; // [sp+1E0h] [-1B8h] BYREF
	__int16 v780; // [sp+1E4h] [-1B4h] BYREF
	__int16 v781; // [sp+1E8h] [-1B0h] BYREF
	__int16 v782; // [sp+1ECh] [-1ACh] BYREF
	__int16 v783; // [sp+1F0h] [-1A8h] BYREF
	__int16 v784; // [sp+1F4h] [-1A4h] BYREF
	__int64 v785; // [sp+1F8h] [-1A0h] BYREF
	__int64 v786; // [sp+200h] [-198h] BYREF
	__int16 v787; // [sp+208h] [-190h] BYREF
	__int16 v788; // [sp+20Ch] [-18Ch] BYREF
	__int64 v789; // [sp+210h] [-188h] BYREF
	__int16 v790; // [sp+218h] [-180h] BYREF
	__int16 v791; // [sp+21Ch] [-17Ch] BYREF
	__int16 v792; // [sp+220h] [-178h] BYREF
	__int16 v793; // [sp+224h] [-174h] BYREF
	__int64 v794; // [sp+228h] [-170h] BYREF
	__int16 v795; // [sp+230h] [-168h] BYREF
	__int16 v796; // [sp+234h] [-164h] BYREF
	__int16 v797; // [sp+238h] [-160h] BYREF
	__int16 v798; // [sp+23Ch] [-15Ch] BYREF
	__int16 v799; // [sp+240h] [-158h] BYREF
	__int16 v800; // [sp+244h] [-154h] BYREF
	__int16 v801; // [sp+248h] [-150h] BYREF
	__int16 v802; // [sp+24Ch] [-14Ch] BYREF
	__int16 v803; // [sp+250h] [-148h] BYREF
	__int16 v804; // [sp+254h] [-144h] BYREF
	__int16 v805; // [sp+258h] [-140h] BYREF
	__int16 v806; // [sp+25Ch] [-13Ch] BYREF
	__int16 v807; // [sp+260h] [-138h] BYREF
	__int16 v808; // [sp+264h] [-134h] BYREF
	__int16 v809; // [sp+268h] [-130h] BYREF
	__int16 v810; // [sp+26Ch] [-12Ch] BYREF
	__int16 v811; // [sp+270h] [-128h] BYREF
	__int16 v812; // [sp+274h] [-124h] BYREF
	__int16 v813; // [sp+278h] [-120h] BYREF
	__int16 v814; // [sp+27Ch] [-11Ch] BYREF
	__int16 v815; // [sp+280h] [-118h] BYREF
	__int16 v816; // [sp+284h] [-114h] BYREF
	__int16 v817; // [sp+288h] [-110h] BYREF
	__int16 v818; // [sp+28Ch] [-10Ch] BYREF
	__int16 v819; // [sp+290h] [-108h] BYREF
	__int16 v820; // [sp+294h] [-104h] BYREF
	__int16 v821; // [sp+298h] [-100h] BYREF
	__int16 v822; // [sp+29Ch] [-FCh] BYREF
	__int16 v823; // [sp+2A0h] [-F8h] BYREF
	__int16 v824; // [sp+2A4h] [-F4h] BYREF
	__int16 v825; // [sp+2A8h] [-F0h] BYREF
	__int16 v826; // [sp+2ACh] [-ECh] BYREF
	__int16 v827; // [sp+2B0h] [-E8h] BYREF
	__int16 v828; // [sp+2B4h] [-E4h] BYREF
	__int16 v829; // [sp+2B8h] [-E0h] BYREF
	__int16 v830; // [sp+2BCh] [-DCh] BYREF
	__int16 v831; // [sp+2C0h] [-D8h] BYREF
	__int16 v832; // [sp+2C4h] [-D4h] BYREF
	__int16 v833; // [sp+2C8h] [-D0h] BYREF
	__int16 v834; // [sp+2CCh] [-CCh] BYREF
	__int16 v835; // [sp+2D0h] [-C8h] BYREF
	__int16 v836; // [sp+2D4h] [-C4h] BYREF
	__int16 v837; // [sp+2D8h] [-C0h] BYREF
	__int16 v838; // [sp+2DCh] [-BCh] BYREF
	__int16 v839; // [sp+2E0h] [-B8h] BYREF
	__int16 v840; // [sp+2E4h] [-B4h] BYREF
	__int16 v841; // [sp+2E8h] [-B0h] BYREF
	__int16 v842; // [sp+2ECh] [-ACh] BYREF
	__int16 v843; // [sp+2F0h] [-A8h] BYREF
	__int16 v844; // [sp+2F4h] [-A4h] BYREF
	__int16 v845; // [sp+2F8h] [-A0h] BYREF
	__int16 v846; // [sp+2FCh] [-9Ch] BYREF
	__int16 v847; // [sp+300h] [-98h] BYREF
	__int16 v848; // [sp+304h] [-94h] BYREF
	__int16 v849; // [sp+308h] [-90h] BYREF
	__int16 v850; // [sp+30Ch] [-8Ch] BYREF
	__int16 v851; // [sp+310h] [-88h] BYREF
	__int16 v852; // [sp+314h] [-84h] BYREF
	__int16 v853; // [sp+318h] [-80h] BYREF
	__int16 v854; // [sp+31Ch] [-7Ch] BYREF
	__int16 v855; // [sp+320h] [-78h] BYREF
	__int16 v856; // [sp+324h] [-74h] BYREF
	__int16 v857; // [sp+328h] [-70h] BYREF
	__int64 v858; // [sp+338h] [-60h]
	__int64 v859; // [sp+340h] [-58h]
	__int64 v860; // [sp+348h] [-50h]
	__int64 v861; // [sp+350h] [-48h]
	__int64 v862; // [sp+358h] [-40h]
	__int64 v863; // [sp+360h] [-38h]
	__int64 v864; // [sp+368h] [-30h]
	__int64 v865; // [sp+370h] [-28h]
	__int64 v866; // [sp+378h] [-20h]
	__int64 v867; // [sp+380h] [-18h]
	__int64 v868; // [sp+3A8h] [+10h]

	LODWORD(a1) = v673;
	v868 = a1;
	v674 = (int *)HIDWORD(a1);
	if ((GameCall<int>(0x9E9078, 0xd6ff70)(*(_DWORD *)HIDWORD(a1)) & 8) == 0)
	{
		v676 = HIDWORD(v868);
		v861 = v670;
		v858 = *(__int64 *)((char *)&v671 + 4);
		v859 = v671;
		v860 = *(__int64 *)((char *)&v670 + 4);
		v862 = *(__int64 *)((char *)&v669 + 4);
		v863 = v669;
		v864 = *(__int64 *)((char *)&v668 + 4);
		v865 = v668;
		v866 = *(__int64 *)((char *)&v667 + 4);
		v867 = v667;
		v1 = *v674;
		if (*v674 == 18021)
		{
			v700 = -256;
			v9 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v700, HIDWORD(v868));
			v10 = *(int *)0xD71F24;
			*(_DWORD *)v9 = *(int *)0xD71F10;
			*(_DWORD *)(v9 + 4) = 0;
			*(_DWORD *)(v9 + 8) = 0;
			*(_DWORD *)(v9 + 12) = 0;
			*(_DWORD *)(v9 + 16) = 0;
			*(_DWORD *)(v9 + 20) = 0;
			*(_DWORD *)(v9 + 24) = *v674;
			*(_BYTE *)(v9 + 32) = 0;
			*(_DWORD *)(v9 + 28) = 0;
			*(_BYTE *)(v9 + 40) = 0;
			*(_DWORD *)(v9 + 36) = 0;
			*(_DWORD *)(v9 + 44) = 0;
			*(_DWORD *)(v9 + 52) = -1;
			*(_DWORD *)(v9 + 48) = 0;
			*(_DWORD *)(v9 + 76) = 1065353216;
			*(_DWORD *)(v9 + 64) = 0;
			*(_DWORD *)(v9 + 92) = 1065353216;
			*(_DWORD *)(v9 + 68) = 0;
			*(_DWORD *)(v9 + 72) = 0;
			*(_DWORD *)(v9 + 80) = 0;
			*(_DWORD *)(v9 + 88) = 0;
			*(_DWORD *)(v9 + 84) = 0;
			*(_DWORD *)(v9 + 100) = 0;
			*(_DWORD *)(v9 + 96) = 0;
			*(_DWORD *)v9 = v10;
			GameCall<int>(0xAA364C, 0xd6ff70)(v9, 30);
			v5 = v9;
			*(_DWORD *)v9 = *(int *)0xD7202C;
			return ((int(__fastcall *)(int))v673)(v5);
		}
		if (*v674 <= 18021)
		{
			if (v1 == 8031)
			{
				v757 = -256;
				v21 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v757, HIDWORD(v868));
				v22 = (int *)*(int *)0xD71E60;
				v23 = *(int *)0xD71E58;
				*(_DWORD *)v21 = *(int *)0xD71F10;
				*(_DWORD *)(v21 + 4) = 0;
				*(_DWORD *)(v21 + 8) = 0;
				*(_DWORD *)(v21 + 12) = 0;
				*(_DWORD *)(v21 + 16) = 0;
				*(_DWORD *)(v21 + 20) = 0;
				v24 = *(int *)0xD71FA0;
				*(_DWORD *)(v21 + 24) = *v674;
				*(_BYTE *)(v21 + 32) = 0;
				*(_DWORD *)(v21 + 28) = 0;
				*(_BYTE *)(v21 + 40) = 0;
				*(_DWORD *)(v21 + 36) = 0;
				*(_DWORD *)(v21 + 44) = 0;
				*(_DWORD *)(v21 + 48) = 0;
				*(_DWORD *)(v21 + 52) = -1;
				*(_DWORD *)(v21 + 64) = 0;
				*(_DWORD *)(v21 + 68) = 0;
				*(_DWORD *)(v21 + 72) = 0;
				*(_DWORD *)(v21 + 80) = 0;
				*(_DWORD *)(v21 + 88) = 0;
				*(_DWORD *)(v21 + 84) = 0;
				*(_DWORD *)(v21 + 76) = 1065353216;
				*(_DWORD *)(v21 + 92) = 1065353216;
				*(_DWORD *)(v21 + 100) = 0;
				*(_DWORD *)(v21 + 96) = 0;
				*(_DWORD *)v21 = v23;
				*(_DWORD *)v21 = v24;
				v25 = *v22;
				v677[0] = -1;
				v677[1] = 0;
				v26 = GameCall<int>(0x9E9198, 0xd6ff70)(v25, 64, (int)v677, 0, 0, v21 + 80, (int)v22, v21 + 64);
				*(_DWORD *)(v21 + 8) = v26;
				*(_DWORD *)v26 = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 4) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 8) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 12) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 16) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 20) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 24) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 28) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 32) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 36) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 40) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 44) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 48) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 52) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 56) = 0;
				*(_DWORD *)(*(_DWORD *)(v21 + 8) + 60) = 0;
				*(_DWORD *)(v21 + 12) = 16;
				v798 = -256;
				v27 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v798);
				*(_DWORD *)v27 = 0;
				*(_DWORD *)(v27 + 4) = 0;
				*(_DWORD *)(v27 + 8) = 0;
				*(_DWORD *)(v27 + 12) = 0;
				*(_DWORD *)(v27 + 20) = 0;
				*(_DWORD *)(v27 + 16) = 0;
				*(_DWORD *)(v27 + 32) = 0;
				*(_DWORD *)(v27 + 24) = 0;
				*(_DWORD *)(v27 + 28) = 0;
				*(_DWORD *)(v27 + 44) = 0;
				*(_DWORD *)(v27 + 36) = 0;
				*(_DWORD *)(v27 + 40) = 0;
				*(_DWORD *)(v27 + 56) = 0;
				*(_DWORD *)(v27 + 48) = 0;
				*(_DWORD *)(v27 + 52) = 0;
				*(_DWORD *)(v27 + 68) = 0;
				*(_DWORD *)(v27 + 60) = 0;
				*(_DWORD *)(v27 + 64) = 0;
				*(_DWORD *)(v27 + 80) = 0;
				*(_DWORD *)(v27 + 72) = 0;
				*(_DWORD *)(v27 + 76) = 0;
				*(_DWORD *)(v27 + 92) = 0;
				*(_DWORD *)(v27 + 84) = 0;
				*(_DWORD *)(v27 + 104) = 0;
				*(_DWORD *)(v27 + 88) = 0;
				*(_DWORD *)(v27 + 96) = 0;
				*(_DWORD *)(v27 + 100) = 0;
				*(_DWORD *)(v27 + 116) = 0;
				*(_DWORD *)(v27 + 108) = 0;
				*(_DWORD *)(v27 + 112) = 0;
				*(_DWORD *)(v27 + 128) = 0;
				*(_DWORD *)(v27 + 120) = 0;
				*(_DWORD *)(v27 + 124) = 0;
				*(_DWORD *)(v27 + 132) = 0;
				*(_DWORD *)(v27 + 140) = 0;
				*(_DWORD *)(v27 + 136) = 0;
				*(_DWORD *)(v27 + 152) = 0;
				*(_DWORD *)(v27 + 144) = 0;
				*(_DWORD *)(v27 + 148) = 0;
				*(_DWORD *)(v27 + 164) = 0;
				*(_DWORD *)(v27 + 156) = 0;
				*(_DWORD *)(v27 + 160) = 0;
				*(_DWORD *)(v27 + 176) = 0;
				*(_DWORD *)(v27 + 168) = 0;
				*(_DWORD *)(v27 + 172) = 0;
				*(_DWORD *)(v27 + 188) = 0;
				*(_DWORD *)(v27 + 180) = 0;
				*(_DWORD *)(v27 + 184) = 0;
				*(_DWORD *)(v21 + 16) = v27;
				return v21;
			}
			if (v1 <= 8031)
			{
				if (v1 == 3011)
				{
					v727 = -256;
					v51 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v727, HIDWORD(v868));
					v52 = (int *)*(int *)0xD71E60;
					v53 = *(int *)0xD71E58;
					*(_DWORD *)v51 = *(int *)0xD71F10;
					*(_DWORD *)(v51 + 4) = 0;
					*(_DWORD *)(v51 + 8) = 0;
					*(_DWORD *)(v51 + 12) = 0;
					*(_DWORD *)(v51 + 16) = 0;
					*(_DWORD *)(v51 + 20) = 0;
					v54 = *(int *)0xD71F58;
					*(_DWORD *)(v51 + 24) = *v674;
					*(_BYTE *)(v51 + 32) = 0;
					*(_DWORD *)(v51 + 28) = 0;
					*(_BYTE *)(v51 + 40) = 0;
					*(_DWORD *)(v51 + 36) = 0;
					*(_DWORD *)(v51 + 44) = 0;
					*(_DWORD *)(v51 + 52) = -1;
					*(_DWORD *)(v51 + 48) = 0;
					*(_DWORD *)(v51 + 64) = 0;
					*(_DWORD *)(v51 + 68) = 0;
					*(_DWORD *)(v51 + 72) = 0;
					*(_DWORD *)(v51 + 80) = 0;
					*(_DWORD *)(v51 + 88) = 0;
					*(_DWORD *)(v51 + 84) = 0;
					*(_DWORD *)(v51 + 76) = 1065353216;
					*(_DWORD *)(v51 + 92) = 1065353216;
					*(_DWORD *)(v51 + 100) = 0;
					*(_DWORD *)(v51 + 96) = 0;
					*(_DWORD *)v51 = v53;
					*(_DWORD *)v51 = v54;
					v55 = *v52;
					v790 = -256;
					v56 = GameCall<int>(0x9E9198, 0xd6ff70)(v55, 64, (int)&v790, 0, 0, v51 + 80, (int)v52, v51 + 64);
					*(_DWORD *)(v51 + 8) = v56;
					*(_DWORD *)v56 = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 4) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 8) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 12) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 16) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 20) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 24) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 28) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 32) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 36) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 40) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 44) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 48) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 52) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 56) = 0;
					*(_DWORD *)(*(_DWORD *)(v51 + 8) + 60) = 0;
					*(_DWORD *)(v51 + 12) = 16;
					WORD2(v789) = -256;
					v57 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, (char *)&v789 + 4);
					v5 = v51;
					*(_DWORD *)v57 = 0;
					*(_DWORD *)(v57 + 4) = 0;
					*(_DWORD *)(v57 + 8) = 0;
					*(_DWORD *)(v57 + 12) = 0;
					*(_DWORD *)(v57 + 20) = 0;
					*(_DWORD *)(v57 + 16) = 0;
					*(_DWORD *)(v57 + 32) = 0;
					*(_DWORD *)(v57 + 24) = 0;
					*(_DWORD *)(v57 + 28) = 0;
					*(_DWORD *)(v57 + 44) = 0;
					*(_DWORD *)(v57 + 36) = 0;
					*(_DWORD *)(v57 + 40) = 0;
					*(_DWORD *)(v57 + 56) = 0;
					*(_DWORD *)(v57 + 48) = 0;
					*(_DWORD *)(v57 + 52) = 0;
					*(_DWORD *)(v57 + 68) = 0;
					*(_DWORD *)(v57 + 60) = 0;
					*(_DWORD *)(v57 + 64) = 0;
					*(_DWORD *)(v57 + 80) = 0;
					*(_DWORD *)(v57 + 72) = 0;
					*(_DWORD *)(v57 + 76) = 0;
					*(_DWORD *)(v57 + 92) = 0;
					*(_DWORD *)(v57 + 84) = 0;
					*(_DWORD *)(v57 + 88) = 0;
					*(_DWORD *)(v57 + 104) = 0;
					*(_DWORD *)(v57 + 96) = 0;
					*(_DWORD *)(v57 + 100) = 0;
					*(_DWORD *)(v57 + 116) = 0;
					*(_DWORD *)(v57 + 108) = 0;
					*(_DWORD *)(v57 + 112) = 0;
					*(_DWORD *)(v57 + 128) = 0;
					*(_DWORD *)(v57 + 120) = 0;
					*(_DWORD *)(v57 + 124) = 0;
					*(_DWORD *)(v57 + 132) = 0;
					*(_DWORD *)(v57 + 140) = 0;
					*(_DWORD *)(v57 + 136) = 0;
					*(_DWORD *)(v57 + 152) = 0;
					*(_DWORD *)(v57 + 144) = 0;
					*(_DWORD *)(v57 + 148) = 0;
					*(_DWORD *)(v57 + 164) = 0;
					*(_DWORD *)(v57 + 156) = 0;
					*(_DWORD *)(v57 + 160) = 0;
					*(_DWORD *)(v57 + 176) = 0;
					*(_DWORD *)(v57 + 168) = 0;
					*(_DWORD *)(v57 + 172) = 0;
					*(_DWORD *)(v57 + 188) = 0;
					*(_DWORD *)(v57 + 180) = 0;
					*(_DWORD *)(v57 + 184) = 0;
					*(_DWORD *)(v51 + 16) = v57;
					return ((int(__fastcall *)(int))v673)(v5);
				}
				if (v1 <= 3011)
				{
					if (v1 == 1091)
					{
						v742 = -256;
						v108 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v742, HIDWORD(v868));
						v109 = (int *)*(int *)0xD71E60;
						v110 = *(int *)0xD71E58;
						*(_DWORD *)v108 = *(int *)0xD71F10;
						*(_DWORD *)(v108 + 4) = 0;
						*(_DWORD *)(v108 + 8) = 0;
						*(_DWORD *)(v108 + 12) = 0;
						*(_DWORD *)(v108 + 16) = 0;
						*(_DWORD *)(v108 + 20) = 0;
						v111 = *(int *)0xD71F34;
						*(_DWORD *)(v108 + 24) = *v674;
						*(_BYTE *)(v108 + 32) = 0;
						*(_DWORD *)(v108 + 28) = 0;
						*(_BYTE *)(v108 + 40) = 0;
						*(_DWORD *)(v108 + 36) = 0;
						*(_DWORD *)(v108 + 44) = 0;
						*(_DWORD *)(v108 + 52) = -1;
						*(_DWORD *)(v108 + 48) = 0;
						*(_DWORD *)(v108 + 64) = 0;
						*(_DWORD *)(v108 + 68) = 0;
						*(_DWORD *)(v108 + 72) = 0;
						*(_DWORD *)(v108 + 80) = 0;
						*(_DWORD *)(v108 + 88) = 0;
						*(_DWORD *)(v108 + 84) = 0;
						*(_DWORD *)(v108 + 76) = 1065353216;
						*(_DWORD *)(v108 + 92) = 1065353216;
						*(_DWORD *)(v108 + 100) = 0;
						*(_DWORD *)(v108 + 96) = 0;
						*(_DWORD *)v108 = v110;
						*(_DWORD *)v108 = v111;
						v112 = *v109;
						v771 = -256;
						v113 = GameCall<int>(0x9E9198, 0xd6ff70)(v112, 64, (int)&v771, 0, 0, v108 + 80, (int)v109, v108 + 64);
						*(_DWORD *)(v108 + 8) = v113;
						*(_DWORD *)v113 = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 4) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 8) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 12) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 16) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 20) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 24) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 28) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 32) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 36) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 40) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 44) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 48) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 52) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 56) = 0;
						*(_DWORD *)(*(_DWORD *)(v108 + 8) + 60) = 0;
						*(_DWORD *)(v108 + 12) = 16;
						v780 = -256;
						v114 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v780);
						v5 = v108;
						*(_DWORD *)v114 = 0;
						*(_DWORD *)(v114 + 4) = 0;
						*(_DWORD *)(v114 + 8) = 0;
						*(_DWORD *)(v114 + 12) = 0;
						*(_DWORD *)(v114 + 20) = 0;
						*(_DWORD *)(v114 + 16) = 0;
						*(_DWORD *)(v114 + 32) = 0;
						*(_DWORD *)(v114 + 24) = 0;
						*(_DWORD *)(v114 + 28) = 0;
						*(_DWORD *)(v114 + 44) = 0;
						*(_DWORD *)(v114 + 36) = 0;
						*(_DWORD *)(v114 + 40) = 0;
						*(_DWORD *)(v114 + 56) = 0;
						*(_DWORD *)(v114 + 48) = 0;
						*(_DWORD *)(v114 + 52) = 0;
						*(_DWORD *)(v114 + 68) = 0;
						*(_DWORD *)(v114 + 60) = 0;
						*(_DWORD *)(v114 + 64) = 0;
						*(_DWORD *)(v114 + 80) = 0;
						*(_DWORD *)(v114 + 72) = 0;
						*(_DWORD *)(v114 + 76) = 0;
						*(_DWORD *)(v114 + 92) = 0;
						*(_DWORD *)(v114 + 84) = 0;
						*(_DWORD *)(v114 + 88) = 0;
						*(_DWORD *)(v114 + 104) = 0;
						*(_DWORD *)(v114 + 96) = 0;
						*(_DWORD *)(v114 + 100) = 0;
						*(_DWORD *)(v114 + 116) = 0;
						*(_DWORD *)(v114 + 108) = 0;
						*(_DWORD *)(v114 + 112) = 0;
						*(_DWORD *)(v114 + 128) = 0;
						*(_DWORD *)(v114 + 120) = 0;
						*(_DWORD *)(v114 + 124) = 0;
						*(_DWORD *)(v114 + 132) = 0;
						*(_DWORD *)(v114 + 140) = 0;
						*(_DWORD *)(v114 + 136) = 0;
						*(_DWORD *)(v114 + 152) = 0;
						*(_DWORD *)(v114 + 144) = 0;
						*(_DWORD *)(v114 + 148) = 0;
						*(_DWORD *)(v114 + 164) = 0;
						*(_DWORD *)(v114 + 156) = 0;
						*(_DWORD *)(v114 + 160) = 0;
						*(_DWORD *)(v114 + 176) = 0;
						*(_DWORD *)(v114 + 168) = 0;
						*(_DWORD *)(v114 + 172) = 0;
						*(_DWORD *)(v114 + 188) = 0;
						*(_DWORD *)(v114 + 180) = 0;
						*(_DWORD *)(v114 + 184) = 0;
						*(_DWORD *)(v108 + 16) = v114;
						return v5;
					}
					if (v1 > 1091)
					{
						if (v1 == 2021)
						{
							v734 = -256;
							v220 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v734, HIDWORD(v868));
							*(_DWORD *)v220 = *(int *)0xD71F10;
							*(_DWORD *)(v220 + 4) = 0;
							*(_DWORD *)(v220 + 8) = 0;
							*(_DWORD *)(v220 + 12) = 0;
							*(_DWORD *)(v220 + 16) = 0;
							*(_DWORD *)(v220 + 20) = 0;
							v221 = *(int *)0xD71F24;
							*(_DWORD *)(v220 + 24) = *v674;
							*(_BYTE *)(v220 + 32) = 0;
							*(_DWORD *)(v220 + 28) = 0;
							*(_BYTE *)(v220 + 40) = 0;
							*(_DWORD *)(v220 + 36) = 0;
							*(_DWORD *)(v220 + 44) = 0;
							*(_DWORD *)(v220 + 52) = -1;
							*(_DWORD *)(v220 + 48) = 0;
							*(_DWORD *)(v220 + 76) = 1065353216;
							*(_DWORD *)(v220 + 64) = 0;
							*(_DWORD *)(v220 + 68) = 0;
							*(_DWORD *)(v220 + 72) = 0;
							*(_DWORD *)(v220 + 92) = 1065353216;
							*(_DWORD *)(v220 + 88) = 0;
							*(_DWORD *)(v220 + 80) = 0;
							*(_DWORD *)(v220 + 84) = 0;
							*(_DWORD *)(v220 + 100) = 0;
							*(_DWORD *)(v220 + 96) = 0;
							*(_DWORD *)v220 = v221;
							GameCall<int>(0xAA364C, 0xd6ff70)(v220, 30);
							v5 = v220;
							*(_DWORD *)v220 = *(int *)0xD71F44;
							return v5;
						}
						if (v1 > 2021)
						{
							if (v1 == 2041)
							{
								v724 = -256;
								v387 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v724, HIDWORD(v868));
								*(_DWORD *)v387 = *(int *)0xD71F10;
								*(_DWORD *)(v387 + 4) = 0;
								*(_DWORD *)(v387 + 8) = 0;
								*(_DWORD *)(v387 + 12) = 0;
								*(_DWORD *)(v387 + 16) = 0;
								*(_DWORD *)(v387 + 20) = 0;
								v388 = *(int *)0xD71F24;
								*(_DWORD *)(v387 + 24) = *v674;
								*(_BYTE *)(v387 + 32) = 0;
								*(_DWORD *)(v387 + 28) = 0;
								*(_BYTE *)(v387 + 40) = 0;
								*(_DWORD *)(v387 + 36) = 0;
								*(_DWORD *)(v387 + 44) = 0;
								*(_DWORD *)(v387 + 52) = -1;
								*(_DWORD *)(v387 + 48) = 0;
								*(_DWORD *)(v387 + 76) = 1065353216;
								*(_DWORD *)(v387 + 64) = 0;
								*(_DWORD *)(v387 + 92) = 1065353216;
								*(_DWORD *)(v387 + 68) = 0;
								*(_DWORD *)(v387 + 72) = 0;
								*(_DWORD *)(v387 + 80) = 0;
								*(_DWORD *)(v387 + 88) = 0;
								*(_DWORD *)(v387 + 84) = 0;
								*(_DWORD *)(v387 + 100) = 0;
								*(_DWORD *)(v387 + 96) = 0;
								*(_DWORD *)v387 = v388;
								GameCall<int>(0xAA364C, 0xd6ff70)(v387, 30);
								v5 = v387;
								*(_DWORD *)v387 = *(int *)0xD71F4C;
								return v5;
							}
							if (v1 > 2041)
							{
								if (v1 == 2061)
								{
									v725 = -256;
									v508 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v725, HIDWORD(v868));
									*(_DWORD *)v508 = *(int *)0xD71F10;
									*(_DWORD *)(v508 + 4) = 0;
									*(_DWORD *)(v508 + 8) = 0;
									*(_DWORD *)(v508 + 12) = 0;
									*(_DWORD *)(v508 + 16) = 0;
									*(_DWORD *)(v508 + 20) = 0;
									v509 = *(int *)0xD71F24;
									*(_DWORD *)(v508 + 24) = *v674;
									*(_BYTE *)(v508 + 32) = 0;
									*(_DWORD *)(v508 + 28) = 0;
									*(_BYTE *)(v508 + 40) = 0;
									*(_DWORD *)(v508 + 36) = 0;
									*(_DWORD *)(v508 + 44) = 0;
									*(_DWORD *)(v508 + 52) = -1;
									*(_DWORD *)(v508 + 48) = 0;
									*(_DWORD *)(v508 + 76) = 1065353216;
									*(_DWORD *)(v508 + 64) = 0;
									*(_DWORD *)(v508 + 68) = 0;
									*(_DWORD *)(v508 + 72) = 0;
									*(_DWORD *)(v508 + 92) = 1065353216;
									*(_DWORD *)(v508 + 88) = 0;
									*(_DWORD *)(v508 + 80) = 0;
									*(_DWORD *)(v508 + 84) = 0;
									*(_DWORD *)(v508 + 100) = 0;
									*(_DWORD *)(v508 + 96) = 0;
									*(_DWORD *)v508 = v509;
									GameCall<int>(0xAA364C, 0xd6ff70)(v508, 30);
									v5 = v508;
									*(_DWORD *)v508 = *(int *)0xD71F50;
									return v5;
								}
								if (v1 == 2091)
								{
									v726 = -256;
									v259 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v726, HIDWORD(v868));
									v260 = (int *)*(int *)0xD71E60;
									v261 = *(int *)0xD71E58;
									*(_DWORD *)v259 = *(int *)0xD71F10;
									*(_DWORD *)(v259 + 4) = 0;
									*(_DWORD *)(v259 + 8) = 0;
									*(_DWORD *)(v259 + 12) = 0;
									*(_DWORD *)(v259 + 16) = 0;
									*(_DWORD *)(v259 + 20) = 0;
									v262 = *(int *)0xD71F54;
									*(_DWORD *)(v259 + 24) = *v674;
									*(_BYTE *)(v259 + 32) = 0;
									*(_DWORD *)(v259 + 28) = 0;
									*(_BYTE *)(v259 + 40) = 0;
									*(_DWORD *)(v259 + 36) = 0;
									*(_DWORD *)(v259 + 44) = 0;
									*(_DWORD *)(v259 + 52) = -1;
									*(_DWORD *)(v259 + 48) = 0;
									*(_DWORD *)(v259 + 64) = 0;
									*(_DWORD *)(v259 + 68) = 0;
									*(_DWORD *)(v259 + 72) = 0;
									*(_DWORD *)(v259 + 80) = 0;
									*(_DWORD *)(v259 + 88) = 0;
									*(_DWORD *)(v259 + 84) = 0;
									*(_DWORD *)(v259 + 76) = 1065353216;
									*(_DWORD *)(v259 + 92) = 1065353216;
									*(_DWORD *)(v259 + 100) = 0;
									*(_DWORD *)(v259 + 96) = 0;
									*(_DWORD *)v259 = v261;
									*(_DWORD *)v259 = v262;
									v263 = *v260;
									v779 = -256;
									v264 = GameCall<int>(0x9E9198, 0xd6ff70)(v263, 64, (int)&v779, 0, 0, v259 + 28, (int)v260, v259 + 64);
									*(_DWORD *)(v259 + 8) = v264;
									*(_DWORD *)v264 = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 4) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 8) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 12) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 16) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 20) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 24) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 28) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 32) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 36) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 40) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 44) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 48) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 52) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 56) = 0;
									*(_DWORD *)(*(_DWORD *)(v259 + 8) + 60) = 0;
									*(_DWORD *)(v259 + 12) = 16;
									v778 = -256;
									v265 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v778);
									v5 = v259;
									*(_DWORD *)v265 = 0;
									*(_DWORD *)(v265 + 4) = 0;
									*(_DWORD *)(v265 + 8) = 0;
									*(_DWORD *)(v265 + 12) = 0;
									*(_DWORD *)(v265 + 20) = 0;
									*(_DWORD *)(v265 + 16) = 0;
									*(_DWORD *)(v265 + 32) = 0;
									*(_DWORD *)(v265 + 24) = 0;
									*(_DWORD *)(v265 + 28) = 0;
									*(_DWORD *)(v265 + 44) = 0;
									*(_DWORD *)(v265 + 36) = 0;
									*(_DWORD *)(v265 + 40) = 0;
									*(_DWORD *)(v265 + 56) = 0;
									*(_DWORD *)(v265 + 48) = 0;
									*(_DWORD *)(v265 + 52) = 0;
									*(_DWORD *)(v265 + 68) = 0;
									*(_DWORD *)(v265 + 60) = 0;
									*(_DWORD *)(v265 + 64) = 0;
									*(_DWORD *)(v265 + 80) = 0;
									*(_DWORD *)(v265 + 72) = 0;
									*(_DWORD *)(v265 + 76) = 0;
									*(_DWORD *)(v265 + 92) = 0;
									*(_DWORD *)(v265 + 84) = 0;
									*(_DWORD *)(v265 + 88) = 0;
									*(_DWORD *)(v265 + 104) = 0;
									*(_DWORD *)(v265 + 96) = 0;
									*(_DWORD *)(v265 + 100) = 0;
									*(_DWORD *)(v265 + 116) = 0;
									*(_DWORD *)(v265 + 108) = 0;
									*(_DWORD *)(v265 + 112) = 0;
									*(_DWORD *)(v265 + 128) = 0;
									*(_DWORD *)(v265 + 120) = 0;
									*(_DWORD *)(v265 + 124) = 0;
									*(_DWORD *)(v265 + 132) = 0;
									*(_DWORD *)(v265 + 140) = 0;
									*(_DWORD *)(v265 + 136) = 0;
									*(_DWORD *)(v265 + 152) = 0;
									*(_DWORD *)(v265 + 144) = 0;
									*(_DWORD *)(v265 + 148) = 0;
									*(_DWORD *)(v265 + 164) = 0;
									*(_DWORD *)(v265 + 156) = 0;
									*(_DWORD *)(v265 + 160) = 0;
									*(_DWORD *)(v265 + 176) = 0;
									*(_DWORD *)(v265 + 168) = 0;
									*(_DWORD *)(v265 + 172) = 0;
									*(_DWORD *)(v265 + 188) = 0;
									*(_DWORD *)(v265 + 180) = 0;
									*(_DWORD *)(v265 + 184) = 0;
									*(_DWORD *)(v259 + 16) = v265;
									return v5;
								}
							}
							else if (v1 == 2031)
							{
								v733 = -256;
								v138 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v733, HIDWORD(v868));
								v139 = (int *)*(int *)0xD71E60;
								v140 = *(int *)0xD71E58;
								*(_DWORD *)v138 = *(int *)0xD71F10;
								*(_DWORD *)(v138 + 4) = 0;
								*(_DWORD *)(v138 + 8) = 0;
								*(_DWORD *)(v138 + 12) = 0;
								*(_DWORD *)(v138 + 16) = 0;
								*(_DWORD *)(v138 + 20) = 0;
								v141 = *(int *)0xD71F48;
								*(_DWORD *)(v138 + 24) = *v674;
								*(_BYTE *)(v138 + 32) = 0;
								*(_DWORD *)(v138 + 28) = 0;
								*(_BYTE *)(v138 + 40) = 0;
								*(_DWORD *)(v138 + 36) = 0;
								*(_DWORD *)(v138 + 44) = 0;
								*(_DWORD *)(v138 + 52) = -1;
								*(_DWORD *)(v138 + 48) = 0;
								*(_DWORD *)(v138 + 64) = 0;
								*(_DWORD *)(v138 + 68) = 0;
								*(_DWORD *)(v138 + 72) = 0;
								*(_DWORD *)(v138 + 80) = 0;
								*(_DWORD *)(v138 + 88) = 0;
								*(_DWORD *)(v138 + 84) = 0;
								*(_DWORD *)(v138 + 76) = 1065353216;
								*(_DWORD *)(v138 + 92) = 1065353216;
								*(_DWORD *)(v138 + 100) = 0;
								*(_DWORD *)(v138 + 96) = 0;
								*(_DWORD *)v138 = v140;
								*(_DWORD *)v138 = v141;
								v142 = *v139;
								v777 = -256;
								v143 = GameCall<int>(0x9E9198, 0xd6ff70)(v142, 64, (int)&v777, 0, 0, v138 + 28, (int)v139, v138 + 64);
								*(_DWORD *)(v138 + 8) = v143;
								*(_DWORD *)v143 = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v138 + 8) + 60) = 0;
								*(_DWORD *)(v138 + 12) = 16;
								v776 = -256;
								v144 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v776);
								v5 = v138;
								*(_DWORD *)v144 = 0;
								*(_DWORD *)(v144 + 4) = 0;
								*(_DWORD *)(v144 + 8) = 0;
								*(_DWORD *)(v144 + 12) = 0;
								*(_DWORD *)(v144 + 20) = 0;
								*(_DWORD *)(v144 + 16) = 0;
								*(_DWORD *)(v144 + 32) = 0;
								*(_DWORD *)(v144 + 24) = 0;
								*(_DWORD *)(v144 + 28) = 0;
								*(_DWORD *)(v144 + 44) = 0;
								*(_DWORD *)(v144 + 36) = 0;
								*(_DWORD *)(v144 + 40) = 0;
								*(_DWORD *)(v144 + 56) = 0;
								*(_DWORD *)(v144 + 48) = 0;
								*(_DWORD *)(v144 + 52) = 0;
								*(_DWORD *)(v144 + 68) = 0;
								*(_DWORD *)(v144 + 60) = 0;
								*(_DWORD *)(v144 + 64) = 0;
								*(_DWORD *)(v144 + 80) = 0;
								*(_DWORD *)(v144 + 72) = 0;
								*(_DWORD *)(v144 + 76) = 0;
								*(_DWORD *)(v144 + 92) = 0;
								*(_DWORD *)(v144 + 84) = 0;
								*(_DWORD *)(v144 + 88) = 0;
								*(_DWORD *)(v144 + 104) = 0;
								*(_DWORD *)(v144 + 96) = 0;
								*(_DWORD *)(v144 + 100) = 0;
								*(_DWORD *)(v144 + 116) = 0;
								*(_DWORD *)(v144 + 108) = 0;
								*(_DWORD *)(v144 + 112) = 0;
								*(_DWORD *)(v144 + 128) = 0;
								*(_DWORD *)(v144 + 120) = 0;
								*(_DWORD *)(v144 + 124) = 0;
								*(_DWORD *)(v144 + 132) = 0;
								*(_DWORD *)(v144 + 140) = 0;
								*(_DWORD *)(v144 + 136) = 0;
								*(_DWORD *)(v144 + 152) = 0;
								*(_DWORD *)(v144 + 144) = 0;
								*(_DWORD *)(v144 + 148) = 0;
								*(_DWORD *)(v144 + 164) = 0;
								*(_DWORD *)(v144 + 156) = 0;
								*(_DWORD *)(v144 + 160) = 0;
								*(_DWORD *)(v144 + 176) = 0;
								*(_DWORD *)(v144 + 168) = 0;
								*(_DWORD *)(v144 + 172) = 0;
								*(_DWORD *)(v144 + 188) = 0;
								*(_DWORD *)(v144 + 180) = 0;
								*(_DWORD *)(v144 + 184) = 0;
								*(_DWORD *)(v138 + 16) = v144;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
							case 1131:
								v744 = -256;
								v286 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v744, HIDWORD(v868));
								v287 = (int *)*(int *)0xD71E60;
								v288 = *(int *)0xD71E58;
								*(_DWORD *)v286 = *(int *)0xD71F10;
								*(_DWORD *)(v286 + 4) = 0;
								*(_DWORD *)(v286 + 8) = 0;
								*(_DWORD *)(v286 + 12) = 0;
								*(_DWORD *)(v286 + 16) = 0;
								*(_DWORD *)(v286 + 20) = 0;
								v289 = *(int *)0xD71F3C;
								*(_DWORD *)(v286 + 24) = *v674;
								*(_BYTE *)(v286 + 32) = 0;
								*(_DWORD *)(v286 + 28) = 0;
								*(_BYTE *)(v286 + 40) = 0;
								*(_DWORD *)(v286 + 36) = 0;
								*(_DWORD *)(v286 + 44) = 0;
								*(_DWORD *)(v286 + 52) = -1;
								*(_DWORD *)(v286 + 48) = 0;
								*(_DWORD *)(v286 + 64) = 0;
								*(_DWORD *)(v286 + 68) = 0;
								*(_DWORD *)(v286 + 72) = 0;
								*(_DWORD *)(v286 + 80) = 0;
								*(_DWORD *)(v286 + 88) = 0;
								*(_DWORD *)(v286 + 84) = 0;
								*(_DWORD *)(v286 + 76) = 1065353216;
								*(_DWORD *)(v286 + 92) = 1065353216;
								*(_DWORD *)(v286 + 100) = 0;
								*(_DWORD *)(v286 + 96) = 0;
								*(_DWORD *)v286 = v288;
								*(_DWORD *)v286 = v289;
								v290 = *v287;
								v775 = -256;
								v291 = GameCall<int>(0x9E9198, 0xd6ff70)(v290, 64, (int)&v775, 0, 0, v286 + 28, (int)v287, v286 + 64);
								*(_DWORD *)(v286 + 8) = v291;
								*(_DWORD *)v291 = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v286 + 8) + 60) = 0;
								*(_DWORD *)(v286 + 12) = 16;
								v774 = -256;
								v292 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v774);
								v5 = v286;
								*(_DWORD *)v292 = 0;
								*(_DWORD *)(v292 + 4) = 0;
								*(_DWORD *)(v292 + 8) = 0;
								*(_DWORD *)(v292 + 12) = 0;
								*(_DWORD *)(v292 + 20) = 0;
								*(_DWORD *)(v292 + 16) = 0;
								*(_DWORD *)(v292 + 32) = 0;
								*(_DWORD *)(v292 + 24) = 0;
								*(_DWORD *)(v292 + 28) = 0;
								*(_DWORD *)(v292 + 44) = 0;
								*(_DWORD *)(v292 + 36) = 0;
								*(_DWORD *)(v292 + 40) = 0;
								*(_DWORD *)(v292 + 56) = 0;
								*(_DWORD *)(v292 + 48) = 0;
								*(_DWORD *)(v292 + 52) = 0;
								*(_DWORD *)(v292 + 68) = 0;
								*(_DWORD *)(v292 + 60) = 0;
								*(_DWORD *)(v292 + 64) = 0;
								*(_DWORD *)(v292 + 80) = 0;
								*(_DWORD *)(v292 + 72) = 0;
								*(_DWORD *)(v292 + 76) = 0;
								*(_DWORD *)(v292 + 92) = 0;
								*(_DWORD *)(v292 + 84) = 0;
								*(_DWORD *)(v292 + 88) = 0;
								*(_DWORD *)(v292 + 104) = 0;
								*(_DWORD *)(v292 + 96) = 0;
								*(_DWORD *)(v292 + 100) = 0;
								*(_DWORD *)(v292 + 116) = 0;
								*(_DWORD *)(v292 + 108) = 0;
								*(_DWORD *)(v292 + 112) = 0;
								*(_DWORD *)(v292 + 128) = 0;
								*(_DWORD *)(v292 + 120) = 0;
								*(_DWORD *)(v292 + 124) = 0;
								*(_DWORD *)(v292 + 132) = 0;
								*(_DWORD *)(v292 + 140) = 0;
								*(_DWORD *)(v292 + 136) = 0;
								*(_DWORD *)(v292 + 152) = 0;
								*(_DWORD *)(v292 + 144) = 0;
								*(_DWORD *)(v292 + 148) = 0;
								*(_DWORD *)(v292 + 164) = 0;
								*(_DWORD *)(v292 + 156) = 0;
								*(_DWORD *)(v292 + 160) = 0;
								*(_DWORD *)(v292 + 176) = 0;
								*(_DWORD *)(v292 + 168) = 0;
								*(_DWORD *)(v292 + 172) = 0;
								*(_DWORD *)(v292 + 188) = 0;
								*(_DWORD *)(v292 + 180) = 0;
								*(_DWORD *)(v292 + 184) = 0;
								*(_DWORD *)(v286 + 16) = v292;
								return v5;
							case 2011:
								v735 = -256;
								v462 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v735, HIDWORD(v868));
								*(_DWORD *)v462 = *(int *)0xD71F10;
								*(_DWORD *)(v462 + 4) = 0;
								*(_DWORD *)(v462 + 8) = 0;
								*(_DWORD *)(v462 + 12) = 0;
								*(_DWORD *)(v462 + 16) = 0;
								*(_DWORD *)(v462 + 20) = 0;
								v463 = *(int *)0xD71F24;
								*(_DWORD *)(v462 + 24) = *v674;
								*(_BYTE *)(v462 + 32) = 0;
								*(_DWORD *)(v462 + 28) = 0;
								*(_BYTE *)(v462 + 40) = 0;
								*(_DWORD *)(v462 + 36) = 0;
								*(_DWORD *)(v462 + 44) = 0;
								*(_DWORD *)(v462 + 52) = -1;
								*(_DWORD *)(v462 + 48) = 0;
								*(_DWORD *)(v462 + 76) = 1065353216;
								*(_DWORD *)(v462 + 64) = 0;
								*(_DWORD *)(v462 + 92) = 1065353216;
								*(_DWORD *)(v462 + 68) = 0;
								*(_DWORD *)(v462 + 72) = 0;
								*(_DWORD *)(v462 + 80) = 0;
								*(_DWORD *)(v462 + 88) = 0;
								*(_DWORD *)(v462 + 84) = 0;
								*(_DWORD *)(v462 + 100) = 0;
								*(_DWORD *)(v462 + 96) = 0;
								*(_DWORD *)v462 = v463;
								GameCall<int>(0xAA364C, 0xd6ff70)(v462, 30);
								v5 = v462;
								*(_DWORD *)v462 = *(int *)0xD71F40;
								return v5;
							case 1101:
								v743 = -256;
								v74 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v743, HIDWORD(v868));
								v75 = (int *)*(int *)0xD71E60;
								v76 = *(int *)0xD71E58;
								*(_DWORD *)v74 = *(int *)0xD71F10;
								*(_DWORD *)(v74 + 4) = 0;
								*(_DWORD *)(v74 + 8) = 0;
								*(_DWORD *)(v74 + 12) = 0;
								*(_DWORD *)(v74 + 16) = 0;
								*(_DWORD *)(v74 + 20) = 0;
								v77 = *(int *)0xD71F38;
								*(_DWORD *)(v74 + 24) = *v674;
								*(_BYTE *)(v74 + 32) = 0;
								*(_DWORD *)(v74 + 28) = 0;
								*(_BYTE *)(v74 + 40) = 0;
								*(_DWORD *)(v74 + 36) = 0;
								*(_DWORD *)(v74 + 44) = 0;
								*(_DWORD *)(v74 + 52) = -1;
								*(_DWORD *)(v74 + 48) = 0;
								*(_DWORD *)(v74 + 64) = 0;
								*(_DWORD *)(v74 + 68) = 0;
								*(_DWORD *)(v74 + 72) = 0;
								*(_DWORD *)(v74 + 80) = 0;
								*(_DWORD *)(v74 + 88) = 0;
								*(_DWORD *)(v74 + 84) = 0;
								*(_DWORD *)(v74 + 76) = 1065353216;
								*(_DWORD *)(v74 + 92) = 1065353216;
								*(_DWORD *)(v74 + 100) = 0;
								*(_DWORD *)(v74 + 96) = 0;
								*(_DWORD *)v74 = v76;
								*(_DWORD *)v74 = v77;
								v78 = *v75;
								v773 = -256;
								v79 = GameCall<int>(0x9E9198, 0xd6ff70)(v78, 64, (int)&v773, 0, 0, v74 + 28, (int)v75, v74 + 64);
								*(_DWORD *)(v74 + 8) = v79;
								*(_DWORD *)v79 = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v74 + 8) + 60) = 0;
								*(_DWORD *)(v74 + 12) = 16;
								v772 = -256;
								v80 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v772);
								v5 = v74;
								*(_DWORD *)v80 = 0;
								*(_DWORD *)(v80 + 4) = 0;
								*(_DWORD *)(v80 + 8) = 0;
								*(_DWORD *)(v80 + 12) = 0;
								*(_DWORD *)(v80 + 20) = 0;
								*(_DWORD *)(v80 + 16) = 0;
								*(_DWORD *)(v80 + 32) = 0;
								*(_DWORD *)(v80 + 24) = 0;
								*(_DWORD *)(v80 + 28) = 0;
								*(_DWORD *)(v80 + 44) = 0;
								*(_DWORD *)(v80 + 36) = 0;
								*(_DWORD *)(v80 + 40) = 0;
								*(_DWORD *)(v80 + 56) = 0;
								*(_DWORD *)(v80 + 48) = 0;
								*(_DWORD *)(v80 + 52) = 0;
								*(_DWORD *)(v80 + 68) = 0;
								*(_DWORD *)(v80 + 60) = 0;
								*(_DWORD *)(v80 + 64) = 0;
								*(_DWORD *)(v80 + 80) = 0;
								*(_DWORD *)(v80 + 72) = 0;
								*(_DWORD *)(v80 + 76) = 0;
								*(_DWORD *)(v80 + 92) = 0;
								*(_DWORD *)(v80 + 84) = 0;
								*(_DWORD *)(v80 + 88) = 0;
								*(_DWORD *)(v80 + 104) = 0;
								*(_DWORD *)(v80 + 96) = 0;
								*(_DWORD *)(v80 + 100) = 0;
								*(_DWORD *)(v80 + 116) = 0;
								*(_DWORD *)(v80 + 108) = 0;
								*(_DWORD *)(v80 + 112) = 0;
								*(_DWORD *)(v80 + 128) = 0;
								*(_DWORD *)(v80 + 120) = 0;
								*(_DWORD *)(v80 + 124) = 0;
								*(_DWORD *)(v80 + 132) = 0;
								*(_DWORD *)(v80 + 140) = 0;
								*(_DWORD *)(v80 + 136) = 0;
								*(_DWORD *)(v80 + 152) = 0;
								*(_DWORD *)(v80 + 144) = 0;
								*(_DWORD *)(v80 + 148) = 0;
								*(_DWORD *)(v80 + 164) = 0;
								*(_DWORD *)(v80 + 156) = 0;
								*(_DWORD *)(v80 + 160) = 0;
								*(_DWORD *)(v80 + 176) = 0;
								*(_DWORD *)(v80 + 168) = 0;
								*(_DWORD *)(v80 + 172) = 0;
								*(_DWORD *)(v80 + 188) = 0;
								*(_DWORD *)(v80 + 180) = 0;
								*(_DWORD *)(v80 + 184) = 0;
								*(_DWORD *)(v74 + 16) = v80;
								return v5;
							}
						}
					}
					else
					{
						if (v1 == 1041)
						{
							v738 = -256;
							v178 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v738, HIDWORD(v868));
							v179 = (int *)*(int *)0xD71E60;
							v180 = *(int *)0xD71E58;
							*(_DWORD *)v178 = *(int *)0xD71F10;
							*(_DWORD *)(v178 + 4) = 0;
							*(_DWORD *)(v178 + 8) = 0;
							*(_DWORD *)(v178 + 12) = 0;
							*(_DWORD *)(v178 + 16) = 0;
							*(_DWORD *)(v178 + 20) = 0;
							v181 = *(int *)0xD71F20;
							*(_DWORD *)(v178 + 24) = *v674;
							*(_BYTE *)(v178 + 32) = 0;
							*(_DWORD *)(v178 + 28) = 0;
							*(_BYTE *)(v178 + 40) = 0;
							*(_DWORD *)(v178 + 36) = 0;
							*(_DWORD *)(v178 + 44) = 0;
							*(_DWORD *)(v178 + 52) = -1;
							*(_DWORD *)(v178 + 48) = 0;
							*(_DWORD *)(v178 + 64) = 0;
							*(_DWORD *)(v178 + 68) = 0;
							*(_DWORD *)(v178 + 72) = 0;
							*(_DWORD *)(v178 + 80) = 0;
							*(_DWORD *)(v178 + 88) = 0;
							*(_DWORD *)(v178 + 84) = 0;
							*(_DWORD *)(v178 + 76) = 1065353216;
							*(_DWORD *)(v178 + 92) = 1065353216;
							*(_DWORD *)(v178 + 100) = 0;
							*(_DWORD *)(v178 + 96) = 0;
							*(_DWORD *)v178 = v180;
							*(_DWORD *)v178 = v181;
							v182 = *v179;
							v787 = -256;
							v183 = GameCall<int>(0x9E9198, 0xd6ff70)(v182, 64, (int)&v787, 0, 0, v178 + 80, (int)v179, v178 + 64);
							*(_DWORD *)(v178 + 8) = v183;
							*(_DWORD *)v183 = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 4) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 8) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 12) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 16) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 20) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 24) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 28) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 32) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 36) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 40) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 44) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 48) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 52) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 56) = 0;
							*(_DWORD *)(*(_DWORD *)(v178 + 8) + 60) = 0;
							*(_DWORD *)(v178 + 12) = 16;
							WORD2(v786) = -256;
							v184 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, (char *)&v786 + 4);
							v5 = v178;
							*(_DWORD *)v184 = 0;
							*(_DWORD *)(v184 + 4) = 0;
							*(_DWORD *)(v184 + 8) = 0;
							*(_DWORD *)(v184 + 12) = 0;
							*(_DWORD *)(v184 + 20) = 0;
							*(_DWORD *)(v184 + 16) = 0;
							*(_DWORD *)(v184 + 32) = 0;
							*(_DWORD *)(v184 + 24) = 0;
							*(_DWORD *)(v184 + 28) = 0;
							*(_DWORD *)(v184 + 44) = 0;
							*(_DWORD *)(v184 + 36) = 0;
							*(_DWORD *)(v184 + 40) = 0;
							*(_DWORD *)(v184 + 56) = 0;
							*(_DWORD *)(v184 + 48) = 0;
							*(_DWORD *)(v184 + 52) = 0;
							*(_DWORD *)(v184 + 68) = 0;
							*(_DWORD *)(v184 + 60) = 0;
							*(_DWORD *)(v184 + 64) = 0;
							*(_DWORD *)(v184 + 80) = 0;
							*(_DWORD *)(v184 + 72) = 0;
							*(_DWORD *)(v184 + 76) = 0;
							*(_DWORD *)(v184 + 92) = 0;
							*(_DWORD *)(v184 + 84) = 0;
							*(_DWORD *)(v184 + 88) = 0;
							*(_DWORD *)(v184 + 104) = 0;
							*(_DWORD *)(v184 + 96) = 0;
							*(_DWORD *)(v184 + 100) = 0;
							*(_DWORD *)(v184 + 116) = 0;
							*(_DWORD *)(v184 + 108) = 0;
							*(_DWORD *)(v184 + 112) = 0;
							*(_DWORD *)(v184 + 128) = 0;
							*(_DWORD *)(v184 + 120) = 0;
							*(_DWORD *)(v184 + 124) = 0;
							*(_DWORD *)(v184 + 132) = 0;
							*(_DWORD *)(v184 + 140) = 0;
							*(_DWORD *)(v184 + 136) = 0;
							*(_DWORD *)(v184 + 152) = 0;
							*(_DWORD *)(v184 + 144) = 0;
							*(_DWORD *)(v184 + 148) = 0;
							*(_DWORD *)(v184 + 164) = 0;
							*(_DWORD *)(v184 + 156) = 0;
							*(_DWORD *)(v184 + 160) = 0;
							*(_DWORD *)(v184 + 176) = 0;
							*(_DWORD *)(v184 + 168) = 0;
							*(_DWORD *)(v184 + 172) = 0;
							*(_DWORD *)(v184 + 188) = 0;
							*(_DWORD *)(v184 + 180) = 0;
							*(_DWORD *)(v184 + 184) = 0;
							*(_DWORD *)(v178 + 16) = v184;
							return v5;
						}
						if (v1 > 1041)
						{
							switch (v1)
							{
							case 1071:
								v740 = -256;
								v305 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v740, HIDWORD(v868));
								v306 = (int *)*(int *)0xD71E60;
								v307 = *(int *)0xD71E58;
								*(_DWORD *)v305 = *(int *)0xD71F10;
								*(_DWORD *)(v305 + 4) = 0;
								*(_DWORD *)(v305 + 8) = 0;
								*(_DWORD *)(v305 + 12) = 0;
								*(_DWORD *)(v305 + 16) = 0;
								*(_DWORD *)(v305 + 20) = 0;
								v308 = *(int *)0xD71F2C;
								*(_DWORD *)(v305 + 24) = *v674;
								*(_BYTE *)(v305 + 32) = 0;
								*(_DWORD *)(v305 + 28) = 0;
								*(_BYTE *)(v305 + 40) = 0;
								*(_DWORD *)(v305 + 36) = 0;
								*(_DWORD *)(v305 + 44) = 0;
								*(_DWORD *)(v305 + 52) = -1;
								*(_DWORD *)(v305 + 48) = 0;
								*(_DWORD *)(v305 + 64) = 0;
								*(_DWORD *)(v305 + 68) = 0;
								*(_DWORD *)(v305 + 72) = 0;
								*(_DWORD *)(v305 + 80) = 0;
								*(_DWORD *)(v305 + 88) = 0;
								*(_DWORD *)(v305 + 84) = 0;
								*(_DWORD *)(v305 + 76) = 1065353216;
								*(_DWORD *)(v305 + 92) = 1065353216;
								*(_DWORD *)(v305 + 100) = 0;
								*(_DWORD *)(v305 + 96) = 0;
								*(_DWORD *)v305 = v307;
								*(_DWORD *)v305 = v308;
								v309 = *v306;
								HIWORD(v789) = -256;
								v310 = GameCall<int>(0x9E9198, 0xd6ff70)(v309, 64, (int)&v789, 0, 0, v305 + 28, (int)v306, v305 + 64);
								*(_DWORD *)(v305 + 8) = v310;
								*(_DWORD *)v310 = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v305 + 8) + 60) = 0;
								*(_DWORD *)(v305 + 12) = 16;
								v788 = -256;
								v311 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v788);
								v5 = v305;
								*(_DWORD *)v311 = 0;
								*(_DWORD *)(v311 + 4) = 0;
								*(_DWORD *)(v311 + 8) = 0;
								*(_DWORD *)(v311 + 12) = 0;
								*(_DWORD *)(v311 + 20) = 0;
								*(_DWORD *)(v311 + 16) = 0;
								*(_DWORD *)(v311 + 32) = 0;
								*(_DWORD *)(v311 + 24) = 0;
								*(_DWORD *)(v311 + 28) = 0;
								*(_DWORD *)(v311 + 44) = 0;
								*(_DWORD *)(v311 + 36) = 0;
								*(_DWORD *)(v311 + 40) = 0;
								*(_DWORD *)(v311 + 56) = 0;
								*(_DWORD *)(v311 + 48) = 0;
								*(_DWORD *)(v311 + 52) = 0;
								*(_DWORD *)(v311 + 68) = 0;
								*(_DWORD *)(v311 + 60) = 0;
								*(_DWORD *)(v311 + 64) = 0;
								*(_DWORD *)(v311 + 80) = 0;
								*(_DWORD *)(v311 + 72) = 0;
								*(_DWORD *)(v311 + 76) = 0;
								*(_DWORD *)(v311 + 92) = 0;
								*(_DWORD *)(v311 + 84) = 0;
								*(_DWORD *)(v311 + 88) = 0;
								*(_DWORD *)(v311 + 104) = 0;
								*(_DWORD *)(v311 + 96) = 0;
								*(_DWORD *)(v311 + 100) = 0;
								*(_DWORD *)(v311 + 116) = 0;
								*(_DWORD *)(v311 + 108) = 0;
								*(_DWORD *)(v311 + 112) = 0;
								*(_DWORD *)(v311 + 128) = 0;
								*(_DWORD *)(v311 + 120) = 0;
								*(_DWORD *)(v311 + 124) = 0;
								*(_DWORD *)(v311 + 132) = 0;
								*(_DWORD *)(v311 + 140) = 0;
								*(_DWORD *)(v311 + 136) = 0;
								*(_DWORD *)(v311 + 152) = 0;
								*(_DWORD *)(v311 + 144) = 0;
								*(_DWORD *)(v311 + 148) = 0;
								*(_DWORD *)(v311 + 164) = 0;
								*(_DWORD *)(v311 + 156) = 0;
								*(_DWORD *)(v311 + 160) = 0;
								*(_DWORD *)(v311 + 176) = 0;
								*(_DWORD *)(v311 + 168) = 0;
								*(_DWORD *)(v311 + 172) = 0;
								*(_DWORD *)(v311 + 188) = 0;
								*(_DWORD *)(v311 + 180) = 0;
								*(_DWORD *)(v311 + 184) = 0;
								*(_DWORD *)(v305 + 16) = v311;
								return v5;
							case 1081:
								v741 = -256;
								v432 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v741, HIDWORD(v868));
								v433 = (int *)*(int *)0xD71E60;
								v434 = *(int *)0xD71E58;
								*(_DWORD *)v432 = *(int *)0xD71F10;
								*(_DWORD *)(v432 + 4) = 0;
								*(_DWORD *)(v432 + 8) = 0;
								*(_DWORD *)(v432 + 12) = 0;
								*(_DWORD *)(v432 + 16) = 0;
								*(_DWORD *)(v432 + 20) = 0;
								v435 = *(int *)0xD71F30;
								*(_DWORD *)(v432 + 24) = *v674;
								*(_BYTE *)(v432 + 32) = 0;
								*(_DWORD *)(v432 + 28) = 0;
								*(_BYTE *)(v432 + 40) = 0;
								*(_DWORD *)(v432 + 36) = 0;
								*(_DWORD *)(v432 + 44) = 0;
								*(_DWORD *)(v432 + 52) = -1;
								*(_DWORD *)(v432 + 48) = 0;
								*(_DWORD *)(v432 + 64) = 0;
								*(_DWORD *)(v432 + 68) = 0;
								*(_DWORD *)(v432 + 72) = 0;
								*(_DWORD *)(v432 + 80) = 0;
								*(_DWORD *)(v432 + 88) = 0;
								*(_DWORD *)(v432 + 84) = 0;
								*(_DWORD *)(v432 + 76) = 1065353216;
								*(_DWORD *)(v432 + 92) = 1065353216;
								*(_DWORD *)(v432 + 100) = 0;
								*(_DWORD *)(v432 + 96) = 0;
								*(_DWORD *)v432 = v434;
								*(_DWORD *)v432 = v435;
								v436 = *v433;
								v781 = -256;
								v437 = GameCall<int>(0x9E9198, 0xd6ff70)(v436, 64, (int)&v781, 0, 0, v432 + 28, (int)v433, v432 + 64);
								*(_DWORD *)(v432 + 8) = v437;
								*(_DWORD *)v437 = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v432 + 8) + 60) = 0;
								*(_DWORD *)(v432 + 12) = 16;
								v782 = -256;
								v438 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v782);
								v5 = v432;
								*(_DWORD *)v438 = 0;
								*(_DWORD *)(v438 + 4) = 0;
								*(_DWORD *)(v438 + 8) = 0;
								*(_DWORD *)(v438 + 12) = 0;
								*(_DWORD *)(v438 + 20) = 0;
								*(_DWORD *)(v438 + 16) = 0;
								*(_DWORD *)(v438 + 32) = 0;
								*(_DWORD *)(v438 + 24) = 0;
								*(_DWORD *)(v438 + 28) = 0;
								*(_DWORD *)(v438 + 44) = 0;
								*(_DWORD *)(v438 + 36) = 0;
								*(_DWORD *)(v438 + 40) = 0;
								*(_DWORD *)(v438 + 56) = 0;
								*(_DWORD *)(v438 + 48) = 0;
								*(_DWORD *)(v438 + 52) = 0;
								*(_DWORD *)(v438 + 68) = 0;
								*(_DWORD *)(v438 + 60) = 0;
								*(_DWORD *)(v438 + 64) = 0;
								*(_DWORD *)(v438 + 80) = 0;
								*(_DWORD *)(v438 + 72) = 0;
								*(_DWORD *)(v438 + 76) = 0;
								*(_DWORD *)(v438 + 92) = 0;
								*(_DWORD *)(v438 + 84) = 0;
								*(_DWORD *)(v438 + 88) = 0;
								*(_DWORD *)(v438 + 104) = 0;
								*(_DWORD *)(v438 + 96) = 0;
								*(_DWORD *)(v438 + 100) = 0;
								*(_DWORD *)(v438 + 116) = 0;
								*(_DWORD *)(v438 + 108) = 0;
								*(_DWORD *)(v438 + 112) = 0;
								*(_DWORD *)(v438 + 128) = 0;
								*(_DWORD *)(v438 + 120) = 0;
								*(_DWORD *)(v438 + 124) = 0;
								*(_DWORD *)(v438 + 132) = 0;
								*(_DWORD *)(v438 + 140) = 0;
								*(_DWORD *)(v438 + 136) = 0;
								*(_DWORD *)(v438 + 152) = 0;
								*(_DWORD *)(v438 + 144) = 0;
								*(_DWORD *)(v438 + 148) = 0;
								*(_DWORD *)(v438 + 164) = 0;
								*(_DWORD *)(v438 + 156) = 0;
								*(_DWORD *)(v438 + 160) = 0;
								*(_DWORD *)(v438 + 176) = 0;
								*(_DWORD *)(v438 + 168) = 0;
								*(_DWORD *)(v438 + 172) = 0;
								*(_DWORD *)(v438 + 188) = 0;
								*(_DWORD *)(v438 + 180) = 0;
								*(_DWORD *)(v438 + 184) = 0;
								*(_DWORD *)(v432 + 16) = v438;
								return v5;
							case 1051:
								v739 = -256;
								v176 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v739, HIDWORD(v868));
								*(_DWORD *)v176 = *(int *)0xD71F10;
								*(_DWORD *)(v176 + 4) = 0;
								*(_DWORD *)(v176 + 8) = 0;
								*(_DWORD *)(v176 + 12) = 0;
								*(_DWORD *)(v176 + 16) = 0;
								*(_DWORD *)(v176 + 20) = 0;
								v177 = *(int *)0xD71F24;
								*(_DWORD *)(v176 + 24) = *v674;
								*(_BYTE *)(v176 + 32) = 0;
								*(_DWORD *)(v176 + 28) = 0;
								*(_BYTE *)(v176 + 40) = 0;
								*(_DWORD *)(v176 + 36) = 0;
								*(_DWORD *)(v176 + 44) = 0;
								*(_DWORD *)(v176 + 52) = -1;
								*(_DWORD *)(v176 + 48) = 0;
								*(_DWORD *)(v176 + 76) = 1065353216;
								*(_DWORD *)(v176 + 64) = 0;
								*(_DWORD *)(v176 + 92) = 1065353216;
								*(_DWORD *)(v176 + 68) = 0;
								*(_DWORD *)(v176 + 72) = 0;
								*(_DWORD *)(v176 + 80) = 0;
								*(_DWORD *)(v176 + 88) = 0;
								*(_DWORD *)(v176 + 84) = 0;
								*(_DWORD *)(v176 + 100) = 0;
								*(_DWORD *)(v176 + 96) = 0;
								*(_DWORD *)v176 = v177;
								GameCall<int>(0xAA364C, 0xd6ff70)(v176, 30);
								v5 = v176;
								*(_DWORD *)v176 = *(int *)0xD71F28;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
							case 1021:
								v736 = -256;
								v312 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v736, HIDWORD(v868));
								v313 = (int *)*(int *)0xD71E60;
								v314 = *(int *)0xD71E58;
								*(_DWORD *)v312 = *(int *)0xD71F10;
								*(_DWORD *)(v312 + 4) = 0;
								*(_DWORD *)(v312 + 8) = 0;
								*(_DWORD *)(v312 + 12) = 0;
								*(_DWORD *)(v312 + 16) = 0;
								*(_DWORD *)(v312 + 20) = 0;
								v315 = *(int *)0xD71F18;
								*(_DWORD *)(v312 + 24) = *v674;
								*(_BYTE *)(v312 + 32) = 0;
								*(_DWORD *)(v312 + 28) = 0;
								*(_BYTE *)(v312 + 40) = 0;
								*(_DWORD *)(v312 + 36) = 0;
								*(_DWORD *)(v312 + 44) = 0;
								*(_DWORD *)(v312 + 52) = -1;
								*(_DWORD *)(v312 + 48) = 0;
								*(_DWORD *)(v312 + 64) = 0;
								*(_DWORD *)(v312 + 68) = 0;
								*(_DWORD *)(v312 + 72) = 0;
								*(_DWORD *)(v312 + 80) = 0;
								*(_DWORD *)(v312 + 88) = 0;
								*(_DWORD *)(v312 + 84) = 0;
								*(_DWORD *)(v312 + 76) = 1065353216;
								*(_DWORD *)(v312 + 92) = 1065353216;
								*(_DWORD *)(v312 + 100) = 0;
								*(_DWORD *)(v312 + 96) = 0;
								*(_DWORD *)v312 = v314;
								*(_DWORD *)v312 = v315;
								v316 = *v313;
								HIWORD(v785) = -256;
								v317 = GameCall<int>(0x9E9198, 0xd6ff70)(v316, 64, (int)&v785, 0, 0, v312 + 28, (int)v313, v312 + 64);
								*(_DWORD *)(v312 + 8) = v317;
								*(_DWORD *)v317 = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v312 + 8) + 60) = 0;
								*(_DWORD *)(v312 + 12) = 16;
								v784 = -256;
								v318 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v784);
								v5 = v312;
								*(_DWORD *)v318 = 0;
								*(_DWORD *)(v318 + 4) = 0;
								*(_DWORD *)(v318 + 8) = 0;
								*(_DWORD *)(v318 + 12) = 0;
								*(_DWORD *)(v318 + 20) = 0;
								*(_DWORD *)(v318 + 16) = 0;
								*(_DWORD *)(v318 + 32) = 0;
								*(_DWORD *)(v318 + 24) = 0;
								*(_DWORD *)(v318 + 28) = 0;
								*(_DWORD *)(v318 + 44) = 0;
								*(_DWORD *)(v318 + 36) = 0;
								*(_DWORD *)(v318 + 40) = 0;
								*(_DWORD *)(v318 + 56) = 0;
								*(_DWORD *)(v318 + 48) = 0;
								*(_DWORD *)(v318 + 52) = 0;
								*(_DWORD *)(v318 + 68) = 0;
								*(_DWORD *)(v318 + 60) = 0;
								*(_DWORD *)(v318 + 64) = 0;
								*(_DWORD *)(v318 + 80) = 0;
								*(_DWORD *)(v318 + 72) = 0;
								*(_DWORD *)(v318 + 76) = 0;
								*(_DWORD *)(v318 + 92) = 0;
								*(_DWORD *)(v318 + 84) = 0;
								*(_DWORD *)(v318 + 88) = 0;
								*(_DWORD *)(v318 + 104) = 0;
								*(_DWORD *)(v318 + 96) = 0;
								*(_DWORD *)(v318 + 100) = 0;
								*(_DWORD *)(v318 + 116) = 0;
								*(_DWORD *)(v318 + 108) = 0;
								*(_DWORD *)(v318 + 112) = 0;
								*(_DWORD *)(v318 + 128) = 0;
								*(_DWORD *)(v318 + 120) = 0;
								*(_DWORD *)(v318 + 124) = 0;
								*(_DWORD *)(v318 + 132) = 0;
								*(_DWORD *)(v318 + 140) = 0;
								*(_DWORD *)(v318 + 136) = 0;
								*(_DWORD *)(v318 + 152) = 0;
								*(_DWORD *)(v318 + 144) = 0;
								*(_DWORD *)(v318 + 148) = 0;
								*(_DWORD *)(v318 + 164) = 0;
								*(_DWORD *)(v318 + 156) = 0;
								*(_DWORD *)(v318 + 160) = 0;
								*(_DWORD *)(v318 + 176) = 0;
								*(_DWORD *)(v318 + 168) = 0;
								*(_DWORD *)(v318 + 172) = 0;
								*(_DWORD *)(v318 + 188) = 0;
								*(_DWORD *)(v318 + 180) = 0;
								*(_DWORD *)(v318 + 184) = 0;
								*(_DWORD *)(v312 + 16) = v318;
								return v5;
							case 1031:
								v737 = -256;
								v439 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v737, HIDWORD(v868));
								v440 = (int *)*(int *)0xD71E60;
								v441 = *(int *)0xD71E58;
								*(_DWORD *)v439 = *(int *)0xD71F10;
								*(_DWORD *)(v439 + 4) = 0;
								*(_DWORD *)(v439 + 8) = 0;
								*(_DWORD *)(v439 + 12) = 0;
								*(_DWORD *)(v439 + 16) = 0;
								*(_DWORD *)(v439 + 20) = 0;
								v442 = *(int *)0xD71F1C;
								*(_DWORD *)(v439 + 24) = *v674;
								*(_BYTE *)(v439 + 32) = 0;
								*(_DWORD *)(v439 + 28) = 0;
								*(_BYTE *)(v439 + 40) = 0;
								*(_DWORD *)(v439 + 36) = 0;
								*(_DWORD *)(v439 + 44) = 0;
								*(_DWORD *)(v439 + 52) = -1;
								*(_DWORD *)(v439 + 48) = 0;
								*(_DWORD *)(v439 + 64) = 0;
								*(_DWORD *)(v439 + 68) = 0;
								*(_DWORD *)(v439 + 72) = 0;
								*(_DWORD *)(v439 + 80) = 0;
								*(_DWORD *)(v439 + 88) = 0;
								*(_DWORD *)(v439 + 84) = 0;
								*(_DWORD *)(v439 + 76) = 1065353216;
								*(_DWORD *)(v439 + 92) = 1065353216;
								*(_DWORD *)(v439 + 100) = 0;
								*(_DWORD *)(v439 + 96) = 0;
								*(_DWORD *)v439 = v441;
								*(_DWORD *)v439 = v442;
								v443 = *v440;
								HIWORD(v786) = -256;
								v444 = GameCall<int>(0x9E9198, 0xd6ff70)(v443, 64, (int)&v786, 0, 0, v439 + 28, (int)v440, v439 + 64);
								*(_DWORD *)(v439 + 8) = v444;
								*(_DWORD *)v444 = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v439 + 8) + 60) = 0;
								*(_DWORD *)(v439 + 12) = 16;
								WORD2(v785) = -256;
								v445 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, (char *)&v785 + 4);
								v5 = v439;
								*(_DWORD *)v445 = 0;
								*(_DWORD *)(v445 + 4) = 0;
								*(_DWORD *)(v445 + 8) = 0;
								*(_DWORD *)(v445 + 12) = 0;
								*(_DWORD *)(v445 + 20) = 0;
								*(_DWORD *)(v445 + 16) = 0;
								*(_DWORD *)(v445 + 32) = 0;
								*(_DWORD *)(v445 + 24) = 0;
								*(_DWORD *)(v445 + 28) = 0;
								*(_DWORD *)(v445 + 44) = 0;
								*(_DWORD *)(v445 + 36) = 0;
								*(_DWORD *)(v445 + 40) = 0;
								*(_DWORD *)(v445 + 56) = 0;
								*(_DWORD *)(v445 + 48) = 0;
								*(_DWORD *)(v445 + 52) = 0;
								*(_DWORD *)(v445 + 68) = 0;
								*(_DWORD *)(v445 + 60) = 0;
								*(_DWORD *)(v445 + 64) = 0;
								*(_DWORD *)(v445 + 80) = 0;
								*(_DWORD *)(v445 + 72) = 0;
								*(_DWORD *)(v445 + 76) = 0;
								*(_DWORD *)(v445 + 92) = 0;
								*(_DWORD *)(v445 + 84) = 0;
								*(_DWORD *)(v445 + 88) = 0;
								*(_DWORD *)(v445 + 104) = 0;
								*(_DWORD *)(v445 + 96) = 0;
								*(_DWORD *)(v445 + 100) = 0;
								*(_DWORD *)(v445 + 116) = 0;
								*(_DWORD *)(v445 + 108) = 0;
								*(_DWORD *)(v445 + 112) = 0;
								*(_DWORD *)(v445 + 128) = 0;
								*(_DWORD *)(v445 + 120) = 0;
								*(_DWORD *)(v445 + 124) = 0;
								*(_DWORD *)(v445 + 132) = 0;
								*(_DWORD *)(v445 + 140) = 0;
								*(_DWORD *)(v445 + 136) = 0;
								*(_DWORD *)(v445 + 152) = 0;
								*(_DWORD *)(v445 + 144) = 0;
								*(_DWORD *)(v445 + 148) = 0;
								*(_DWORD *)(v445 + 164) = 0;
								*(_DWORD *)(v445 + 156) = 0;
								*(_DWORD *)(v445 + 160) = 0;
								*(_DWORD *)(v445 + 176) = 0;
								*(_DWORD *)(v445 + 168) = 0;
								*(_DWORD *)(v445 + 172) = 0;
								*(_DWORD *)(v445 + 188) = 0;
								*(_DWORD *)(v445 + 180) = 0;
								*(_DWORD *)(v445 + 184) = 0;
								*(_DWORD *)(v439 + 16) = v445;
								return v5;
							case 1011:
								v857 = -256;
								v32 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v857, HIDWORD(v868));
								v33 = (int *)*(int *)0xD71E60;
								v34 = *(int *)0xD71E58;
								*(_DWORD *)v32 = *(int *)0xD71F10;
								*(_DWORD *)(v32 + 4) = 0;
								*(_DWORD *)(v32 + 8) = 0;
								*(_DWORD *)(v32 + 12) = 0;
								*(_DWORD *)(v32 + 16) = 0;
								*(_DWORD *)(v32 + 20) = 0;
								v35 = *(int *)0xD71F14;
								*(_DWORD *)(v32 + 24) = *v674;
								*(_BYTE *)(v32 + 32) = 0;
								*(_DWORD *)(v32 + 28) = 0;
								*(_BYTE *)(v32 + 40) = 0;
								*(_DWORD *)(v32 + 36) = 0;
								*(_DWORD *)(v32 + 44) = 0;
								*(_DWORD *)(v32 + 52) = -1;
								*(_DWORD *)(v32 + 48) = 0;
								*(_DWORD *)(v32 + 64) = 0;
								*(_DWORD *)(v32 + 68) = 0;
								*(_DWORD *)(v32 + 72) = 0;
								*(_DWORD *)(v32 + 80) = 0;
								*(_DWORD *)(v32 + 88) = 0;
								*(_DWORD *)(v32 + 84) = 0;
								*(_DWORD *)(v32 + 76) = 1065353216;
								*(_DWORD *)(v32 + 92) = 1065353216;
								*(_DWORD *)(v32 + 100) = 0;
								*(_DWORD *)(v32 + 96) = 0;
								*(_DWORD *)v32 = v34;
								*(_DWORD *)v32 = v35;
								v36 = *v33;
								v783 = -256;
								v37 = GameCall<int>(0x9E9198, 0xd6ff70)(v36, 64, (int)&v783, 0, 0, v32 + 28, (int)v33, v32 + 64);
								*(_DWORD *)(v32 + 8) = v37;
								*(_DWORD *)v37 = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v32 + 8) + 60) = 0;
								*(_DWORD *)(v32 + 12) = 16;
								v811 = -256;
								v38 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v811);
								v5 = v32;
								*(_DWORD *)v38 = 0;
								*(_DWORD *)(v38 + 4) = 0;
								*(_DWORD *)(v38 + 8) = 0;
								*(_DWORD *)(v38 + 12) = 0;
								*(_DWORD *)(v38 + 20) = 0;
								*(_DWORD *)(v38 + 16) = 0;
								*(_DWORD *)(v38 + 32) = 0;
								*(_DWORD *)(v38 + 24) = 0;
								*(_DWORD *)(v38 + 28) = 0;
								*(_DWORD *)(v38 + 44) = 0;
								*(_DWORD *)(v38 + 36) = 0;
								*(_DWORD *)(v38 + 40) = 0;
								*(_DWORD *)(v38 + 56) = 0;
								*(_DWORD *)(v38 + 48) = 0;
								*(_DWORD *)(v38 + 52) = 0;
								*(_DWORD *)(v38 + 68) = 0;
								*(_DWORD *)(v38 + 60) = 0;
								*(_DWORD *)(v38 + 64) = 0;
								*(_DWORD *)(v38 + 80) = 0;
								*(_DWORD *)(v38 + 72) = 0;
								*(_DWORD *)(v38 + 76) = 0;
								*(_DWORD *)(v38 + 92) = 0;
								*(_DWORD *)(v38 + 84) = 0;
								*(_DWORD *)(v38 + 88) = 0;
								*(_DWORD *)(v38 + 104) = 0;
								*(_DWORD *)(v38 + 96) = 0;
								*(_DWORD *)(v38 + 100) = 0;
								*(_DWORD *)(v38 + 116) = 0;
								*(_DWORD *)(v38 + 108) = 0;
								*(_DWORD *)(v38 + 112) = 0;
								*(_DWORD *)(v38 + 128) = 0;
								*(_DWORD *)(v38 + 120) = 0;
								*(_DWORD *)(v38 + 124) = 0;
								*(_DWORD *)(v38 + 132) = 0;
								*(_DWORD *)(v38 + 140) = 0;
								*(_DWORD *)(v38 + 136) = 0;
								*(_DWORD *)(v38 + 152) = 0;
								*(_DWORD *)(v38 + 144) = 0;
								*(_DWORD *)(v38 + 148) = 0;
								*(_DWORD *)(v38 + 164) = 0;
								*(_DWORD *)(v38 + 156) = 0;
								*(_DWORD *)(v38 + 160) = 0;
								*(_DWORD *)(v38 + 176) = 0;
								*(_DWORD *)(v38 + 168) = 0;
								*(_DWORD *)(v38 + 172) = 0;
								*(_DWORD *)(v38 + 188) = 0;
								*(_DWORD *)(v38 + 180) = 0;
								*(_DWORD *)(v38 + 184) = 0;
								*(_DWORD *)(v32 + 16) = v38;
								return v5;
							}
						}
					}
				}
				else
				{
					if (v1 == 4021)
					{
						v760 = -256;
						v101 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v760, HIDWORD(v868));
						v102 = (int *)*(int *)0xD71E60;
						v103 = *(int *)0xD71E58;
						*(_DWORD *)v101 = *(int *)0xD71F10;
						*(_DWORD *)(v101 + 4) = 0;
						*(_DWORD *)(v101 + 8) = 0;
						*(_DWORD *)(v101 + 12) = 0;
						*(_DWORD *)(v101 + 16) = 0;
						*(_DWORD *)(v101 + 20) = 0;
						v104 = *(int *)0xD71F7C;
						*(_DWORD *)(v101 + 24) = *v674;
						*(_BYTE *)(v101 + 32) = 0;
						*(_DWORD *)(v101 + 28) = 0;
						*(_BYTE *)(v101 + 40) = 0;
						*(_DWORD *)(v101 + 36) = 0;
						*(_DWORD *)(v101 + 44) = 0;
						*(_DWORD *)(v101 + 52) = -1;
						*(_DWORD *)(v101 + 48) = 0;
						*(_DWORD *)(v101 + 64) = 0;
						*(_DWORD *)(v101 + 68) = 0;
						*(_DWORD *)(v101 + 72) = 0;
						*(_DWORD *)(v101 + 80) = 0;
						*(_DWORD *)(v101 + 88) = 0;
						*(_DWORD *)(v101 + 84) = 0;
						*(_DWORD *)(v101 + 76) = 1065353216;
						*(_DWORD *)(v101 + 92) = 1065353216;
						*(_DWORD *)(v101 + 100) = 0;
						*(_DWORD *)(v101 + 96) = 0;
						*(_DWORD *)v101 = v103;
						*(_DWORD *)v101 = v104;
						v105 = *v102;
						v805 = -256;
						v106 = GameCall<int>(0x9E9198, 0xd6ff70)(v105, 64, (int)&v805, 0, 0, v101 + 80, (int)v102, v101 + 64);
						*(_DWORD *)(v101 + 8) = v106;
						*(_DWORD *)v106 = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 4) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 8) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 12) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 16) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 20) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 24) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 28) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 32) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 36) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 40) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 44) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 48) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 52) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 56) = 0;
						*(_DWORD *)(*(_DWORD *)(v101 + 8) + 60) = 0;
						*(_DWORD *)(v101 + 12) = 16;
						v804 = -256;
						v107 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v804);
						v5 = v101;
						*(_DWORD *)v107 = 0;
						*(_DWORD *)(v107 + 4) = 0;
						*(_DWORD *)(v107 + 8) = 0;
						*(_DWORD *)(v107 + 12) = 0;
						*(_DWORD *)(v107 + 20) = 0;
						*(_DWORD *)(v107 + 16) = 0;
						*(_DWORD *)(v107 + 32) = 0;
						*(_DWORD *)(v107 + 24) = 0;
						*(_DWORD *)(v107 + 28) = 0;
						*(_DWORD *)(v107 + 44) = 0;
						*(_DWORD *)(v107 + 36) = 0;
						*(_DWORD *)(v107 + 40) = 0;
						*(_DWORD *)(v107 + 56) = 0;
						*(_DWORD *)(v107 + 48) = 0;
						*(_DWORD *)(v107 + 52) = 0;
						*(_DWORD *)(v107 + 68) = 0;
						*(_DWORD *)(v107 + 60) = 0;
						*(_DWORD *)(v107 + 64) = 0;
						*(_DWORD *)(v107 + 80) = 0;
						*(_DWORD *)(v107 + 72) = 0;
						*(_DWORD *)(v107 + 76) = 0;
						*(_DWORD *)(v107 + 92) = 0;
						*(_DWORD *)(v107 + 84) = 0;
						*(_DWORD *)(v107 + 88) = 0;
						*(_DWORD *)(v107 + 104) = 0;
						*(_DWORD *)(v107 + 96) = 0;
						*(_DWORD *)(v107 + 100) = 0;
						*(_DWORD *)(v107 + 116) = 0;
						*(_DWORD *)(v107 + 108) = 0;
						*(_DWORD *)(v107 + 112) = 0;
						*(_DWORD *)(v107 + 128) = 0;
						*(_DWORD *)(v107 + 120) = 0;
						*(_DWORD *)(v107 + 124) = 0;
						*(_DWORD *)(v107 + 132) = 0;
						*(_DWORD *)(v107 + 140) = 0;
						*(_DWORD *)(v107 + 136) = 0;
						*(_DWORD *)(v107 + 152) = 0;
						*(_DWORD *)(v107 + 144) = 0;
						*(_DWORD *)(v107 + 148) = 0;
						*(_DWORD *)(v107 + 164) = 0;
						*(_DWORD *)(v107 + 156) = 0;
						*(_DWORD *)(v107 + 160) = 0;
						*(_DWORD *)(v107 + 176) = 0;
						*(_DWORD *)(v107 + 168) = 0;
						*(_DWORD *)(v107 + 172) = 0;
						*(_DWORD *)(v107 + 188) = 0;
						*(_DWORD *)(v107 + 180) = 0;
						*(_DWORD *)(v107 + 184) = 0;
						*(_DWORD *)(v101 + 16) = v107;
						return v5;
					}
					if (v1 > 4021)
					{
						// MBON Gundam DX
						if (v1 == 7011) 
						{
							double_x_init();
							v756 = -256;
							v464 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v756, HIDWORD(v868));
							v465 = *(int *)0xD71E58;
							*(_DWORD *)v464 = *(int *)0xD71F10;
							*(_DWORD *)(v464 + 4) = 0;
							*(_DWORD *)(v464 + 8) = 0;
							*(_DWORD *)(v464 + 12) = 0;
							*(_DWORD *)(v464 + 16) = 0;
							*(_DWORD *)(v464 + 20) = 0;
							v466 = (int)unit_initializations_func_scripts;
							*(_DWORD *)(v464 + 24) = *v674;
							*(_BYTE *)(v464 + 32) = 0;
							*(_DWORD *)(v464 + 28) = 0;
							*(_BYTE *)(v464 + 40) = 0;
							*(_DWORD *)(v464 + 36) = 0;
							*(_DWORD *)(v464 + 44) = 0;
							*(_DWORD *)(v464 + 52) = -1;
							*(_DWORD *)(v464 + 48) = 0;
							*(_DWORD *)(v464 + 76) = 1065353216;
							*(_DWORD *)(v464 + 64) = 0;
							*(_DWORD *)(v464 + 92) = 1065353216;
							*(_DWORD *)(v464 + 68) = 0;
							*(_DWORD *)(v464 + 72) = 0;
							*(_DWORD *)(v464 + 80) = 0;
							*(_DWORD *)(v464 + 88) = 0;
							*(_DWORD *)(v464 + 84) = 0;
							*(_DWORD *)(v464 + 100) = 0;
							*(_DWORD *)(v464 + 96) = 0;
							*(_DWORD *)v464 = v465;
							*(_DWORD *)v464 = v466;
							GameCall<int>(0xAA364C, 0xd6ff70)(v464, 16);
							v5 = v464;
							return v5;
						}
						if (v1 == 7021)
						{
							v764 = -256;
							v185 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v764, HIDWORD(v868));
							v186 = (int *)*(int *)0xD71E60;
							v187 = *(int *)0xD71E58;
							*(_DWORD *)v185 = *(int *)0xD71F10;
							*(_DWORD *)(v185 + 4) = 0;
							*(_DWORD *)(v185 + 8) = 0;
							*(_DWORD *)(v185 + 12) = 0;
							*(_DWORD *)(v185 + 16) = 0;
							*(_DWORD *)(v185 + 20) = 0;
							v188 = *(int *)0xD71F8C;
							*(_DWORD *)(v185 + 24) = *v674;
							*(_BYTE *)(v185 + 32) = 0;
							*(_DWORD *)(v185 + 28) = 0;
							*(_BYTE *)(v185 + 40) = 0;
							*(_DWORD *)(v185 + 36) = 0;
							*(_DWORD *)(v185 + 44) = 0;
							*(_DWORD *)(v185 + 52) = -1;
							*(_DWORD *)(v185 + 48) = 0;
							*(_DWORD *)(v185 + 64) = 0;
							*(_DWORD *)(v185 + 68) = 0;
							*(_DWORD *)(v185 + 72) = 0;
							*(_DWORD *)(v185 + 80) = 0;
							*(_DWORD *)(v185 + 88) = 0;
							*(_DWORD *)(v185 + 84) = 0;
							*(_DWORD *)(v185 + 76) = 1065353216;
							*(_DWORD *)(v185 + 92) = 1065353216;
							*(_DWORD *)(v185 + 100) = 0;
							*(_DWORD *)(v185 + 96) = 0;
							*(_DWORD *)v185 = v187;
							*(_DWORD *)v185 = v188;
							v189 = *v186;
							v799 = -256;
							v190 = GameCall<int>(0x9E9198, 0xd6ff70)(v189, 64, (int)&v799, 0, 0, v185 + 80, (int)v186, v185 + 64);
							*(_DWORD *)(v185 + 8) = v190;
							*(_DWORD *)v190 = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 4) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 8) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 12) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 16) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 20) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 24) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 28) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 32) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 36) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 40) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 44) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 48) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 52) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 56) = 0;
							*(_DWORD *)(*(_DWORD *)(v185 + 8) + 60) = 0;
							*(_DWORD *)(v185 + 12) = 16;
							v800 = -256;
							v191 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v800);
							v5 = v185;
							*(_DWORD *)v191 = 0;
							*(_DWORD *)(v191 + 4) = 0;
							*(_DWORD *)(v191 + 8) = 0;
							*(_DWORD *)(v191 + 12) = 0;
							*(_DWORD *)(v191 + 20) = 0;
							*(_DWORD *)(v191 + 16) = 0;
							*(_DWORD *)(v191 + 32) = 0;
							*(_DWORD *)(v191 + 24) = 0;
							*(_DWORD *)(v191 + 28) = 0;
							*(_DWORD *)(v191 + 44) = 0;
							*(_DWORD *)(v191 + 36) = 0;
							*(_DWORD *)(v191 + 40) = 0;
							*(_DWORD *)(v191 + 56) = 0;
							*(_DWORD *)(v191 + 48) = 0;
							*(_DWORD *)(v191 + 52) = 0;
							*(_DWORD *)(v191 + 68) = 0;
							*(_DWORD *)(v191 + 60) = 0;
							*(_DWORD *)(v191 + 64) = 0;
							*(_DWORD *)(v191 + 80) = 0;
							*(_DWORD *)(v191 + 72) = 0;
							*(_DWORD *)(v191 + 76) = 0;
							*(_DWORD *)(v191 + 92) = 0;
							*(_DWORD *)(v191 + 84) = 0;
							*(_DWORD *)(v191 + 88) = 0;
							*(_DWORD *)(v191 + 104) = 0;
							*(_DWORD *)(v191 + 96) = 0;
							*(_DWORD *)(v191 + 100) = 0;
							*(_DWORD *)(v191 + 116) = 0;
							*(_DWORD *)(v191 + 108) = 0;
							*(_DWORD *)(v191 + 112) = 0;
							*(_DWORD *)(v191 + 128) = 0;
							*(_DWORD *)(v191 + 120) = 0;
							*(_DWORD *)(v191 + 124) = 0;
							*(_DWORD *)(v191 + 132) = 0;
							*(_DWORD *)(v191 + 140) = 0;
							*(_DWORD *)(v191 + 136) = 0;
							*(_DWORD *)(v191 + 152) = 0;
							*(_DWORD *)(v191 + 144) = 0;
							*(_DWORD *)(v191 + 148) = 0;
							*(_DWORD *)(v191 + 164) = 0;
							*(_DWORD *)(v191 + 156) = 0;
							*(_DWORD *)(v191 + 160) = 0;
							*(_DWORD *)(v191 + 176) = 0;
							*(_DWORD *)(v191 + 168) = 0;
							*(_DWORD *)(v191 + 172) = 0;
							*(_DWORD *)(v191 + 188) = 0;
							*(_DWORD *)(v191 + 180) = 0;
							*(_DWORD *)(v191 + 184) = 0;
							*(_DWORD *)(v185 + 16) = v191;
							return v5;
						}
						if (v1 > 7021)
						{
							if (v1 == 7041)
							{
								v766 = -256;
								v378 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v766, HIDWORD(v868));
								v379 = (int *)*(int *)0xD71E60;
								v380 = *(int *)0xD71E58;
								*(_DWORD *)v378 = *(int *)0xD71F10;
								*(_DWORD *)(v378 + 4) = 0;
								*(_DWORD *)(v378 + 8) = 0;
								*(_DWORD *)(v378 + 12) = 0;
								*(_DWORD *)(v378 + 16) = 0;
								*(_DWORD *)(v378 + 20) = 0;
								v381 = *(int *)0xD71F94;
								*(_DWORD *)(v378 + 24) = *v674;
								*(_BYTE *)(v378 + 32) = 0;
								*(_DWORD *)(v378 + 28) = 0;
								*(_BYTE *)(v378 + 40) = 0;
								*(_DWORD *)(v378 + 36) = 0;
								*(_DWORD *)(v378 + 44) = 0;
								*(_DWORD *)(v378 + 52) = -1;
								*(_DWORD *)(v378 + 48) = 0;
								*(_DWORD *)(v378 + 64) = 0;
								*(_DWORD *)(v378 + 68) = 0;
								*(_DWORD *)(v378 + 72) = 0;
								*(_DWORD *)(v378 + 80) = 0;
								*(_DWORD *)(v378 + 88) = 0;
								*(_DWORD *)(v378 + 84) = 0;
								*(_DWORD *)(v378 + 76) = 1065353216;
								*(_DWORD *)(v378 + 92) = 1065353216;
								*(_DWORD *)(v378 + 100) = 0;
								*(_DWORD *)(v378 + 96) = 0;
								*(_DWORD *)v378 = v380;
								*(_DWORD *)v378 = v381;
								v382 = *v379;
								HIWORD(v794) = -256;
								v383 = GameCall<int>(0x9E9198, 0xd6ff70)(v382, 64, (int)&v794, 0, 0, v378 + 28, (int)v379, v378 + 64);
								*(_DWORD *)(v378 + 8) = v383;
								*(_DWORD *)v383 = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v378 + 8) + 60) = 0;
								*(_DWORD *)(v378 + 12) = 16;
								v793 = -256;
								v384 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v793);
								v5 = v378;
								*(_DWORD *)v384 = 0;
								*(_DWORD *)(v384 + 4) = 0;
								*(_DWORD *)(v384 + 8) = 0;
								*(_DWORD *)(v384 + 12) = 0;
								*(_DWORD *)(v384 + 20) = 0;
								*(_DWORD *)(v384 + 16) = 0;
								*(_DWORD *)(v384 + 32) = 0;
								*(_DWORD *)(v384 + 24) = 0;
								*(_DWORD *)(v384 + 28) = 0;
								*(_DWORD *)(v384 + 44) = 0;
								*(_DWORD *)(v384 + 36) = 0;
								*(_DWORD *)(v384 + 40) = 0;
								*(_DWORD *)(v384 + 56) = 0;
								*(_DWORD *)(v384 + 48) = 0;
								*(_DWORD *)(v384 + 52) = 0;
								*(_DWORD *)(v384 + 68) = 0;
								*(_DWORD *)(v384 + 60) = 0;
								*(_DWORD *)(v384 + 64) = 0;
								*(_DWORD *)(v384 + 80) = 0;
								*(_DWORD *)(v384 + 72) = 0;
								*(_DWORD *)(v384 + 76) = 0;
								*(_DWORD *)(v384 + 92) = 0;
								*(_DWORD *)(v384 + 84) = 0;
								*(_DWORD *)(v384 + 88) = 0;
								*(_DWORD *)(v384 + 104) = 0;
								*(_DWORD *)(v384 + 96) = 0;
								*(_DWORD *)(v384 + 100) = 0;
								*(_DWORD *)(v384 + 116) = 0;
								*(_DWORD *)(v384 + 108) = 0;
								*(_DWORD *)(v384 + 112) = 0;
								*(_DWORD *)(v384 + 128) = 0;
								*(_DWORD *)(v384 + 120) = 0;
								*(_DWORD *)(v384 + 124) = 0;
								*(_DWORD *)(v384 + 132) = 0;
								*(_DWORD *)(v384 + 140) = 0;
								*(_DWORD *)(v384 + 136) = 0;
								*(_DWORD *)(v384 + 152) = 0;
								*(_DWORD *)(v384 + 144) = 0;
								*(_DWORD *)(v384 + 148) = 0;
								*(_DWORD *)(v384 + 164) = 0;
								*(_DWORD *)(v384 + 156) = 0;
								*(_DWORD *)(v384 + 160) = 0;
								*(_DWORD *)(v384 + 176) = 0;
								*(_DWORD *)(v384 + 168) = 0;
								*(_DWORD *)(v384 + 172) = 0;
								*(_DWORD *)(v384 + 188) = 0;
								*(_DWORD *)(v384 + 180) = 0;
								*(_DWORD *)(v384 + 184) = 0;
								*(_DWORD *)(v378 + 16) = v384;
								return v5;
							}
							if (v1 > 7041)
							{
								if (v1 == 8011)
								{
									v767 = -256;
									v495 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v767, HIDWORD(v868));
									v496 = (int *)*(int *)0xD71E60;
									v497 = *(int *)0xD71E58;
									*(_DWORD *)v495 = *(int *)0xD71F10;
									*(_DWORD *)(v495 + 4) = 0;
									*(_DWORD *)(v495 + 8) = 0;
									*(_DWORD *)(v495 + 12) = 0;
									*(_DWORD *)(v495 + 16) = 0;
									*(_DWORD *)(v495 + 20) = 0;
									v498 = *(int *)0xD71F98;
									*(_DWORD *)(v495 + 24) = *v674;
									*(_BYTE *)(v495 + 32) = 0;
									*(_DWORD *)(v495 + 28) = 0;
									*(_BYTE *)(v495 + 40) = 0;
									*(_DWORD *)(v495 + 36) = 0;
									*(_DWORD *)(v495 + 44) = 0;
									*(_DWORD *)(v495 + 52) = -1;
									*(_DWORD *)(v495 + 48) = 0;
									*(_DWORD *)(v495 + 64) = 0;
									*(_DWORD *)(v495 + 68) = 0;
									*(_DWORD *)(v495 + 72) = 0;
									*(_DWORD *)(v495 + 80) = 0;
									*(_DWORD *)(v495 + 88) = 0;
									*(_DWORD *)(v495 + 84) = 0;
									*(_DWORD *)(v495 + 76) = 1065353216;
									*(_DWORD *)(v495 + 92) = 1065353216;
									*(_DWORD *)(v495 + 100) = 0;
									*(_DWORD *)(v495 + 96) = 0;
									*(_DWORD *)v495 = v497;
									*(_DWORD *)v495 = v498;
									v499 = *v496;
									v795 = -256;
									v500 = GameCall<int>(0x9E9198, 0xd6ff70)(v499, 64, (int)&v795, 0, 0, v495 + 28, (int)v496, v495 + 64);
									*(_DWORD *)(v495 + 8) = v500;
									*(_DWORD *)v500 = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 4) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 8) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 12) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 16) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 20) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 24) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 28) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 32) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 36) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 40) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 44) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 48) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 52) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 56) = 0;
									*(_DWORD *)(*(_DWORD *)(v495 + 8) + 60) = 0;
									*(_DWORD *)(v495 + 12) = 16;
									WORD2(v794) = -256;
									v501 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, (char *)&v794 + 4);
									v5 = v495;
									*(_DWORD *)v501 = 0;
									*(_DWORD *)(v501 + 4) = 0;
									*(_DWORD *)(v501 + 8) = 0;
									*(_DWORD *)(v501 + 12) = 0;
									*(_DWORD *)(v501 + 20) = 0;
									*(_DWORD *)(v501 + 16) = 0;
									*(_DWORD *)(v501 + 32) = 0;
									*(_DWORD *)(v501 + 24) = 0;
									*(_DWORD *)(v501 + 28) = 0;
									*(_DWORD *)(v501 + 44) = 0;
									*(_DWORD *)(v501 + 36) = 0;
									*(_DWORD *)(v501 + 40) = 0;
									*(_DWORD *)(v501 + 56) = 0;
									*(_DWORD *)(v501 + 48) = 0;
									*(_DWORD *)(v501 + 52) = 0;
									*(_DWORD *)(v501 + 68) = 0;
									*(_DWORD *)(v501 + 60) = 0;
									*(_DWORD *)(v501 + 64) = 0;
									*(_DWORD *)(v501 + 80) = 0;
									*(_DWORD *)(v501 + 72) = 0;
									*(_DWORD *)(v501 + 76) = 0;
									*(_DWORD *)(v501 + 92) = 0;
									*(_DWORD *)(v501 + 84) = 0;
									*(_DWORD *)(v501 + 88) = 0;
									*(_DWORD *)(v501 + 104) = 0;
									*(_DWORD *)(v501 + 96) = 0;
									*(_DWORD *)(v501 + 100) = 0;
									*(_DWORD *)(v501 + 116) = 0;
									*(_DWORD *)(v501 + 108) = 0;
									*(_DWORD *)(v501 + 112) = 0;
									*(_DWORD *)(v501 + 128) = 0;
									*(_DWORD *)(v501 + 120) = 0;
									*(_DWORD *)(v501 + 124) = 0;
									*(_DWORD *)(v501 + 132) = 0;
									*(_DWORD *)(v501 + 140) = 0;
									*(_DWORD *)(v501 + 136) = 0;
									*(_DWORD *)(v501 + 152) = 0;
									*(_DWORD *)(v501 + 144) = 0;
									*(_DWORD *)(v501 + 148) = 0;
									*(_DWORD *)(v501 + 164) = 0;
									*(_DWORD *)(v501 + 156) = 0;
									*(_DWORD *)(v501 + 160) = 0;
									*(_DWORD *)(v501 + 176) = 0;
									*(_DWORD *)(v501 + 168) = 0;
									*(_DWORD *)(v501 + 172) = 0;
									*(_DWORD *)(v501 + 188) = 0;
									*(_DWORD *)(v501 + 180) = 0;
									*(_DWORD *)(v501 + 184) = 0;
									*(_DWORD *)(v495 + 16) = v501;
									return v5;
								}
								if (v1 == 8021)
								{
									v758 = -256;
									v270 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v758, HIDWORD(v868));
									v271 = (int *)*(int *)0xD71E60;
									v272 = *(int *)0xD71E58;
									*(_DWORD *)v270 = *(int *)0xD71F10;
									*(_DWORD *)(v270 + 4) = 0;
									*(_DWORD *)(v270 + 8) = 0;
									*(_DWORD *)(v270 + 12) = 0;
									*(_DWORD *)(v270 + 16) = 0;
									*(_DWORD *)(v270 + 20) = 0;
									v273 = *(int *)0xD71F9C;
									*(_DWORD *)(v270 + 24) = *v674;
									*(_BYTE *)(v270 + 32) = 0;
									*(_DWORD *)(v270 + 28) = 0;
									*(_BYTE *)(v270 + 40) = 0;
									*(_DWORD *)(v270 + 36) = 0;
									*(_DWORD *)(v270 + 44) = 0;
									*(_DWORD *)(v270 + 52) = -1;
									*(_DWORD *)(v270 + 48) = 0;
									*(_DWORD *)(v270 + 64) = 0;
									*(_DWORD *)(v270 + 68) = 0;
									*(_DWORD *)(v270 + 72) = 0;
									*(_DWORD *)(v270 + 80) = 0;
									*(_DWORD *)(v270 + 88) = 0;
									*(_DWORD *)(v270 + 84) = 0;
									*(_DWORD *)(v270 + 76) = 1065353216;
									*(_DWORD *)(v270 + 92) = 1065353216;
									*(_DWORD *)(v270 + 100) = 0;
									*(_DWORD *)(v270 + 96) = 0;
									*(_DWORD *)v270 = v272;
									*(_DWORD *)v270 = v273;
									v274 = *v271;
									v797 = -256;
									v275 = GameCall<int>(0x9E9198, 0xd6ff70)(v274, 64, (int)&v797, 0, 0, v270 + 28, (int)v271, v270 + 64);
									*(_DWORD *)(v270 + 8) = v275;
									*(_DWORD *)v275 = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 4) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 8) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 12) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 16) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 20) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 24) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 28) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 32) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 36) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 40) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 44) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 48) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 52) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 56) = 0;
									*(_DWORD *)(*(_DWORD *)(v270 + 8) + 60) = 0;
									*(_DWORD *)(v270 + 12) = 16;
									v796 = -256;
									v276 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v796);
									v5 = v270;
									*(_DWORD *)v276 = 0;
									*(_DWORD *)(v276 + 4) = 0;
									*(_DWORD *)(v276 + 8) = 0;
									*(_DWORD *)(v276 + 12) = 0;
									*(_DWORD *)(v276 + 20) = 0;
									*(_DWORD *)(v276 + 16) = 0;
									*(_DWORD *)(v276 + 32) = 0;
									*(_DWORD *)(v276 + 24) = 0;
									*(_DWORD *)(v276 + 28) = 0;
									*(_DWORD *)(v276 + 44) = 0;
									*(_DWORD *)(v276 + 36) = 0;
									*(_DWORD *)(v276 + 40) = 0;
									*(_DWORD *)(v276 + 56) = 0;
									*(_DWORD *)(v276 + 48) = 0;
									*(_DWORD *)(v276 + 52) = 0;
									*(_DWORD *)(v276 + 68) = 0;
									*(_DWORD *)(v276 + 60) = 0;
									*(_DWORD *)(v276 + 64) = 0;
									*(_DWORD *)(v276 + 80) = 0;
									*(_DWORD *)(v276 + 72) = 0;
									*(_DWORD *)(v276 + 76) = 0;
									*(_DWORD *)(v276 + 92) = 0;
									*(_DWORD *)(v276 + 84) = 0;
									*(_DWORD *)(v276 + 88) = 0;
									*(_DWORD *)(v276 + 104) = 0;
									*(_DWORD *)(v276 + 96) = 0;
									*(_DWORD *)(v276 + 100) = 0;
									*(_DWORD *)(v276 + 116) = 0;
									*(_DWORD *)(v276 + 108) = 0;
									*(_DWORD *)(v276 + 112) = 0;
									*(_DWORD *)(v276 + 128) = 0;
									*(_DWORD *)(v276 + 120) = 0;
									*(_DWORD *)(v276 + 124) = 0;
									*(_DWORD *)(v276 + 132) = 0;
									*(_DWORD *)(v276 + 140) = 0;
									*(_DWORD *)(v276 + 136) = 0;
									*(_DWORD *)(v276 + 152) = 0;
									*(_DWORD *)(v276 + 144) = 0;
									*(_DWORD *)(v276 + 148) = 0;
									*(_DWORD *)(v276 + 164) = 0;
									*(_DWORD *)(v276 + 156) = 0;
									*(_DWORD *)(v276 + 160) = 0;
									*(_DWORD *)(v276 + 176) = 0;
									*(_DWORD *)(v276 + 168) = 0;
									*(_DWORD *)(v276 + 172) = 0;
									*(_DWORD *)(v276 + 188) = 0;
									*(_DWORD *)(v276 + 180) = 0;
									*(_DWORD *)(v276 + 184) = 0;
									*(_DWORD *)(v270 + 16) = v276;
									return v5;
								}
							}
							else if (v1 == 7031)
							{
								v765 = -256;
								v166 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v765, HIDWORD(v868));
								v167 = (int *)*(int *)0xD71E60;
								v168 = *(int *)0xD71E58;
								*(_DWORD *)v166 = *(int *)0xD71F10;
								*(_DWORD *)(v166 + 4) = 0;
								*(_DWORD *)(v166 + 8) = 0;
								*(_DWORD *)(v166 + 12) = 0;
								*(_DWORD *)(v166 + 16) = 0;
								*(_DWORD *)(v166 + 20) = 0;
								v169 = *(int *)0xD71F90;
								*(_DWORD *)(v166 + 24) = *v674;
								*(_BYTE *)(v166 + 32) = 0;
								*(_DWORD *)(v166 + 28) = 0;
								*(_BYTE *)(v166 + 40) = 0;
								*(_DWORD *)(v166 + 36) = 0;
								*(_DWORD *)(v166 + 44) = 0;
								*(_DWORD *)(v166 + 52) = -1;
								*(_DWORD *)(v166 + 48) = 0;
								*(_DWORD *)(v166 + 64) = 0;
								*(_DWORD *)(v166 + 68) = 0;
								*(_DWORD *)(v166 + 72) = 0;
								*(_DWORD *)(v166 + 80) = 0;
								*(_DWORD *)(v166 + 88) = 0;
								*(_DWORD *)(v166 + 84) = 0;
								*(_DWORD *)(v166 + 76) = 1065353216;
								*(_DWORD *)(v166 + 92) = 1065353216;
								*(_DWORD *)(v166 + 100) = 0;
								*(_DWORD *)(v166 + 96) = 0;
								*(_DWORD *)v166 = v168;
								*(_DWORD *)v166 = v169;
								v170 = *v167;
								v792 = -256;
								v171 = GameCall<int>(0x9E9198, 0xd6ff70)(v170, 64, (int)&v792, 0, 0, v166 + 28, (int)v167, v166 + 64);
								*(_DWORD *)(v166 + 8) = v171;
								*(_DWORD *)v171 = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v166 + 8) + 60) = 0;
								*(_DWORD *)(v166 + 12) = 16;
								v791 = -256;
								v172 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v791);
								v5 = v166;
								*(_DWORD *)v172 = 0;
								*(_DWORD *)(v172 + 4) = 0;
								*(_DWORD *)(v172 + 8) = 0;
								*(_DWORD *)(v172 + 12) = 0;
								*(_DWORD *)(v172 + 20) = 0;
								*(_DWORD *)(v172 + 16) = 0;
								*(_DWORD *)(v172 + 32) = 0;
								*(_DWORD *)(v172 + 24) = 0;
								*(_DWORD *)(v172 + 28) = 0;
								*(_DWORD *)(v172 + 44) = 0;
								*(_DWORD *)(v172 + 36) = 0;
								*(_DWORD *)(v172 + 40) = 0;
								*(_DWORD *)(v172 + 56) = 0;
								*(_DWORD *)(v172 + 48) = 0;
								*(_DWORD *)(v172 + 52) = 0;
								*(_DWORD *)(v172 + 68) = 0;
								*(_DWORD *)(v172 + 60) = 0;
								*(_DWORD *)(v172 + 64) = 0;
								*(_DWORD *)(v172 + 80) = 0;
								*(_DWORD *)(v172 + 72) = 0;
								*(_DWORD *)(v172 + 76) = 0;
								*(_DWORD *)(v172 + 92) = 0;
								*(_DWORD *)(v172 + 84) = 0;
								*(_DWORD *)(v172 + 88) = 0;
								*(_DWORD *)(v172 + 104) = 0;
								*(_DWORD *)(v172 + 96) = 0;
								*(_DWORD *)(v172 + 100) = 0;
								*(_DWORD *)(v172 + 116) = 0;
								*(_DWORD *)(v172 + 108) = 0;
								*(_DWORD *)(v172 + 112) = 0;
								*(_DWORD *)(v172 + 128) = 0;
								*(_DWORD *)(v172 + 120) = 0;
								*(_DWORD *)(v172 + 124) = 0;
								*(_DWORD *)(v172 + 132) = 0;
								*(_DWORD *)(v172 + 140) = 0;
								*(_DWORD *)(v172 + 136) = 0;
								*(_DWORD *)(v172 + 152) = 0;
								*(_DWORD *)(v172 + 144) = 0;
								*(_DWORD *)(v172 + 148) = 0;
								*(_DWORD *)(v172 + 164) = 0;
								*(_DWORD *)(v172 + 156) = 0;
								*(_DWORD *)(v172 + 160) = 0;
								*(_DWORD *)(v172 + 176) = 0;
								*(_DWORD *)(v172 + 168) = 0;
								*(_DWORD *)(v172 + 172) = 0;
								*(_DWORD *)(v172 + 188) = 0;
								*(_DWORD *)(v172 + 180) = 0;
								*(_DWORD *)(v172 + 184) = 0;
								*(_DWORD *)(v166 + 16) = v172;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
							case 5041:
								v762 = -256;
								v339 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v762, HIDWORD(v868));
								v340 = (int *)*(int *)0xD71E60;
								v341 = *(int *)0xD71E58;
								*(_DWORD *)v339 = *(int *)0xD71F10;
								*(_DWORD *)(v339 + 4) = 0;
								*(_DWORD *)(v339 + 8) = 0;
								*(_DWORD *)(v339 + 12) = 0;
								*(_DWORD *)(v339 + 16) = 0;
								*(_DWORD *)(v339 + 20) = 0;
								v342 = *(int *)0xD71F84;
								*(_DWORD *)(v339 + 24) = *v674;
								*(_BYTE *)(v339 + 32) = 0;
								*(_DWORD *)(v339 + 28) = 0;
								*(_BYTE *)(v339 + 40) = 0;
								*(_DWORD *)(v339 + 36) = 0;
								*(_DWORD *)(v339 + 44) = 0;
								*(_DWORD *)(v339 + 52) = -1;
								*(_DWORD *)(v339 + 48) = 0;
								*(_DWORD *)(v339 + 64) = 0;
								*(_DWORD *)(v339 + 68) = 0;
								*(_DWORD *)(v339 + 72) = 0;
								*(_DWORD *)(v339 + 80) = 0;
								*(_DWORD *)(v339 + 88) = 0;
								*(_DWORD *)(v339 + 84) = 0;
								*(_DWORD *)(v339 + 76) = 1065353216;
								*(_DWORD *)(v339 + 92) = 1065353216;
								*(_DWORD *)(v339 + 100) = 0;
								*(_DWORD *)(v339 + 96) = 0;
								*(_DWORD *)v339 = v341;
								*(_DWORD *)v339 = v342;
								v343 = *v340;
								v809 = -256;
								v344 = GameCall<int>(0x9E9198, 0xd6ff70)(v343, 64, (int)&v809, 0, 0, v339 + 28, (int)v340, v339 + 64);
								*(_DWORD *)(v339 + 8) = v344;
								*(_DWORD *)v344 = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v339 + 8) + 60) = 0;
								*(_DWORD *)(v339 + 12) = 16;
								v808 = -256;
								v345 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v808);
								v5 = v339;
								*(_DWORD *)v345 = 0;
								*(_DWORD *)(v345 + 4) = 0;
								*(_DWORD *)(v345 + 8) = 0;
								*(_DWORD *)(v345 + 12) = 0;
								*(_DWORD *)(v345 + 20) = 0;
								*(_DWORD *)(v345 + 16) = 0;
								*(_DWORD *)(v345 + 32) = 0;
								*(_DWORD *)(v345 + 24) = 0;
								*(_DWORD *)(v345 + 28) = 0;
								*(_DWORD *)(v345 + 44) = 0;
								*(_DWORD *)(v345 + 36) = 0;
								*(_DWORD *)(v345 + 40) = 0;
								*(_DWORD *)(v345 + 56) = 0;
								*(_DWORD *)(v345 + 48) = 0;
								*(_DWORD *)(v345 + 52) = 0;
								*(_DWORD *)(v345 + 68) = 0;
								*(_DWORD *)(v345 + 60) = 0;
								*(_DWORD *)(v345 + 64) = 0;
								*(_DWORD *)(v345 + 80) = 0;
								*(_DWORD *)(v345 + 72) = 0;
								*(_DWORD *)(v345 + 76) = 0;
								*(_DWORD *)(v345 + 92) = 0;
								*(_DWORD *)(v345 + 84) = 0;
								*(_DWORD *)(v345 + 88) = 0;
								*(_DWORD *)(v345 + 104) = 0;
								*(_DWORD *)(v345 + 96) = 0;
								*(_DWORD *)(v345 + 100) = 0;
								*(_DWORD *)(v345 + 116) = 0;
								*(_DWORD *)(v345 + 108) = 0;
								*(_DWORD *)(v345 + 112) = 0;
								*(_DWORD *)(v345 + 128) = 0;
								*(_DWORD *)(v345 + 120) = 0;
								*(_DWORD *)(v345 + 124) = 0;
								*(_DWORD *)(v345 + 132) = 0;
								*(_DWORD *)(v345 + 140) = 0;
								*(_DWORD *)(v345 + 136) = 0;
								*(_DWORD *)(v345 + 152) = 0;
								*(_DWORD *)(v345 + 144) = 0;
								*(_DWORD *)(v345 + 148) = 0;
								*(_DWORD *)(v345 + 164) = 0;
								*(_DWORD *)(v345 + 156) = 0;
								*(_DWORD *)(v345 + 160) = 0;
								*(_DWORD *)(v345 + 176) = 0;
								*(_DWORD *)(v345 + 168) = 0;
								*(_DWORD *)(v345 + 172) = 0;
								*(_DWORD *)(v345 + 188) = 0;
								*(_DWORD *)(v345 + 180) = 0;
								*(_DWORD *)(v345 + 184) = 0;
								*(_DWORD *)(v339 + 16) = v345;
								return v5;
							case 5111:
								v763 = -256;
								v411 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v763, HIDWORD(v868));
								v412 = (int *)*(int *)0xD71E60;
								v413 = *(int *)0xD71E58;
								*(_DWORD *)v411 = *(int *)0xD71F10;
								*(_DWORD *)(v411 + 4) = 0;
								*(_DWORD *)(v411 + 8) = 0;
								*(_DWORD *)(v411 + 12) = 0;
								*(_DWORD *)(v411 + 16) = 0;
								*(_DWORD *)(v411 + 20) = 0;
								v414 = *(int *)0xD71F88;
								*(_DWORD *)(v411 + 24) = *v674;
								*(_BYTE *)(v411 + 32) = 0;
								*(_DWORD *)(v411 + 28) = 0;
								*(_BYTE *)(v411 + 40) = 0;
								*(_DWORD *)(v411 + 36) = 0;
								*(_DWORD *)(v411 + 44) = 0;
								*(_DWORD *)(v411 + 52) = -1;
								*(_DWORD *)(v411 + 48) = 0;
								*(_DWORD *)(v411 + 64) = 0;
								*(_DWORD *)(v411 + 68) = 0;
								*(_DWORD *)(v411 + 72) = 0;
								*(_DWORD *)(v411 + 80) = 0;
								*(_DWORD *)(v411 + 88) = 0;
								*(_DWORD *)(v411 + 84) = 0;
								*(_DWORD *)(v411 + 76) = 1065353216;
								*(_DWORD *)(v411 + 92) = 1065353216;
								*(_DWORD *)(v411 + 100) = 0;
								*(_DWORD *)(v411 + 96) = 0;
								*(_DWORD *)v411 = v413;
								*(_DWORD *)v411 = v414;
								v415 = *v412;
								v801 = -256;
								v416 = GameCall<int>(0x9E9198, 0xd6ff70)(v415, 64, (int)&v801, 0, 0, v411 + 28, (int)v412, v411 + 64);
								*(_DWORD *)(v411 + 8) = v416;
								*(_DWORD *)v416 = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v411 + 8) + 60) = 0;
								*(_DWORD *)(v411 + 12) = 16;
								v810 = -256;
								v417 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v810);
								v5 = v411;
								*(_DWORD *)v417 = 0;
								*(_DWORD *)(v417 + 4) = 0;
								*(_DWORD *)(v417 + 8) = 0;
								*(_DWORD *)(v417 + 12) = 0;
								*(_DWORD *)(v417 + 20) = 0;
								*(_DWORD *)(v417 + 16) = 0;
								*(_DWORD *)(v417 + 32) = 0;
								*(_DWORD *)(v417 + 24) = 0;
								*(_DWORD *)(v417 + 28) = 0;
								*(_DWORD *)(v417 + 44) = 0;
								*(_DWORD *)(v417 + 36) = 0;
								*(_DWORD *)(v417 + 40) = 0;
								*(_DWORD *)(v417 + 56) = 0;
								*(_DWORD *)(v417 + 48) = 0;
								*(_DWORD *)(v417 + 52) = 0;
								*(_DWORD *)(v417 + 68) = 0;
								*(_DWORD *)(v417 + 60) = 0;
								*(_DWORD *)(v417 + 64) = 0;
								*(_DWORD *)(v417 + 80) = 0;
								*(_DWORD *)(v417 + 72) = 0;
								*(_DWORD *)(v417 + 76) = 0;
								*(_DWORD *)(v417 + 92) = 0;
								*(_DWORD *)(v417 + 84) = 0;
								*(_DWORD *)(v417 + 88) = 0;
								*(_DWORD *)(v417 + 104) = 0;
								*(_DWORD *)(v417 + 96) = 0;
								*(_DWORD *)(v417 + 100) = 0;
								*(_DWORD *)(v417 + 116) = 0;
								*(_DWORD *)(v417 + 108) = 0;
								*(_DWORD *)(v417 + 112) = 0;
								*(_DWORD *)(v417 + 128) = 0;
								*(_DWORD *)(v417 + 120) = 0;
								*(_DWORD *)(v417 + 124) = 0;
								*(_DWORD *)(v417 + 132) = 0;
								*(_DWORD *)(v417 + 140) = 0;
								*(_DWORD *)(v417 + 136) = 0;
								*(_DWORD *)(v417 + 152) = 0;
								*(_DWORD *)(v417 + 144) = 0;
								*(_DWORD *)(v417 + 148) = 0;
								*(_DWORD *)(v417 + 164) = 0;
								*(_DWORD *)(v417 + 156) = 0;
								*(_DWORD *)(v417 + 160) = 0;
								*(_DWORD *)(v417 + 176) = 0;
								*(_DWORD *)(v417 + 168) = 0;
								*(_DWORD *)(v417 + 172) = 0;
								*(_DWORD *)(v417 + 188) = 0;
								*(_DWORD *)(v417 + 180) = 0;
								*(_DWORD *)(v417 + 184) = 0;
								*(_DWORD *)(v411 + 16) = v417;
								return v5;
							case 5031:
								v761 = -256;
								v67 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v761, HIDWORD(v868));
								v68 = (int *)*(int *)0xD71E60;
								v69 = *(int *)0xD71E58;
								*(_DWORD *)v67 = *(int *)0xD71F10;
								*(_DWORD *)(v67 + 4) = 0;
								*(_DWORD *)(v67 + 8) = 0;
								*(_DWORD *)(v67 + 12) = 0;
								*(_DWORD *)(v67 + 16) = 0;
								*(_DWORD *)(v67 + 20) = 0;
								v70 = *(int *)0xD71F80;
								*(_DWORD *)(v67 + 24) = *v674;
								*(_BYTE *)(v67 + 32) = 0;
								*(_DWORD *)(v67 + 28) = 0;
								*(_BYTE *)(v67 + 40) = 0;
								*(_DWORD *)(v67 + 36) = 0;
								*(_DWORD *)(v67 + 44) = 0;
								*(_DWORD *)(v67 + 52) = -1;
								*(_DWORD *)(v67 + 48) = 0;
								*(_DWORD *)(v67 + 64) = 0;
								*(_DWORD *)(v67 + 68) = 0;
								*(_DWORD *)(v67 + 72) = 0;
								*(_DWORD *)(v67 + 80) = 0;
								*(_DWORD *)(v67 + 88) = 0;
								*(_DWORD *)(v67 + 84) = 0;
								*(_DWORD *)(v67 + 76) = 1065353216;
								*(_DWORD *)(v67 + 92) = 1065353216;
								*(_DWORD *)(v67 + 100) = 0;
								*(_DWORD *)(v67 + 96) = 0;
								*(_DWORD *)v67 = v69;
								*(_DWORD *)v67 = v70;
								v71 = *v68;
								v807 = -256;
								v72 = GameCall<int>(0x9E9198, 0xd6ff70)(v71, 64, (int)&v807, 0, 0, v67 + 28, (int)v68, v67 + 64);
								*(_DWORD *)(v67 + 8) = v72;
								*(_DWORD *)v72 = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 4) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 8) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 12) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 16) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 20) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 24) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 28) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 32) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 36) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 40) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 44) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 48) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 52) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 56) = 0;
								*(_DWORD *)(*(_DWORD *)(v67 + 8) + 60) = 0;
								*(_DWORD *)(v67 + 12) = 16;
								v806 = -256;
								v73 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v806);
								v5 = v67;
								*(_DWORD *)v73 = 0;
								*(_DWORD *)(v73 + 4) = 0;
								*(_DWORD *)(v73 + 8) = 0;
								*(_DWORD *)(v73 + 12) = 0;
								*(_DWORD *)(v73 + 20) = 0;
								*(_DWORD *)(v73 + 16) = 0;
								*(_DWORD *)(v73 + 32) = 0;
								*(_DWORD *)(v73 + 24) = 0;
								*(_DWORD *)(v73 + 28) = 0;
								*(_DWORD *)(v73 + 44) = 0;
								*(_DWORD *)(v73 + 36) = 0;
								*(_DWORD *)(v73 + 40) = 0;
								*(_DWORD *)(v73 + 56) = 0;
								*(_DWORD *)(v73 + 48) = 0;
								*(_DWORD *)(v73 + 52) = 0;
								*(_DWORD *)(v73 + 68) = 0;
								*(_DWORD *)(v73 + 60) = 0;
								*(_DWORD *)(v73 + 64) = 0;
								*(_DWORD *)(v73 + 80) = 0;
								*(_DWORD *)(v73 + 72) = 0;
								*(_DWORD *)(v73 + 76) = 0;
								*(_DWORD *)(v73 + 92) = 0;
								*(_DWORD *)(v73 + 84) = 0;
								*(_DWORD *)(v73 + 88) = 0;
								*(_DWORD *)(v73 + 104) = 0;
								*(_DWORD *)(v73 + 96) = 0;
								*(_DWORD *)(v73 + 100) = 0;
								*(_DWORD *)(v73 + 116) = 0;
								*(_DWORD *)(v73 + 108) = 0;
								*(_DWORD *)(v73 + 112) = 0;
								*(_DWORD *)(v73 + 128) = 0;
								*(_DWORD *)(v73 + 120) = 0;
								*(_DWORD *)(v73 + 124) = 0;
								*(_DWORD *)(v73 + 132) = 0;
								*(_DWORD *)(v73 + 140) = 0;
								*(_DWORD *)(v73 + 136) = 0;
								*(_DWORD *)(v73 + 152) = 0;
								*(_DWORD *)(v73 + 144) = 0;
								*(_DWORD *)(v73 + 148) = 0;
								*(_DWORD *)(v73 + 164) = 0;
								*(_DWORD *)(v73 + 156) = 0;
								*(_DWORD *)(v73 + 160) = 0;
								*(_DWORD *)(v73 + 176) = 0;
								*(_DWORD *)(v73 + 168) = 0;
								*(_DWORD *)(v73 + 172) = 0;
								*(_DWORD *)(v73 + 188) = 0;
								*(_DWORD *)(v73 + 180) = 0;
								*(_DWORD *)(v73 + 184) = 0;
								*(_DWORD *)(v67 + 16) = v73;
								return v5;
							}
						}
					}
					else
					{
						if (v1 == 3051)
						{
							v731 = -256;
							v222 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v731, HIDWORD(v868));
							v223 = *(int *)0xD71E58;
							*(_DWORD *)v222 = *(int *)0xD71F10;
							*(_DWORD *)(v222 + 4) = 0;
							*(_DWORD *)(v222 + 8) = 0;
							*(_DWORD *)(v222 + 12) = 0;
							*(_DWORD *)(v222 + 16) = 0;
							*(_DWORD *)(v222 + 20) = 0;
							v224 = *(int *)0xD71F68;
							*(_DWORD *)(v222 + 24) = *v674;
							*(_BYTE *)(v222 + 32) = 0;
							*(_DWORD *)(v222 + 28) = 0;
							*(_BYTE *)(v222 + 40) = 0;
							*(_DWORD *)(v222 + 36) = 0;
							*(_DWORD *)(v222 + 44) = 0;
							*(_DWORD *)(v222 + 52) = -1;
							*(_DWORD *)(v222 + 48) = 0;
							*(_DWORD *)(v222 + 76) = 1065353216;
							*(_DWORD *)(v222 + 64) = 0;
							*(_DWORD *)(v222 + 68) = 0;
							*(_DWORD *)(v222 + 72) = 0;
							*(_DWORD *)(v222 + 92) = 1065353216;
							*(_DWORD *)(v222 + 88) = 0;
							*(_DWORD *)(v222 + 80) = 0;
							*(_DWORD *)(v222 + 84) = 0;
							*(_DWORD *)(v222 + 100) = 0;
							*(_DWORD *)(v222 + 96) = 0;
							*(_DWORD *)v222 = v223;
							*(_DWORD *)v222 = v224;
							GameCall<int>(0xAA364C, 0xd6ff70)(v222, 16);
							v5 = v222;
							return v5;
						}
						if (v1 > 3051)
						{
							if (v1 == 3071)
							{
								v745 = -256;
								v331 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v745, HIDWORD(v868));
								v332 = *(int *)0xD71F24;
								*(_DWORD *)v331 = *(int *)0xD71F10;
								*(_DWORD *)(v331 + 4) = 0;
								*(_DWORD *)(v331 + 8) = 0;
								*(_DWORD *)(v331 + 12) = 0;
								*(_DWORD *)(v331 + 16) = 0;
								*(_DWORD *)(v331 + 20) = 0;
								*(_DWORD *)(v331 + 24) = *v674;
								*(_BYTE *)(v331 + 32) = 0;
								*(_DWORD *)(v331 + 28) = 0;
								*(_BYTE *)(v331 + 40) = 0;
								*(_DWORD *)(v331 + 36) = 0;
								*(_DWORD *)(v331 + 44) = 0;
								*(_DWORD *)(v331 + 52) = -1;
								*(_DWORD *)(v331 + 48) = 0;
								*(_DWORD *)(v331 + 76) = 1065353216;
								*(_DWORD *)(v331 + 64) = 0;
								*(_DWORD *)(v331 + 92) = 1065353216;
								*(_DWORD *)(v331 + 68) = 0;
								*(_DWORD *)(v331 + 72) = 0;
								*(_DWORD *)(v331 + 80) = 0;
								*(_DWORD *)(v331 + 88) = 0;
								*(_DWORD *)(v331 + 84) = 0;
								*(_DWORD *)(v331 + 100) = 0;
								*(_DWORD *)(v331 + 96) = 0;
								*(_DWORD *)v331 = v332;
								GameCall<int>(0xAA364C, 0xd6ff70)(v331, 30);
								v5 = v331;
								*(_DWORD *)v331 = *(int *)0xD71F70;
								return v5;
							}
							if (v1 > 3071)
							{
								if (v1 == 3091)
								{
									v746 = -256;
									v473 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v746, HIDWORD(v868));
									v474 = *(int *)0xD71E58;
									*(_DWORD *)v473 = *(int *)0xD71F10;
									*(_DWORD *)(v473 + 4) = 0;
									*(_DWORD *)(v473 + 8) = 0;
									*(_DWORD *)(v473 + 12) = 0;
									*(_DWORD *)(v473 + 16) = 0;
									*(_DWORD *)(v473 + 20) = 0;
									v475 = *(int *)0xD71F74;
									*(_DWORD *)(v473 + 24) = *v674;
									*(_BYTE *)(v473 + 32) = 0;
									*(_DWORD *)(v473 + 28) = 0;
									*(_BYTE *)(v473 + 40) = 0;
									*(_DWORD *)(v473 + 36) = 0;
									*(_DWORD *)(v473 + 44) = 0;
									*(_DWORD *)(v473 + 52) = -1;
									*(_DWORD *)(v473 + 48) = 0;
									*(_DWORD *)(v473 + 76) = 1065353216;
									*(_DWORD *)(v473 + 64) = 0;
									*(_DWORD *)(v473 + 68) = 0;
									*(_DWORD *)(v473 + 72) = 0;
									*(_DWORD *)(v473 + 92) = 1065353216;
									*(_DWORD *)(v473 + 88) = 0;
									*(_DWORD *)(v473 + 80) = 0;
									*(_DWORD *)(v473 + 84) = 0;
									*(_DWORD *)(v473 + 100) = 0;
									*(_DWORD *)(v473 + 96) = 0;
									*(_DWORD *)v473 = v474;
									*(_DWORD *)v473 = v475;
									GameCall<int>(0xAA364C, 0xd6ff70)(v473, 16);
									v5 = v473;
									return v5;
								}
								if (v1 == 4011)
								{
									v759 = -256;
									v240 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v759, HIDWORD(v868));
									v241 = (int *)*(int *)0xD71E60;
									v242 = *(int *)0xD71E58;
									*(_DWORD *)v240 = *(int *)0xD71F10;
									*(_DWORD *)(v240 + 4) = 0;
									*(_DWORD *)(v240 + 8) = 0;
									*(_DWORD *)(v240 + 12) = 0;
									*(_DWORD *)(v240 + 16) = 0;
									*(_DWORD *)(v240 + 20) = 0;
									v243 = *(int *)0xD71F78;
									*(_DWORD *)(v240 + 24) = *v674;
									*(_BYTE *)(v240 + 32) = 0;
									*(_DWORD *)(v240 + 28) = 0;
									*(_BYTE *)(v240 + 40) = 0;
									*(_DWORD *)(v240 + 36) = 0;
									*(_DWORD *)(v240 + 44) = 0;
									*(_DWORD *)(v240 + 52) = -1;
									*(_DWORD *)(v240 + 48) = 0;
									*(_DWORD *)(v240 + 64) = 0;
									*(_DWORD *)(v240 + 68) = 0;
									*(_DWORD *)(v240 + 72) = 0;
									*(_DWORD *)(v240 + 80) = 0;
									*(_DWORD *)(v240 + 88) = 0;
									*(_DWORD *)(v240 + 84) = 0;
									*(_DWORD *)(v240 + 76) = 1065353216;
									*(_DWORD *)(v240 + 92) = 1065353216;
									*(_DWORD *)(v240 + 100) = 0;
									*(_DWORD *)(v240 + 96) = 0;
									*(_DWORD *)v240 = v242;
									*(_DWORD *)v240 = v243;
									v244 = *v241;
									v803 = -256;
									v245 = GameCall<int>(0x9E9198, 0xd6ff70)(v244, 64, (int)&v803, 0, 0, v240 + 28, (int)v241, v240 + 64);
									*(_DWORD *)(v240 + 8) = v245;
									*(_DWORD *)v245 = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 4) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 8) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 12) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 16) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 20) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 24) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 28) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 32) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 36) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 40) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 44) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 48) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 52) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 56) = 0;
									*(_DWORD *)(*(_DWORD *)(v240 + 8) + 60) = 0;
									*(_DWORD *)(v240 + 12) = 16;
									v802 = -256;
									v246 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v802);
									v5 = v240;
									*(_DWORD *)v246 = 0;
									*(_DWORD *)(v246 + 4) = 0;
									*(_DWORD *)(v246 + 8) = 0;
									*(_DWORD *)(v246 + 12) = 0;
									*(_DWORD *)(v246 + 20) = 0;
									*(_DWORD *)(v246 + 16) = 0;
									*(_DWORD *)(v246 + 32) = 0;
									*(_DWORD *)(v246 + 24) = 0;
									*(_DWORD *)(v246 + 28) = 0;
									*(_DWORD *)(v246 + 44) = 0;
									*(_DWORD *)(v246 + 36) = 0;
									*(_DWORD *)(v246 + 40) = 0;
									*(_DWORD *)(v246 + 56) = 0;
									*(_DWORD *)(v246 + 48) = 0;
									*(_DWORD *)(v246 + 52) = 0;
									*(_DWORD *)(v246 + 68) = 0;
									*(_DWORD *)(v246 + 60) = 0;
									*(_DWORD *)(v246 + 64) = 0;
									*(_DWORD *)(v246 + 80) = 0;
									*(_DWORD *)(v246 + 72) = 0;
									*(_DWORD *)(v246 + 76) = 0;
									*(_DWORD *)(v246 + 92) = 0;
									*(_DWORD *)(v246 + 84) = 0;
									*(_DWORD *)(v246 + 88) = 0;
									*(_DWORD *)(v246 + 104) = 0;
									*(_DWORD *)(v246 + 96) = 0;
									*(_DWORD *)(v246 + 100) = 0;
									*(_DWORD *)(v246 + 116) = 0;
									*(_DWORD *)(v246 + 108) = 0;
									*(_DWORD *)(v246 + 112) = 0;
									*(_DWORD *)(v246 + 128) = 0;
									*(_DWORD *)(v246 + 120) = 0;
									*(_DWORD *)(v246 + 124) = 0;
									*(_DWORD *)(v246 + 132) = 0;
									*(_DWORD *)(v246 + 140) = 0;
									*(_DWORD *)(v246 + 136) = 0;
									*(_DWORD *)(v246 + 152) = 0;
									*(_DWORD *)(v246 + 144) = 0;
									*(_DWORD *)(v246 + 148) = 0;
									*(_DWORD *)(v246 + 164) = 0;
									*(_DWORD *)(v246 + 156) = 0;
									*(_DWORD *)(v246 + 160) = 0;
									*(_DWORD *)(v246 + 176) = 0;
									*(_DWORD *)(v246 + 168) = 0;
									*(_DWORD *)(v246 + 172) = 0;
									*(_DWORD *)(v246 + 188) = 0;
									*(_DWORD *)(v246 + 180) = 0;
									*(_DWORD *)(v246 + 184) = 0;
									*(_DWORD *)(v240 + 16) = v246;
									return v5;
								}
							}
							else if (v1 == 3061)
							{
								v732 = -256;
								v145 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v732, HIDWORD(v868));
								v146 = *(int *)0xD71F24;
								*(_DWORD *)v145 = *(int *)0xD71F10;
								*(_DWORD *)(v145 + 4) = 0;
								*(_DWORD *)(v145 + 8) = 0;
								*(_DWORD *)(v145 + 12) = 0;
								*(_DWORD *)(v145 + 16) = 0;
								*(_DWORD *)(v145 + 20) = 0;
								*(_DWORD *)(v145 + 24) = *v674;
								*(_BYTE *)(v145 + 32) = 0;
								*(_DWORD *)(v145 + 28) = 0;
								*(_BYTE *)(v145 + 40) = 0;
								*(_DWORD *)(v145 + 36) = 0;
								*(_DWORD *)(v145 + 44) = 0;
								*(_DWORD *)(v145 + 52) = -1;
								*(_DWORD *)(v145 + 48) = 0;
								*(_DWORD *)(v145 + 76) = 1065353216;
								*(_DWORD *)(v145 + 64) = 0;
								*(_DWORD *)(v145 + 68) = 0;
								*(_DWORD *)(v145 + 72) = 0;
								*(_DWORD *)(v145 + 92) = 1065353216;
								*(_DWORD *)(v145 + 88) = 0;
								*(_DWORD *)(v145 + 80) = 0;
								*(_DWORD *)(v145 + 84) = 0;
								*(_DWORD *)(v145 + 100) = 0;
								*(_DWORD *)(v145 + 96) = 0;
								*(_DWORD *)v145 = v146;
								GameCall<int>(0xAA364C, 0xd6ff70)(v145, 30);
								v5 = v145;
								*(_DWORD *)v145 = *(int *)0xD71F6C;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
							case 3031:
								v729 = -256;
								v293 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v729, HIDWORD(v868));
								v294 = *(int *)0xD71E58;
								*(_DWORD *)v293 = *(int *)0xD71F10;
								*(_DWORD *)(v293 + 4) = 0;
								*(_DWORD *)(v293 + 8) = 0;
								*(_DWORD *)(v293 + 12) = 0;
								*(_DWORD *)(v293 + 16) = 0;
								*(_DWORD *)(v293 + 20) = 0;
								v295 = *(int *)0xD71F60;
								*(_DWORD *)(v293 + 24) = *v674;
								*(_BYTE *)(v293 + 32) = 0;
								*(_DWORD *)(v293 + 28) = 0;
								*(_BYTE *)(v293 + 40) = 0;
								*(_DWORD *)(v293 + 36) = 0;
								*(_DWORD *)(v293 + 44) = 0;
								*(_DWORD *)(v293 + 52) = -1;
								*(_DWORD *)(v293 + 48) = 0;
								*(_DWORD *)(v293 + 76) = 1065353216;
								*(_DWORD *)(v293 + 64) = 0;
								*(_DWORD *)(v293 + 68) = 0;
								*(_DWORD *)(v293 + 72) = 0;
								*(_DWORD *)(v293 + 92) = 1065353216;
								*(_DWORD *)(v293 + 88) = 0;
								*(_DWORD *)(v293 + 80) = 0;
								*(_DWORD *)(v293 + 84) = 0;
								*(_DWORD *)(v293 + 100) = 0;
								*(_DWORD *)(v293 + 96) = 0;
								*(_DWORD *)v293 = v294;
								*(_DWORD *)v293 = v295;
								GameCall<int>(0xAA364C, 0xd6ff70)(v293, 16);
								v5 = v293;
								return v5;
							case 3041:
								v730 = -256;
								v456 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v730, HIDWORD(v868));
								v457 = *(int *)0xD71E58;
								*(_DWORD *)v456 = *(int *)0xD71F10;
								*(_DWORD *)(v456 + 4) = 0;
								*(_DWORD *)(v456 + 8) = 0;
								*(_DWORD *)(v456 + 12) = 0;
								*(_DWORD *)(v456 + 16) = 0;
								*(_DWORD *)(v456 + 20) = 0;
								v458 = *(int *)0xD71F64;
								*(_DWORD *)(v456 + 24) = *v674;
								*(_BYTE *)(v456 + 32) = 0;
								*(_DWORD *)(v456 + 28) = 0;
								*(_BYTE *)(v456 + 40) = 0;
								*(_DWORD *)(v456 + 36) = 0;
								*(_DWORD *)(v456 + 44) = 0;
								*(_DWORD *)(v456 + 52) = -1;
								*(_DWORD *)(v456 + 48) = 0;
								*(_DWORD *)(v456 + 76) = 1065353216;
								*(_DWORD *)(v456 + 64) = 0;
								*(_DWORD *)(v456 + 68) = 0;
								*(_DWORD *)(v456 + 72) = 0;
								*(_DWORD *)(v456 + 92) = 1065353216;
								*(_DWORD *)(v456 + 88) = 0;
								*(_DWORD *)(v456 + 80) = 0;
								*(_DWORD *)(v456 + 84) = 0;
								*(_DWORD *)(v456 + 100) = 0;
								*(_DWORD *)(v456 + 96) = 0;
								*(_DWORD *)v456 = v457;
								*(_DWORD *)v456 = v458;
								GameCall<int>(0xAA364C, 0xd6ff70)(v456, 16);
								v5 = v456;
								return v5;
							case 3021:
								v728 = -256;
								v15 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v728, HIDWORD(v868));
								v16 = *(int *)0xD71E58;
								*(_DWORD *)v15 = *(int *)0xD71F10;
								*(_DWORD *)(v15 + 4) = 0;
								*(_DWORD *)(v15 + 8) = 0;
								*(_DWORD *)(v15 + 12) = 0;
								*(_DWORD *)(v15 + 16) = 0;
								*(_DWORD *)(v15 + 20) = 0;
								v17 = *(int *)0xD71F5C;
								*(_DWORD *)(v15 + 24) = *v674;
								*(_BYTE *)(v15 + 32) = 0;
								*(_DWORD *)(v15 + 28) = 0;
								*(_BYTE *)(v15 + 40) = 0;
								*(_DWORD *)(v15 + 36) = 0;
								*(_DWORD *)(v15 + 44) = 0;
								*(_DWORD *)(v15 + 52) = -1;
								*(_DWORD *)(v15 + 48) = 0;
								*(_DWORD *)(v15 + 76) = 1065353216;
								*(_DWORD *)(v15 + 64) = 0;
								*(_DWORD *)(v15 + 92) = 1065353216;
								*(_DWORD *)(v15 + 68) = 0;
								*(_DWORD *)(v15 + 72) = 0;
								*(_DWORD *)(v15 + 80) = 0;
								*(_DWORD *)(v15 + 88) = 0;
								*(_DWORD *)(v15 + 84) = 0;
								*(_DWORD *)(v15 + 100) = 0;
								*(_DWORD *)(v15 + 96) = 0;
								*(_DWORD *)v15 = v16;
								*(_DWORD *)v15 = v17;
								GameCall<int>(0xAA364C, 0xd6ff70)(v15, 16);
								v5 = v15;
								return v5;
							}
						}
					}
				}
			}
			else
			{
				if (v1 == 14081)
				{
					v694 = -256;
					v48 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v694, HIDWORD(v868));
					v49 = *(int *)0xD71E58;
					*(_DWORD *)v48 = *(int *)0xD71F10;
					*(_DWORD *)(v48 + 4) = 0;
					*(_DWORD *)(v48 + 8) = 0;
					*(_DWORD *)(v48 + 12) = 0;
					*(_DWORD *)(v48 + 16) = 0;
					*(_DWORD *)(v48 + 20) = 0;
					v50 = *(int *)0xD71FE4;
					*(_DWORD *)(v48 + 24) = *v674;
					*(_BYTE *)(v48 + 32) = 0;
					*(_DWORD *)(v48 + 28) = 0;
					*(_BYTE *)(v48 + 40) = 0;
					*(_DWORD *)(v48 + 36) = 0;
					*(_DWORD *)(v48 + 44) = 0;
					*(_DWORD *)(v48 + 52) = -1;
					*(_DWORD *)(v48 + 48) = 0;
					*(_DWORD *)(v48 + 76) = 1065353216;
					*(_DWORD *)(v48 + 64) = 0;
					*(_DWORD *)(v48 + 68) = 0;
					*(_DWORD *)(v48 + 72) = 0;
					*(_DWORD *)(v48 + 92) = 1065353216;
					*(_DWORD *)(v48 + 88) = 0;
					*(_DWORD *)(v48 + 80) = 0;
					*(_DWORD *)(v48 + 84) = 0;
					*(_DWORD *)(v48 + 100) = 0;
					*(_DWORD *)(v48 + 96) = 0;
					*(_DWORD *)v48 = v49;
					*(_DWORD *)v48 = v50;
					GameCall<int>(0xAA364C, 0xd6ff70)(v48, 16);
					v5 = v48;
					return v5;
				}
				if (v1 <= 14081)
				{
					if (v1 == 13031)
					{
						v753 = -256;
						v118 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v753, HIDWORD(v868));
						v119 = *(int *)0xD71E58;
						*(_DWORD *)v118 = *(int *)0xD71F10;
						*(_DWORD *)(v118 + 4) = 0;
						*(_DWORD *)(v118 + 8) = 0;
						*(_DWORD *)(v118 + 12) = 0;
						*(_DWORD *)(v118 + 16) = 0;
						*(_DWORD *)(v118 + 20) = 0;
						v120 = *(int *)0xD71FC0;
						*(_DWORD *)(v118 + 24) = *v674;
						*(_BYTE *)(v118 + 32) = 0;
						*(_DWORD *)(v118 + 28) = 0;
						*(_BYTE *)(v118 + 40) = 0;
						*(_DWORD *)(v118 + 36) = 0;
						*(_DWORD *)(v118 + 44) = 0;
						*(_DWORD *)(v118 + 52) = -1;
						*(_DWORD *)(v118 + 48) = 0;
						*(_DWORD *)(v118 + 76) = 1065353216;
						*(_DWORD *)(v118 + 64) = 0;
						*(_DWORD *)(v118 + 68) = 0;
						*(_DWORD *)(v118 + 72) = 0;
						*(_DWORD *)(v118 + 92) = 1065353216;
						*(_DWORD *)(v118 + 88) = 0;
						*(_DWORD *)(v118 + 80) = 0;
						*(_DWORD *)(v118 + 84) = 0;
						*(_DWORD *)(v118 + 100) = 0;
						*(_DWORD *)(v118 + 96) = 0;
						*(_DWORD *)v118 = v119;
						*(_DWORD *)v118 = v120;
						GameCall<int>(0xAA364C, 0xd6ff70)(v118, 16);
						v5 = v118;
						return v5;
					}
					if (v1 > 13031)
					{
						if (v1 == 14021)
						{
							v722 = -256;
							v214 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v722, HIDWORD(v868));
							v215 = *(int *)0xD71E58;
							*(_DWORD *)v214 = *(int *)0xD71F10;
							*(_DWORD *)(v214 + 4) = 0;
							*(_DWORD *)(v214 + 8) = 0;
							*(_DWORD *)(v214 + 12) = 0;
							*(_DWORD *)(v214 + 16) = 0;
							*(_DWORD *)(v214 + 20) = 0;
							v216 = *(int *)0xD71FD0;
							*(_DWORD *)(v214 + 24) = *v674;
							*(_BYTE *)(v214 + 32) = 0;
							*(_DWORD *)(v214 + 28) = 0;
							*(_BYTE *)(v214 + 40) = 0;
							*(_DWORD *)(v214 + 36) = 0;
							*(_DWORD *)(v214 + 44) = 0;
							*(_DWORD *)(v214 + 52) = -1;
							*(_DWORD *)(v214 + 48) = 0;
							*(_DWORD *)(v214 + 76) = 1065353216;
							*(_DWORD *)(v214 + 64) = 0;
							*(_DWORD *)(v214 + 68) = 0;
							*(_DWORD *)(v214 + 72) = 0;
							*(_DWORD *)(v214 + 92) = 1065353216;
							*(_DWORD *)(v214 + 88) = 0;
							*(_DWORD *)(v214 + 80) = 0;
							*(_DWORD *)(v214 + 84) = 0;
							*(_DWORD *)(v214 + 100) = 0;
							*(_DWORD *)(v214 + 96) = 0;
							*(_DWORD *)v214 = v215;
							*(_DWORD *)v214 = v216;
							GameCall<int>(0xAA364C, 0xd6ff70)(v214, 16);
							v5 = v214;
							return v5;
						}
						if (v1 > 14021)
						{
							if (v1 == 14041)
							{
								v691 = -256;
								v358 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v691, HIDWORD(v868));
								v359 = *(int *)0xD71E58;
								*(_DWORD *)v358 = *(int *)0xD71F10;
								*(_DWORD *)(v358 + 4) = 0;
								*(_DWORD *)(v358 + 8) = 0;
								*(_DWORD *)(v358 + 12) = 0;
								*(_DWORD *)(v358 + 16) = 0;
								*(_DWORD *)(v358 + 20) = 0;
								v360 = *(int *)0xD71FD8;
								*(_DWORD *)(v358 + 24) = *v674;
								*(_BYTE *)(v358 + 32) = 0;
								*(_DWORD *)(v358 + 28) = 0;
								*(_BYTE *)(v358 + 40) = 0;
								*(_DWORD *)(v358 + 36) = 0;
								*(_DWORD *)(v358 + 44) = 0;
								*(_DWORD *)(v358 + 52) = -1;
								*(_DWORD *)(v358 + 48) = 0;
								*(_DWORD *)(v358 + 76) = 1065353216;
								*(_DWORD *)(v358 + 64) = 0;
								*(_DWORD *)(v358 + 68) = 0;
								*(_DWORD *)(v358 + 72) = 0;
								*(_DWORD *)(v358 + 92) = 1065353216;
								*(_DWORD *)(v358 + 88) = 0;
								*(_DWORD *)(v358 + 80) = 0;
								*(_DWORD *)(v358 + 84) = 0;
								*(_DWORD *)(v358 + 100) = 0;
								*(_DWORD *)(v358 + 96) = 0;
								*(_DWORD *)v358 = v359;
								*(_DWORD *)v358 = v360;
								GameCall<int>(0xAA364C, 0xd6ff70)(v358, 16);
								v5 = v358;
								return v5;
							}
							if (v1 > 14041)
							{
								if (v1 == 14061)
								{
									v692 = -256;
									v510 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v692, HIDWORD(v868));
									v511 = *(int *)0xD71E58;
									*(_DWORD *)v510 = *(int *)0xD71F10;
									*(_DWORD *)(v510 + 4) = 0;
									*(_DWORD *)(v510 + 8) = 0;
									*(_DWORD *)(v510 + 12) = 0;
									*(_DWORD *)(v510 + 16) = 0;
									*(_DWORD *)(v510 + 20) = 0;
									v512 = *(int *)0xD71FDC;
									*(_DWORD *)(v510 + 24) = *v674;
									*(_BYTE *)(v510 + 32) = 0;
									*(_DWORD *)(v510 + 28) = 0;
									*(_BYTE *)(v510 + 40) = 0;
									*(_DWORD *)(v510 + 36) = 0;
									*(_DWORD *)(v510 + 44) = 0;
									*(_DWORD *)(v510 + 52) = -1;
									*(_DWORD *)(v510 + 48) = 0;
									*(_DWORD *)(v510 + 76) = 1065353216;
									*(_DWORD *)(v510 + 64) = 0;
									*(_DWORD *)(v510 + 68) = 0;
									*(_DWORD *)(v510 + 72) = 0;
									*(_DWORD *)(v510 + 92) = 1065353216;
									*(_DWORD *)(v510 + 88) = 0;
									*(_DWORD *)(v510 + 80) = 0;
									*(_DWORD *)(v510 + 84) = 0;
									*(_DWORD *)(v510 + 100) = 0;
									*(_DWORD *)(v510 + 96) = 0;
									*(_DWORD *)v510 = v511;
									*(_DWORD *)v510 = v512;
									GameCall<int>(0xAA364C, 0xd6ff70)(v510, 16);
									v5 = v510;
									return v5;
								}
								if (v1 == 14071)
								{
									v693 = -256;
									v250 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v693, HIDWORD(v868));
									v251 = *(int *)0xD71E58;
									*(_DWORD *)v250 = *(int *)0xD71F10;
									*(_DWORD *)(v250 + 4) = 0;
									*(_DWORD *)(v250 + 8) = 0;
									*(_DWORD *)(v250 + 12) = 0;
									*(_DWORD *)(v250 + 16) = 0;
									*(_DWORD *)(v250 + 20) = 0;
									v252 = *(int *)0xD71FE0;
									*(_DWORD *)(v250 + 24) = *v674;
									*(_BYTE *)(v250 + 32) = 0;
									*(_DWORD *)(v250 + 28) = 0;
									*(_BYTE *)(v250 + 40) = 0;
									*(_DWORD *)(v250 + 36) = 0;
									*(_DWORD *)(v250 + 44) = 0;
									*(_DWORD *)(v250 + 52) = -1;
									*(_DWORD *)(v250 + 48) = 0;
									*(_DWORD *)(v250 + 76) = 1065353216;
									*(_DWORD *)(v250 + 64) = 0;
									*(_DWORD *)(v250 + 68) = 0;
									*(_DWORD *)(v250 + 72) = 0;
									*(_DWORD *)(v250 + 92) = 1065353216;
									*(_DWORD *)(v250 + 88) = 0;
									*(_DWORD *)(v250 + 80) = 0;
									*(_DWORD *)(v250 + 84) = 0;
									*(_DWORD *)(v250 + 100) = 0;
									*(_DWORD *)(v250 + 96) = 0;
									*(_DWORD *)v250 = v251;
									*(_DWORD *)v250 = v252;
									GameCall<int>(0xAA364C, 0xd6ff70)(v250, 16);
									v5 = v250;
									return v5;
								}
							}
							else if (v1 == 14031)
							{
								v690 = -256;
								v133 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v690, HIDWORD(v868));
								v134 = *(int *)0xD71F24;
								*(_DWORD *)v133 = *(int *)0xD71F10;
								*(_DWORD *)(v133 + 4) = 0;
								*(_DWORD *)(v133 + 8) = 0;
								*(_DWORD *)(v133 + 12) = 0;
								*(_DWORD *)(v133 + 16) = 0;
								*(_DWORD *)(v133 + 20) = 0;
								*(_DWORD *)(v133 + 24) = *v674;
								*(_BYTE *)(v133 + 32) = 0;
								*(_DWORD *)(v133 + 28) = 0;
								*(_BYTE *)(v133 + 40) = 0;
								*(_DWORD *)(v133 + 36) = 0;
								*(_DWORD *)(v133 + 44) = 0;
								*(_DWORD *)(v133 + 52) = -1;
								*(_DWORD *)(v133 + 48) = 0;
								*(_DWORD *)(v133 + 76) = 1065353216;
								*(_DWORD *)(v133 + 64) = 0;
								*(_DWORD *)(v133 + 68) = 0;
								*(_DWORD *)(v133 + 72) = 0;
								*(_DWORD *)(v133 + 92) = 1065353216;
								*(_DWORD *)(v133 + 88) = 0;
								*(_DWORD *)(v133 + 80) = 0;
								*(_DWORD *)(v133 + 84) = 0;
								*(_DWORD *)(v133 + 100) = 0;
								*(_DWORD *)(v133 + 96) = 0;
								*(_DWORD *)v133 = v134;
								GameCall<int>(0xAA364C, 0xd6ff70)(v133, 30);
								v5 = v133;
								*(_DWORD *)v133 = *(int *)0xD71FD4;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
							case 13051:
								v755 = -256;
								v322 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v755, HIDWORD(v868));
								v323 = *(int *)0xD71E58;
								*(_DWORD *)v322 = *(int *)0xD71F10;
								*(_DWORD *)(v322 + 4) = 0;
								*(_DWORD *)(v322 + 8) = 0;
								*(_DWORD *)(v322 + 12) = 0;
								*(_DWORD *)(v322 + 16) = 0;
								*(_DWORD *)(v322 + 20) = 0;
								v324 = *(int *)0xD71FC8;
								*(_DWORD *)(v322 + 24) = *v674;
								*(_BYTE *)(v322 + 32) = 0;
								*(_DWORD *)(v322 + 28) = 0;
								*(_BYTE *)(v322 + 40) = 0;
								*(_DWORD *)(v322 + 36) = 0;
								*(_DWORD *)(v322 + 44) = 0;
								*(_DWORD *)(v322 + 52) = -1;
								*(_DWORD *)(v322 + 48) = 0;
								*(_DWORD *)(v322 + 76) = 1065353216;
								*(_DWORD *)(v322 + 64) = 0;
								*(_DWORD *)(v322 + 68) = 0;
								*(_DWORD *)(v322 + 72) = 0;
								*(_DWORD *)(v322 + 92) = 1065353216;
								*(_DWORD *)(v322 + 88) = 0;
								*(_DWORD *)(v322 + 80) = 0;
								*(_DWORD *)(v322 + 84) = 0;
								*(_DWORD *)(v322 + 100) = 0;
								*(_DWORD *)(v322 + 96) = 0;
								*(_DWORD *)v322 = v323;
								*(_DWORD *)v322 = v324;
								GameCall<int>(0xAA364C, 0xd6ff70)(v322, 16);
								v5 = v322;
								return v5;
							case 14011:
								v723 = -256;
								v449 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v723, HIDWORD(v868));
								v450 = *(int *)0xD71E58;
								*(_DWORD *)v449 = *(int *)0xD71F10;
								*(_DWORD *)(v449 + 4) = 0;
								*(_DWORD *)(v449 + 8) = 0;
								*(_DWORD *)(v449 + 12) = 0;
								*(_DWORD *)(v449 + 16) = 0;
								*(_DWORD *)(v449 + 20) = 0;
								v451 = *(int *)0xD71FCC;
								*(_DWORD *)(v449 + 24) = *v674;
								*(_BYTE *)(v449 + 32) = 0;
								*(_DWORD *)(v449 + 28) = 0;
								*(_BYTE *)(v449 + 40) = 0;
								*(_DWORD *)(v449 + 36) = 0;
								*(_DWORD *)(v449 + 44) = 0;
								*(_DWORD *)(v449 + 52) = -1;
								*(_DWORD *)(v449 + 48) = 0;
								*(_DWORD *)(v449 + 76) = 1065353216;
								*(_DWORD *)(v449 + 64) = 0;
								*(_DWORD *)(v449 + 68) = 0;
								*(_DWORD *)(v449 + 72) = 0;
								*(_DWORD *)(v449 + 92) = 1065353216;
								*(_DWORD *)(v449 + 88) = 0;
								*(_DWORD *)(v449 + 80) = 0;
								*(_DWORD *)(v449 + 84) = 0;
								*(_DWORD *)(v449 + 100) = 0;
								*(_DWORD *)(v449 + 96) = 0;
								*(_DWORD *)v449 = v450;
								*(_DWORD *)v449 = v451;
								GameCall<int>(0xAA364C, 0xd6ff70)(v449, 16);
								v5 = v449;
								return v5;
							case 13041:
								v754 = -256;
								v84 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v754, HIDWORD(v868));
								v85 = *(int *)0xD71E58;
								*(_DWORD *)v84 = *(int *)0xD71F10;
								*(_DWORD *)(v84 + 4) = 0;
								*(_DWORD *)(v84 + 8) = 0;
								*(_DWORD *)(v84 + 12) = 0;
								*(_DWORD *)(v84 + 16) = 0;
								*(_DWORD *)(v84 + 20) = 0;
								v86 = *(int *)0xD71FC4;
								*(_DWORD *)(v84 + 24) = *v674;
								*(_BYTE *)(v84 + 32) = 0;
								*(_DWORD *)(v84 + 28) = 0;
								*(_BYTE *)(v84 + 40) = 0;
								*(_DWORD *)(v84 + 36) = 0;
								*(_DWORD *)(v84 + 44) = 0;
								*(_DWORD *)(v84 + 52) = -1;
								*(_DWORD *)(v84 + 48) = 0;
								*(_DWORD *)(v84 + 76) = 1065353216;
								*(_DWORD *)(v84 + 64) = 0;
								*(_DWORD *)(v84 + 68) = 0;
								*(_DWORD *)(v84 + 72) = 0;
								*(_DWORD *)(v84 + 92) = 1065353216;
								*(_DWORD *)(v84 + 88) = 0;
								*(_DWORD *)(v84 + 80) = 0;
								*(_DWORD *)(v84 + 84) = 0;
								*(_DWORD *)(v84 + 100) = 0;
								*(_DWORD *)(v84 + 96) = 0;
								*(_DWORD *)v84 = v85;
								*(_DWORD *)v84 = v86;
								GameCall<int>(0xAA364C, 0xd6ff70)(v84, 16);
								v5 = v84;
								return v5;
							}
						}
					}
					else
					{
						if (v1 == 10041)
						{
							v749 = -256;
							v208 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v749, HIDWORD(v868));
							v209 = *(int *)0xD71E58;
							*(_DWORD *)v208 = *(int *)0xD71F10;
							*(_DWORD *)(v208 + 4) = 0;
							*(_DWORD *)(v208 + 8) = 0;
							*(_DWORD *)(v208 + 12) = 0;
							*(_DWORD *)(v208 + 16) = 0;
							*(_DWORD *)(v208 + 20) = 0;
							v210 = *(int *)0xD71FB0;
							*(_DWORD *)(v208 + 24) = *v674;
							*(_BYTE *)(v208 + 32) = 0;
							*(_DWORD *)(v208 + 28) = 0;
							*(_BYTE *)(v208 + 40) = 0;
							*(_DWORD *)(v208 + 36) = 0;
							*(_DWORD *)(v208 + 44) = 0;
							*(_DWORD *)(v208 + 52) = -1;
							*(_DWORD *)(v208 + 48) = 0;
							*(_DWORD *)(v208 + 76) = 1065353216;
							*(_DWORD *)(v208 + 64) = 0;
							*(_DWORD *)(v208 + 68) = 0;
							*(_DWORD *)(v208 + 72) = 0;
							*(_DWORD *)(v208 + 92) = 1065353216;
							*(_DWORD *)(v208 + 88) = 0;
							*(_DWORD *)(v208 + 80) = 0;
							*(_DWORD *)(v208 + 84) = 0;
							*(_DWORD *)(v208 + 100) = 0;
							*(_DWORD *)(v208 + 96) = 0;
							*(_DWORD *)v208 = v209;
							*(_DWORD *)v208 = v210;
							GameCall<int>(0xAA364C, 0xd6ff70)(v208, 16);
							v5 = v208;
							return v5;
						}
						if (v1 > 10041)
						{
							switch (v1)
							{
								case 13011:
									v751 = -256;
									v375 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v751, HIDWORD(v868));
									v376 = *(int *)0xD71E58;
									*(_DWORD *)v375 = *(int *)0xD71F10;
									*(_DWORD *)(v375 + 4) = 0;
									*(_DWORD *)(v375 + 8) = 0;
									*(_DWORD *)(v375 + 12) = 0;
									*(_DWORD *)(v375 + 16) = 0;
									*(_DWORD *)(v375 + 20) = 0;
									v377 = *(int *)0xD71FB8;
									*(_DWORD *)(v375 + 24) = *v674;
									*(_BYTE *)(v375 + 32) = 0;
									*(_DWORD *)(v375 + 28) = 0;
									*(_BYTE *)(v375 + 40) = 0;
									*(_DWORD *)(v375 + 36) = 0;
									*(_DWORD *)(v375 + 44) = 0;
									*(_DWORD *)(v375 + 52) = -1;
									*(_DWORD *)(v375 + 48) = 0;
									*(_DWORD *)(v375 + 76) = 1065353216;
									*(_DWORD *)(v375 + 64) = 0;
									*(_DWORD *)(v375 + 68) = 0;
									*(_DWORD *)(v375 + 72) = 0;
									*(_DWORD *)(v375 + 92) = 1065353216;
									*(_DWORD *)(v375 + 88) = 0;
									*(_DWORD *)(v375 + 80) = 0;
									*(_DWORD *)(v375 + 84) = 0;
									*(_DWORD *)(v375 + 100) = 0;
									*(_DWORD *)(v375 + 96) = 0;
									*(_DWORD *)v375 = v376;
									*(_DWORD *)v375 = v377;
									GameCall<int>(0xAA364C, 0xd6ff70)(v375, 16);
									v5 = v375;
									return v5;
								case 13021:
									v752 = -256;
									v402 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v752, HIDWORD(v868));
									v403 = *(int *)0xD71E58;
									*(_DWORD *)v402 = *(int *)0xD71F10;
									*(_DWORD *)(v402 + 4) = 0;
									*(_DWORD *)(v402 + 8) = 0;
									*(_DWORD *)(v402 + 12) = 0;
									*(_DWORD *)(v402 + 16) = 0;
									*(_DWORD *)(v402 + 20) = 0;
									v404 = *(int *)0xD71FBC;
									*(_DWORD *)(v402 + 24) = *v674;
									*(_BYTE *)(v402 + 32) = 0;
									*(_DWORD *)(v402 + 28) = 0;
									*(_BYTE *)(v402 + 40) = 0;
									*(_DWORD *)(v402 + 36) = 0;
									*(_DWORD *)(v402 + 44) = 0;
									*(_DWORD *)(v402 + 52) = -1;
									*(_DWORD *)(v402 + 48) = 0;
									*(_DWORD *)(v402 + 76) = 1065353216;
									*(_DWORD *)(v402 + 64) = 0;
									*(_DWORD *)(v402 + 68) = 0;
									*(_DWORD *)(v402 + 72) = 0;
									*(_DWORD *)(v402 + 92) = 1065353216;
									*(_DWORD *)(v402 + 88) = 0;
									*(_DWORD *)(v402 + 80) = 0;
									*(_DWORD *)(v402 + 84) = 0;
									*(_DWORD *)(v402 + 100) = 0;
									*(_DWORD *)(v402 + 96) = 0;
									*(_DWORD *)v402 = v403;
									*(_DWORD *)v402 = v404;
									GameCall<int>(0xAA364C, 0xd6ff70)(v402, 16);
									v5 = v402;
									return v5;
								case 12021:
									v750 = -256;
									v127 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v750, HIDWORD(v868));
									v128 = *(int *)0xD71E58;
									*(_DWORD *)v127 = *(int *)0xD71F10;
									*(_DWORD *)(v127 + 4) = 0;
									*(_DWORD *)(v127 + 8) = 0;
									*(_DWORD *)(v127 + 12) = 0;
									*(_DWORD *)(v127 + 16) = 0;
									*(_DWORD *)(v127 + 20) = 0;
									v129 = *(int *)0xD71FB4;
									*(_DWORD *)(v127 + 24) = *v674;
									*(_BYTE *)(v127 + 32) = 0;
									*(_DWORD *)(v127 + 28) = 0;
									*(_BYTE *)(v127 + 40) = 0;
									*(_DWORD *)(v127 + 36) = 0;
									*(_DWORD *)(v127 + 44) = 0;
									*(_DWORD *)(v127 + 52) = -1;
									*(_DWORD *)(v127 + 48) = 0;
									*(_DWORD *)(v127 + 76) = 1065353216;
									*(_DWORD *)(v127 + 64) = 0;
									*(_DWORD *)(v127 + 68) = 0;
									*(_DWORD *)(v127 + 72) = 0;
									*(_DWORD *)(v127 + 92) = 1065353216;
									*(_DWORD *)(v127 + 88) = 0;
									*(_DWORD *)(v127 + 80) = 0;
									*(_DWORD *)(v127 + 84) = 0;
									*(_DWORD *)(v127 + 100) = 0;
									*(_DWORD *)(v127 + 96) = 0;
									*(_DWORD *)v127 = v128;
									*(_DWORD *)v127 = v129;
									GameCall<int>(0xAA364C, 0xd6ff70)(v127, 16);
									v5 = v127;
									return v5;
							}
						}
						else
						{
							switch (v1)
							{
								case 10021:
									v747 = -256;
									v302 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v747, HIDWORD(v868));
									v303 = *(int *)0xD71E58;
									*(_DWORD *)v302 = *(int *)0xD71F10;
									*(_DWORD *)(v302 + 4) = 0;
									*(_DWORD *)(v302 + 8) = 0;
									*(_DWORD *)(v302 + 12) = 0;
									*(_DWORD *)(v302 + 16) = 0;
									*(_DWORD *)(v302 + 20) = 0;
									v304 = *(int *)0xD71FA8;
									*(_DWORD *)(v302 + 24) = *v674;
									*(_BYTE *)(v302 + 32) = 0;
									*(_DWORD *)(v302 + 28) = 0;
									*(_BYTE *)(v302 + 40) = 0;
									*(_DWORD *)(v302 + 36) = 0;
									*(_DWORD *)(v302 + 44) = 0;
									*(_DWORD *)(v302 + 52) = -1;
									*(_DWORD *)(v302 + 48) = 0;
									*(_DWORD *)(v302 + 76) = 1065353216;
									*(_DWORD *)(v302 + 64) = 0;
									*(_DWORD *)(v302 + 68) = 0;
									*(_DWORD *)(v302 + 72) = 0;
									*(_DWORD *)(v302 + 92) = 1065353216;
									*(_DWORD *)(v302 + 88) = 0;
									*(_DWORD *)(v302 + 80) = 0;
									*(_DWORD *)(v302 + 84) = 0;
									*(_DWORD *)(v302 + 100) = 0;
									*(_DWORD *)(v302 + 96) = 0;
									*(_DWORD *)v302 = v303;
									*(_DWORD *)v302 = v304;
									GameCall<int>(0xAA364C, 0xd6ff70)(v302, 16);
									v5 = v302;
									return v5;
								case 10031:
									v748 = -256;
									v452 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v748, HIDWORD(v868));
									v453 = *(int *)0xD71F24;
									*(_DWORD *)v452 = *(int *)0xD71F10;
									*(_DWORD *)(v452 + 4) = 0;
									*(_DWORD *)(v452 + 8) = 0;
									*(_DWORD *)(v452 + 12) = 0;
									*(_DWORD *)(v452 + 16) = 0;
									*(_DWORD *)(v452 + 20) = 0;
									*(_DWORD *)(v452 + 24) = *v674;
									*(_BYTE *)(v452 + 32) = 0;
									*(_DWORD *)(v452 + 28) = 0;
									*(_BYTE *)(v452 + 40) = 0;
									*(_DWORD *)(v452 + 36) = 0;
									*(_DWORD *)(v452 + 44) = 0;
									*(_DWORD *)(v452 + 52) = -1;
									*(_DWORD *)(v452 + 48) = 0;
									*(_DWORD *)(v452 + 76) = 1065353216;
									*(_DWORD *)(v452 + 64) = 0;
									*(_DWORD *)(v452 + 68) = 0;
									*(_DWORD *)(v452 + 72) = 0;
									*(_DWORD *)(v452 + 92) = 1065353216;
									*(_DWORD *)(v452 + 88) = 0;
									*(_DWORD *)(v452 + 80) = 0;
									*(_DWORD *)(v452 + 84) = 0;
									*(_DWORD *)(v452 + 100) = 0;
									*(_DWORD *)(v452 + 96) = 0;
									*(_DWORD *)v452 = v453;
									GameCall<int>(0xAA364C, 0xd6ff70)(v452, 30);
									v5 = v452;
									*(_DWORD *)v452 = *(int *)0xD71FAC;
									return v5;
								case 10011:
									v756 = -256;
									v464 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v756, HIDWORD(v868));
									v465 = *(int *)0xD71E58;
									*(_DWORD *)v464 = *(int *)0xD71F10;
									*(_DWORD *)(v464 + 4) = 0;
									*(_DWORD *)(v464 + 8) = 0;
									*(_DWORD *)(v464 + 12) = 0;
									*(_DWORD *)(v464 + 16) = 0;
									*(_DWORD *)(v464 + 20) = 0;
									v466 = *(int *)0xD71FA4;
									*(_DWORD *)(v464 + 24) = *v674;
									*(_BYTE *)(v464 + 32) = 0;
									*(_DWORD *)(v464 + 28) = 0;
									*(_BYTE *)(v464 + 40) = 0;
									*(_DWORD *)(v464 + 36) = 0;
									*(_DWORD *)(v464 + 44) = 0;
									*(_DWORD *)(v464 + 52) = -1;
									*(_DWORD *)(v464 + 48) = 0;
									*(_DWORD *)(v464 + 76) = 1065353216;
									*(_DWORD *)(v464 + 64) = 0;
									*(_DWORD *)(v464 + 92) = 1065353216;
									*(_DWORD *)(v464 + 68) = 0;
									*(_DWORD *)(v464 + 72) = 0;
									*(_DWORD *)(v464 + 80) = 0;
									*(_DWORD *)(v464 + 88) = 0;
									*(_DWORD *)(v464 + 84) = 0;
									*(_DWORD *)(v464 + 100) = 0;
									*(_DWORD *)(v464 + 96) = 0;
									*(_DWORD *)v464 = v465;
									*(_DWORD *)v464 = v466;
									GameCall<int>(0xAA364C, 0xd6ff70)(v464, 16);
									v5 = v464;
									return v5;
							}
						}
					}
				}
				else
				{
					if (v1 == 15081)
					{
						v679[1] = 0;
						v679[0] = -1;
						v92 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, v679, HIDWORD(v868));
						v93 = *(int *)0xD71E58;
						*(_DWORD *)v92 = *(int *)0xD71F10;
						*(_DWORD *)(v92 + 4) = 0;
						*(_DWORD *)(v92 + 8) = 0;
						*(_DWORD *)(v92 + 12) = 0;
						*(_DWORD *)(v92 + 16) = 0;
						*(_DWORD *)(v92 + 20) = 0;
						v94 = *(int *)0xD72008;
						*(_DWORD *)(v92 + 24) = *v674;
						*(_BYTE *)(v92 + 32) = 0;
						*(_DWORD *)(v92 + 28) = 0;
						*(_BYTE *)(v92 + 40) = 0;
						*(_DWORD *)(v92 + 36) = 0;
						*(_DWORD *)(v92 + 44) = 0;
						*(_DWORD *)(v92 + 52) = -1;
						*(_DWORD *)(v92 + 48) = 0;
						*(_DWORD *)(v92 + 76) = 1065353216;
						*(_DWORD *)(v92 + 64) = 0;
						*(_DWORD *)(v92 + 68) = 0;
						*(_DWORD *)(v92 + 72) = 0;
						*(_DWORD *)(v92 + 92) = 1065353216;
						*(_DWORD *)(v92 + 88) = 0;
						*(_DWORD *)(v92 + 80) = 0;
						*(_DWORD *)(v92 + 84) = 0;
						*(_DWORD *)(v92 + 100) = 0;
						*(_DWORD *)(v92 + 96) = 0;
						*(_DWORD *)v92 = v93;
						*(_DWORD *)v92 = v94;
						GameCall<int>(0xAA364C, 0xd6ff70)(v92, 16);
						v5 = v92;
						return v5;
					}
					if (v1 > 15081)
					{
						if (v1 == 16041)
						{
							v683[0] = -1;
							v683[1] = 0;
							v217 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, v683, HIDWORD(v868));
							v218 = *(int *)0xD71E58;
							*(_DWORD *)v217 = *(int *)0xD71F10;
							*(_DWORD *)(v217 + 4) = 0;
							*(_DWORD *)(v217 + 8) = 0;
							*(_DWORD *)(v217 + 12) = 0;
							*(_DWORD *)(v217 + 16) = 0;
							*(_DWORD *)(v217 + 20) = 0;
							v219 = *(int *)0xD72018;
							*(_DWORD *)(v217 + 24) = *v674;
							*(_BYTE *)(v217 + 32) = 0;
							*(_DWORD *)(v217 + 28) = 0;
							*(_BYTE *)(v217 + 40) = 0;
							*(_DWORD *)(v217 + 36) = 0;
							*(_DWORD *)(v217 + 44) = 0;
							*(_DWORD *)(v217 + 52) = -1;
							*(_DWORD *)(v217 + 48) = 0;
							*(_DWORD *)(v217 + 76) = 1065353216;
							*(_DWORD *)(v217 + 64) = 0;
							*(_DWORD *)(v217 + 68) = 0;
							*(_DWORD *)(v217 + 72) = 0;
							*(_DWORD *)(v217 + 92) = 1065353216;
							*(_DWORD *)(v217 + 88) = 0;
							*(_DWORD *)(v217 + 80) = 0;
							*(_DWORD *)(v217 + 84) = 0;
							*(_DWORD *)(v217 + 100) = 0;
							*(_DWORD *)(v217 + 96) = 0;
							*(_DWORD *)v217 = v218;
							*(_DWORD *)v217 = v219;
							GameCall<int>(0xAA364C, 0xd6ff70)(v217, 30);
							v5 = v217;
							return v5;
						}
						if (v1 > 16041)
						{
							if (v1 == 17021)
							{
								v685[0] = -1;
								v685[1] = 0;
								v283 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, v685, HIDWORD(v868));
								v284 = *(int *)0xD71E58;
								*(_DWORD *)v283 = *(int *)0xD71F10;
								*(_DWORD *)(v283 + 4) = 0;
								*(_DWORD *)(v283 + 8) = 0;
								*(_DWORD *)(v283 + 12) = 0;
								*(_DWORD *)(v283 + 16) = 0;
								*(_DWORD *)(v283 + 20) = 0;
								v285 = *(int *)0xD72020;
								*(_DWORD *)(v283 + 24) = *v674;
								*(_BYTE *)(v283 + 32) = 0;
								*(_DWORD *)(v283 + 28) = 0;
								*(_BYTE *)(v283 + 40) = 0;
								*(_DWORD *)(v283 + 36) = 0;
								*(_DWORD *)(v283 + 44) = 0;
								*(_DWORD *)(v283 + 52) = -1;
								*(_DWORD *)(v283 + 48) = 0;
								*(_DWORD *)(v283 + 76) = 1065353216;
								*(_DWORD *)(v283 + 64) = 0;
								*(_DWORD *)(v283 + 68) = 0;
								*(_DWORD *)(v283 + 72) = 0;
								*(_DWORD *)(v283 + 92) = 1065353216;
								*(_DWORD *)(v283 + 88) = 0;
								*(_DWORD *)(v283 + 80) = 0;
								*(_DWORD *)(v283 + 84) = 0;
								*(_DWORD *)(v283 + 100) = 0;
								*(_DWORD *)(v283 + 96) = 0;
								*(_DWORD *)v283 = v284;
								*(_DWORD *)v283 = v285;
								GameCall<int>(0xAA364C, 0xd6ff70)(v283, 16);
								v5 = v283;
								return v5;
							}
							if (v1 > 17021)
							{
								if (v1 == 17031)
								{
									v686[0] = -1;
									v686[1] = 0;
									v476 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, v686, HIDWORD(v868));
									v477 = *(int *)0xD71E58;
									*(_DWORD *)v476 = *(int *)0xD71F10;
									*(_DWORD *)(v476 + 4) = 0;
									*(_DWORD *)(v476 + 8) = 0;
									*(_DWORD *)(v476 + 12) = 0;
									*(_DWORD *)(v476 + 16) = 0;
									*(_DWORD *)(v476 + 20) = 0;
									v478 = *(int *)0xD72024;
									*(_DWORD *)(v476 + 24) = *v674;
									*(_BYTE *)(v476 + 32) = 0;
									*(_DWORD *)(v476 + 28) = 0;
									*(_BYTE *)(v476 + 40) = 0;
									*(_DWORD *)(v476 + 36) = 0;
									*(_DWORD *)(v476 + 44) = 0;
									*(_DWORD *)(v476 + 52) = -1;
									*(_DWORD *)(v476 + 48) = 0;
									*(_DWORD *)(v476 + 76) = 1065353216;
									*(_DWORD *)(v476 + 64) = 0;
									*(_DWORD *)(v476 + 68) = 0;
									*(_DWORD *)(v476 + 72) = 0;
									*(_DWORD *)(v476 + 92) = 1065353216;
									*(_DWORD *)(v476 + 88) = 0;
									*(_DWORD *)(v476 + 80) = 0;
									*(_DWORD *)(v476 + 84) = 0;
									*(_DWORD *)(v476 + 100) = 0;
									*(_DWORD *)(v476 + 96) = 0;
									*(_DWORD *)v476 = v477;
									*(_DWORD *)v476 = v478;
									GameCall<int>(0xAA364C, 0xd6ff70)(v476, 16);
									v5 = v476;
									return v5;
								}
								if (v1 == 18011)
								{
									v699 = -256;
									v237 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v699, HIDWORD(v868));
									v238 = *(int *)0xD71E58;
									*(_DWORD *)v237 = *(int *)0xD71F10;
									*(_DWORD *)(v237 + 4) = 0;
									*(_DWORD *)(v237 + 8) = 0;
									*(_DWORD *)(v237 + 12) = 0;
									*(_DWORD *)(v237 + 16) = 0;
									*(_DWORD *)(v237 + 20) = 0;
									v239 = *(int *)0xD72028;
									*(_DWORD *)(v237 + 24) = *v674;
									*(_BYTE *)(v237 + 32) = 0;
									*(_DWORD *)(v237 + 28) = 0;
									*(_BYTE *)(v237 + 40) = 0;
									*(_DWORD *)(v237 + 36) = 0;
									*(_DWORD *)(v237 + 44) = 0;
									*(_DWORD *)(v237 + 52) = -1;
									*(_DWORD *)(v237 + 48) = 0;
									*(_DWORD *)(v237 + 76) = 1065353216;
									*(_DWORD *)(v237 + 64) = 0;
									*(_DWORD *)(v237 + 68) = 0;
									*(_DWORD *)(v237 + 72) = 0;
									*(_DWORD *)(v237 + 92) = 1065353216;
									*(_DWORD *)(v237 + 88) = 0;
									*(_DWORD *)(v237 + 80) = 0;
									*(_DWORD *)(v237 + 84) = 0;
									*(_DWORD *)(v237 + 100) = 0;
									*(_DWORD *)(v237 + 96) = 0;
									*(_DWORD *)v237 = v238;
									*(_DWORD *)v237 = v239;
									GameCall<int>(0xAA364C, 0xd6ff70)(v237, 16);
									v5 = v237;
									return v5;
								}
							}
							else if (v1 == 17011)
							{
								v684[1] = 0;
								v684[0] = -1;
								v135 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, v684, HIDWORD(v868));
								v136 = *(int *)0xD71E58;
								*(_DWORD *)v135 = *(int *)0xD71F10;
								*(_DWORD *)(v135 + 4) = 0;
								*(_DWORD *)(v135 + 8) = 0;
								*(_DWORD *)(v135 + 12) = 0;
								*(_DWORD *)(v135 + 16) = 0;
								*(_DWORD *)(v135 + 20) = 0;
								v137 = *(int *)0xD7201C;
								*(_DWORD *)(v135 + 24) = *v674;
								*(_BYTE *)(v135 + 32) = 0;
								*(_DWORD *)(v135 + 28) = 0;
								*(_BYTE *)(v135 + 40) = 0;
								*(_DWORD *)(v135 + 36) = 0;
								*(_DWORD *)(v135 + 44) = 0;
								*(_DWORD *)(v135 + 52) = -1;
								*(_DWORD *)(v135 + 48) = 0;
								*(_DWORD *)(v135 + 76) = 1065353216;
								*(_DWORD *)(v135 + 64) = 0;
								*(_DWORD *)(v135 + 68) = 0;
								*(_DWORD *)(v135 + 72) = 0;
								*(_DWORD *)(v135 + 92) = 1065353216;
								*(_DWORD *)(v135 + 88) = 0;
								*(_DWORD *)(v135 + 80) = 0;
								*(_DWORD *)(v135 + 84) = 0;
								*(_DWORD *)(v135 + 100) = 0;
								*(_DWORD *)(v135 + 96) = 0;
								*(_DWORD *)v135 = v136;
								*(_DWORD *)v135 = v137;
								GameCall<int>(0xAA364C, 0xd6ff70)(v135, 16);
								v5 = v135;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
							case 16011:
								v681[1] = 0;
								v681[0] = -1;
								v355 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, v681, HIDWORD(v868));
								v356 = *(int *)0xD71E58;
								*(_DWORD *)v355 = *(int *)0xD71F10;
								*(_DWORD *)(v355 + 4) = 0;
								*(_DWORD *)(v355 + 8) = 0;
								*(_DWORD *)(v355 + 12) = 0;
								*(_DWORD *)(v355 + 16) = 0;
								*(_DWORD *)(v355 + 20) = 0;
								v357 = *(int *)0xD72010;
								*(_DWORD *)(v355 + 24) = *v674;
								*(_BYTE *)(v355 + 32) = 0;
								*(_DWORD *)(v355 + 28) = 0;
								*(_BYTE *)(v355 + 40) = 0;
								*(_DWORD *)(v355 + 36) = 0;
								*(_DWORD *)(v355 + 44) = 0;
								*(_DWORD *)(v355 + 52) = -1;
								*(_DWORD *)(v355 + 48) = 0;
								*(_DWORD *)(v355 + 76) = 1065353216;
								*(_DWORD *)(v355 + 64) = 0;
								*(_DWORD *)(v355 + 68) = 0;
								*(_DWORD *)(v355 + 72) = 0;
								*(_DWORD *)(v355 + 92) = 1065353216;
								*(_DWORD *)(v355 + 88) = 0;
								*(_DWORD *)(v355 + 80) = 0;
								*(_DWORD *)(v355 + 84) = 0;
								*(_DWORD *)(v355 + 100) = 0;
								*(_DWORD *)(v355 + 96) = 0;
								*(_DWORD *)v355 = v356;
								*(_DWORD *)v355 = v357;
								GameCall<int>(0xAA364C, 0xd6ff70)(v355, 10);
								v5 = v355;
								return v5;
							case 16031:
								v682[0] = -1;
								v682[1] = 0;
								v405 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, v682, HIDWORD(v868));
								v406 = *(int *)0xD71E58;
								*(_DWORD *)v405 = *(int *)0xD71F10;
								*(_DWORD *)(v405 + 4) = 0;
								*(_DWORD *)(v405 + 8) = 0;
								*(_DWORD *)(v405 + 12) = 0;
								*(_DWORD *)(v405 + 16) = 0;
								*(_DWORD *)(v405 + 20) = 0;
								v407 = *(int *)0xD72014;
								*(_DWORD *)(v405 + 24) = *v674;
								*(_BYTE *)(v405 + 32) = 0;
								*(_DWORD *)(v405 + 28) = 0;
								*(_BYTE *)(v405 + 40) = 0;
								*(_DWORD *)(v405 + 36) = 0;
								*(_DWORD *)(v405 + 44) = 0;
								*(_DWORD *)(v405 + 52) = -1;
								*(_DWORD *)(v405 + 48) = 0;
								*(_DWORD *)(v405 + 76) = 1065353216;
								*(_DWORD *)(v405 + 64) = 0;
								*(_DWORD *)(v405 + 68) = 0;
								*(_DWORD *)(v405 + 72) = 0;
								*(_DWORD *)(v405 + 92) = 1065353216;
								*(_DWORD *)(v405 + 88) = 0;
								*(_DWORD *)(v405 + 80) = 0;
								*(_DWORD *)(v405 + 84) = 0;
								*(_DWORD *)(v405 + 100) = 0;
								*(_DWORD *)(v405 + 96) = 0;
								*(_DWORD *)v405 = v406;
								*(_DWORD *)v405 = v407;
								GameCall<int>(0xAA364C, 0xd6ff70)(v405, 10);
								v5 = v405;
								return v5;
							case 15091:
								v680[0] = -1;
								v680[1] = 0;
								v89 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, v680, HIDWORD(v868));
								v90 = *(int *)0xD71E58;
								*(_DWORD *)v89 = *(int *)0xD71F10;
								*(_DWORD *)(v89 + 4) = 0;
								*(_DWORD *)(v89 + 8) = 0;
								*(_DWORD *)(v89 + 12) = 0;
								*(_DWORD *)(v89 + 16) = 0;
								*(_DWORD *)(v89 + 20) = 0;
								v91 = *(int *)0xD7200C;
								*(_DWORD *)(v89 + 24) = *v674;
								*(_BYTE *)(v89 + 32) = 0;
								*(_DWORD *)(v89 + 28) = 0;
								*(_BYTE *)(v89 + 40) = 0;
								*(_DWORD *)(v89 + 36) = 0;
								*(_DWORD *)(v89 + 44) = 0;
								*(_DWORD *)(v89 + 52) = -1;
								*(_DWORD *)(v89 + 48) = 0;
								*(_DWORD *)(v89 + 76) = 1065353216;
								*(_DWORD *)(v89 + 64) = 0;
								*(_DWORD *)(v89 + 68) = 0;
								*(_DWORD *)(v89 + 72) = 0;
								*(_DWORD *)(v89 + 92) = 1065353216;
								*(_DWORD *)(v89 + 88) = 0;
								*(_DWORD *)(v89 + 80) = 0;
								*(_DWORD *)(v89 + 84) = 0;
								*(_DWORD *)(v89 + 100) = 0;
								*(_DWORD *)(v89 + 96) = 0;
								*(_DWORD *)v89 = v90;
								*(_DWORD *)v89 = v91;
								GameCall<int>(0xAA364C, 0xd6ff70)(v89, 16);
								v5 = v89;
								return v5;
							}
						}
					}
					else
					{
						if (v1 == 15011)
						{
							v698 = -256;
							v202 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v698, HIDWORD(v868));
							v203 = *(int *)0xD71E58;
							*(_DWORD *)v202 = *(int *)0xD71F10;
							*(_DWORD *)(v202 + 4) = 0;
							*(_DWORD *)(v202 + 8) = 0;
							*(_DWORD *)(v202 + 12) = 0;
							*(_DWORD *)(v202 + 16) = 0;
							*(_DWORD *)(v202 + 20) = 0;
							v204 = *(int *)0xD71FF4;
							*(_DWORD *)(v202 + 24) = *v674;
							*(_BYTE *)(v202 + 32) = 0;
							*(_DWORD *)(v202 + 28) = 0;
							*(_BYTE *)(v202 + 40) = 0;
							*(_DWORD *)(v202 + 36) = 0;
							*(_DWORD *)(v202 + 44) = 0;
							*(_DWORD *)(v202 + 52) = -1;
							*(_DWORD *)(v202 + 48) = 0;
							*(_DWORD *)(v202 + 76) = 1065353216;
							*(_DWORD *)(v202 + 64) = 0;
							*(_DWORD *)(v202 + 68) = 0;
							*(_DWORD *)(v202 + 72) = 0;
							*(_DWORD *)(v202 + 92) = 1065353216;
							*(_DWORD *)(v202 + 88) = 0;
							*(_DWORD *)(v202 + 80) = 0;
							*(_DWORD *)(v202 + 84) = 0;
							*(_DWORD *)(v202 + 100) = 0;
							*(_DWORD *)(v202 + 96) = 0;
							*(_DWORD *)v202 = v203;
							*(_DWORD *)v202 = v204;
							GameCall<int>(0xAA364C, 0xd6ff70)(v202, 16);
							v5 = v202;
							return v5;
						}
						if (v1 > 15011)
						{
							if (v1 == 15031)
							{
								v688 = -256;
								v389 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v688, HIDWORD(v868));
								v390 = *(int *)0xD71E58;
								*(_DWORD *)v389 = *(int *)0xD71F10;
								*(_DWORD *)(v389 + 4) = 0;
								*(_DWORD *)(v389 + 8) = 0;
								*(_DWORD *)(v389 + 12) = 0;
								*(_DWORD *)(v389 + 16) = 0;
								*(_DWORD *)(v389 + 20) = 0;
								v391 = *(int *)0xD71FFC;
								*(_DWORD *)(v389 + 24) = *v674;
								*(_BYTE *)(v389 + 32) = 0;
								*(_DWORD *)(v389 + 28) = 0;
								*(_BYTE *)(v389 + 40) = 0;
								*(_DWORD *)(v389 + 36) = 0;
								*(_DWORD *)(v389 + 44) = 0;
								*(_DWORD *)(v389 + 52) = -1;
								*(_DWORD *)(v389 + 48) = 0;
								*(_DWORD *)(v389 + 76) = 1065353216;
								*(_DWORD *)(v389 + 64) = 0;
								*(_DWORD *)(v389 + 68) = 0;
								*(_DWORD *)(v389 + 72) = 0;
								*(_DWORD *)(v389 + 92) = 1065353216;
								*(_DWORD *)(v389 + 88) = 0;
								*(_DWORD *)(v389 + 80) = 0;
								*(_DWORD *)(v389 + 84) = 0;
								*(_DWORD *)(v389 + 100) = 0;
								*(_DWORD *)(v389 + 96) = 0;
								*(_DWORD *)v389 = v390;
								*(_DWORD *)v389 = v391;
								GameCall<int>(0xAA364C, 0xd6ff70)(v389, 16);
								v5 = v389;
								return v5;
							}
							if (v1 > 15031)
							{
								if (v1 == 15041)
								{
									v687 = -256;
									v479 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v687, HIDWORD(v868));
									v480 = *(int *)0xD71F24;
									*(_DWORD *)v479 = *(int *)0xD71F10;
									*(_DWORD *)(v479 + 4) = 0;
									*(_DWORD *)(v479 + 8) = 0;
									*(_DWORD *)(v479 + 12) = 0;
									*(_DWORD *)(v479 + 16) = 0;
									*(_DWORD *)(v479 + 20) = 0;
									*(_DWORD *)(v479 + 24) = *v674;
									*(_BYTE *)(v479 + 32) = 0;
									*(_DWORD *)(v479 + 28) = 0;
									*(_BYTE *)(v479 + 40) = 0;
									*(_DWORD *)(v479 + 36) = 0;
									*(_DWORD *)(v479 + 44) = 0;
									*(_DWORD *)(v479 + 52) = -1;
									*(_DWORD *)(v479 + 48) = 0;
									*(_DWORD *)(v479 + 76) = 1065353216;
									*(_DWORD *)(v479 + 64) = 0;
									*(_DWORD *)(v479 + 92) = 1065353216;
									*(_DWORD *)(v479 + 68) = 0;
									*(_DWORD *)(v479 + 72) = 0;
									*(_DWORD *)(v479 + 80) = 0;
									*(_DWORD *)(v479 + 88) = 0;
									*(_DWORD *)(v479 + 84) = 0;
									*(_DWORD *)(v479 + 100) = 0;
									*(_DWORD *)(v479 + 96) = 0;
									*(_DWORD *)v479 = v480;
									GameCall<int>(0xAA364C, 0xd6ff70)(v479, 30);
									v5 = v479;
									*(_DWORD *)v479 = *(int *)0xD72000;
									return v5;
								}
								if (v1 == 15051)
								{
									v678[0] = -1;
									v678[1] = 0;
									v277 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, v678, HIDWORD(v868));
									v278 = *(int *)0xD71E58;
									*(_DWORD *)v277 = *(int *)0xD71F10;
									*(_DWORD *)(v277 + 4) = 0;
									*(_DWORD *)(v277 + 8) = 0;
									*(_DWORD *)(v277 + 12) = 0;
									*(_DWORD *)(v277 + 16) = 0;
									*(_DWORD *)(v277 + 20) = 0;
									v279 = *(int *)0xD72004;
									*(_DWORD *)(v277 + 24) = *v674;
									*(_BYTE *)(v277 + 32) = 0;
									*(_DWORD *)(v277 + 28) = 0;
									*(_BYTE *)(v277 + 40) = 0;
									*(_DWORD *)(v277 + 36) = 0;
									*(_DWORD *)(v277 + 44) = 0;
									*(_DWORD *)(v277 + 52) = -1;
									*(_DWORD *)(v277 + 48) = 0;
									*(_DWORD *)(v277 + 76) = 1065353216;
									*(_DWORD *)(v277 + 64) = 0;
									*(_DWORD *)(v277 + 68) = 0;
									*(_DWORD *)(v277 + 72) = 0;
									*(_DWORD *)(v277 + 92) = 1065353216;
									*(_DWORD *)(v277 + 88) = 0;
									*(_DWORD *)(v277 + 80) = 0;
									*(_DWORD *)(v277 + 84) = 0;
									*(_DWORD *)(v277 + 100) = 0;
									*(_DWORD *)(v277 + 96) = 0;
									*(_DWORD *)v277 = v278;
									*(_DWORD *)v277 = v279;
									GameCall<int>(0xAA364C, 0xd6ff70)(v277, 16);
									v5 = v277;
									return v5;
								}
							}
							else if (v1 == 15021)
							{
								v689 = -256;
								v160 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v689, HIDWORD(v868));
								v161 = *(int *)0xD71E58;
								*(_DWORD *)v160 = *(int *)0xD71F10;
								*(_DWORD *)(v160 + 4) = 0;
								*(_DWORD *)(v160 + 8) = 0;
								*(_DWORD *)(v160 + 12) = 0;
								*(_DWORD *)(v160 + 16) = 0;
								*(_DWORD *)(v160 + 20) = 0;
								v162 = *(int *)0xD71FF8;
								*(_DWORD *)(v160 + 24) = *v674;
								*(_BYTE *)(v160 + 32) = 0;
								*(_DWORD *)(v160 + 28) = 0;
								*(_BYTE *)(v160 + 40) = 0;
								*(_DWORD *)(v160 + 36) = 0;
								*(_DWORD *)(v160 + 44) = 0;
								*(_DWORD *)(v160 + 52) = -1;
								*(_DWORD *)(v160 + 48) = 0;
								*(_DWORD *)(v160 + 76) = 1065353216;
								*(_DWORD *)(v160 + 64) = 0;
								*(_DWORD *)(v160 + 68) = 0;
								*(_DWORD *)(v160 + 72) = 0;
								*(_DWORD *)(v160 + 92) = 1065353216;
								*(_DWORD *)(v160 + 88) = 0;
								*(_DWORD *)(v160 + 80) = 0;
								*(_DWORD *)(v160 + 84) = 0;
								*(_DWORD *)(v160 + 100) = 0;
								*(_DWORD *)(v160 + 96) = 0;
								*(_DWORD *)v160 = v161;
								*(_DWORD *)v160 = v162;
								GameCall<int>(0xAA364C, 0xd6ff70)(v160, 16);
								v5 = v160;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
							case 14111:
								v696 = -256;
								v361 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v696, HIDWORD(v868));
								v362 = *(int *)0xD71E58;
								*(_DWORD *)v361 = *(int *)0xD71F10;
								*(_DWORD *)(v361 + 4) = 0;
								*(_DWORD *)(v361 + 8) = 0;
								*(_DWORD *)(v361 + 12) = 0;
								*(_DWORD *)(v361 + 16) = 0;
								*(_DWORD *)(v361 + 20) = 0;
								v363 = *(int *)0xD71FEC;
								*(_DWORD *)(v361 + 24) = *v674;
								*(_BYTE *)(v361 + 32) = 0;
								*(_DWORD *)(v361 + 28) = 0;
								*(_BYTE *)(v361 + 40) = 0;
								*(_DWORD *)(v361 + 36) = 0;
								*(_DWORD *)(v361 + 44) = 0;
								*(_DWORD *)(v361 + 52) = -1;
								*(_DWORD *)(v361 + 48) = 0;
								*(_DWORD *)(v361 + 76) = 1065353216;
								*(_DWORD *)(v361 + 64) = 0;
								*(_DWORD *)(v361 + 68) = 0;
								*(_DWORD *)(v361 + 72) = 0;
								*(_DWORD *)(v361 + 92) = 1065353216;
								*(_DWORD *)(v361 + 88) = 0;
								*(_DWORD *)(v361 + 80) = 0;
								*(_DWORD *)(v361 + 84) = 0;
								*(_DWORD *)(v361 + 100) = 0;
								*(_DWORD *)(v361 + 96) = 0;
								*(_DWORD *)v361 = v362;
								*(_DWORD *)v361 = v363;
								GameCall<int>(0xAA364C, 0xd6ff70)(v361, 16);
								v5 = v361;
								return v5;
							case 14121:
								v697 = -256;
								v408 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v697, HIDWORD(v868));
								v409 = *(int *)0xD71E58;
								*(_DWORD *)v408 = *(int *)0xD71F10;
								*(_DWORD *)(v408 + 4) = 0;
								*(_DWORD *)(v408 + 8) = 0;
								*(_DWORD *)(v408 + 12) = 0;
								*(_DWORD *)(v408 + 16) = 0;
								*(_DWORD *)(v408 + 20) = 0;
								v410 = *(int *)0xD71FF0;
								*(_DWORD *)(v408 + 24) = *v674;
								*(_BYTE *)(v408 + 32) = 0;
								*(_DWORD *)(v408 + 28) = 0;
								*(_BYTE *)(v408 + 40) = 0;
								*(_DWORD *)(v408 + 36) = 0;
								*(_DWORD *)(v408 + 44) = 0;
								*(_DWORD *)(v408 + 52) = -1;
								*(_DWORD *)(v408 + 48) = 0;
								*(_DWORD *)(v408 + 76) = 1065353216;
								*(_DWORD *)(v408 + 64) = 0;
								*(_DWORD *)(v408 + 68) = 0;
								*(_DWORD *)(v408 + 72) = 0;
								*(_DWORD *)(v408 + 92) = 1065353216;
								*(_DWORD *)(v408 + 88) = 0;
								*(_DWORD *)(v408 + 80) = 0;
								*(_DWORD *)(v408 + 84) = 0;
								*(_DWORD *)(v408 + 100) = 0;
								*(_DWORD *)(v408 + 96) = 0;
								*(_DWORD *)v408 = v409;
								*(_DWORD *)v408 = v410;
								GameCall<int>(0xAA364C, 0xd6ff70)(v408, 16);
								v5 = v408;
								return v5;
							case 14091:
								v695 = -256;
								v6 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v695, HIDWORD(v868));
								v7 = *(int *)0xD71E58;
								*(_DWORD *)v6 = *(int *)0xD71F10;
								*(_DWORD *)(v6 + 4) = 0;
								*(_DWORD *)(v6 + 8) = 0;
								*(_DWORD *)(v6 + 12) = 0;
								*(_DWORD *)(v6 + 16) = 0;
								*(_DWORD *)(v6 + 20) = 0;
								v8 = *(int *)0xD71FE8;
								*(_DWORD *)(v6 + 24) = *v674;
								*(_BYTE *)(v6 + 32) = 0;
								*(_DWORD *)(v6 + 28) = 0;
								*(_BYTE *)(v6 + 40) = 0;
								*(_DWORD *)(v6 + 36) = 0;
								*(_DWORD *)(v6 + 44) = 0;
								*(_DWORD *)(v6 + 52) = -1;
								*(_DWORD *)(v6 + 48) = 0;
								*(_DWORD *)(v6 + 76) = 1065353216;
								*(_DWORD *)(v6 + 64) = 0;
								*(_DWORD *)(v6 + 68) = 0;
								*(_DWORD *)(v6 + 72) = 0;
								*(_DWORD *)(v6 + 92) = 1065353216;
								*(_DWORD *)(v6 + 88) = 0;
								*(_DWORD *)(v6 + 80) = 0;
								*(_DWORD *)(v6 + 84) = 0;
								*(_DWORD *)(v6 + 100) = 0;
								*(_DWORD *)(v6 + 96) = 0;
								*(_DWORD *)v6 = v7;
								*(_DWORD *)v6 = v8;
								GameCall<int>(0xAA364C, 0xd6ff70)(v6, 16);
								v5 = v6;
								return v5;
							}
						}
					}
				}
			}
		}
		else
		{
			if (v1 == 28021)
			{
				v823 = -256;
				v18 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v823, HIDWORD(v868));
				v19 = *(int *)0xD71E58;
				*(_DWORD *)v18 = *(int *)0xD71F10;
				*(_DWORD *)(v18 + 4) = 0;
				*(_DWORD *)(v18 + 8) = 0;
				*(_DWORD *)(v18 + 12) = 0;
				*(_DWORD *)(v18 + 16) = 0;
				*(_DWORD *)(v18 + 20) = 0;
				v20 = *(int *)0xD720B8;
				*(_DWORD *)(v18 + 24) = *v674;
				*(_BYTE *)(v18 + 32) = 0;
				*(_DWORD *)(v18 + 28) = 0;
				*(_BYTE *)(v18 + 40) = 0;
				*(_DWORD *)(v18 + 36) = 0;
				*(_DWORD *)(v18 + 44) = 0;
				*(_DWORD *)(v18 + 52) = -1;
				*(_DWORD *)(v18 + 48) = 0;
				*(_DWORD *)(v18 + 76) = 1065353216;
				*(_DWORD *)(v18 + 64) = 0;
				*(_DWORD *)(v18 + 92) = 1065353216;
				*(_DWORD *)(v18 + 68) = 0;
				*(_DWORD *)(v18 + 72) = 0;
				*(_DWORD *)(v18 + 80) = 0;
				*(_DWORD *)(v18 + 88) = 0;
				*(_DWORD *)(v18 + 84) = 0;
				*(_DWORD *)(v18 + 100) = 0;
				*(_DWORD *)(v18 + 96) = 0;
				*(_DWORD *)v18 = v19;
				*(_DWORD *)v18 = v20;
				GameCall<int>(0xAA364C, 0xd6ff70)(v18, 16);
				return ((int(__fastcall *)(int))v673)(v18);
			}
			if (v1 <= 28021)
			{
				if (v1 == 21101)
				{
					v705 = -256;
					v45 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v705, HIDWORD(v868));
					v46 = *(int *)0xD71E58;
					*(_DWORD *)v45 = *(int *)0xD71F10;
					*(_DWORD *)(v45 + 4) = 0;
					*(_DWORD *)(v45 + 8) = 0;
					*(_DWORD *)(v45 + 12) = 0;
					*(_DWORD *)(v45 + 16) = 0;
					*(_DWORD *)(v45 + 20) = 0;
					v47 = *(int *)0xD72070;
					*(_DWORD *)(v45 + 24) = *v674;
					*(_BYTE *)(v45 + 32) = 0;
					*(_DWORD *)(v45 + 28) = 0;
					*(_BYTE *)(v45 + 40) = 0;
					*(_DWORD *)(v45 + 36) = 0;
					*(_DWORD *)(v45 + 44) = 0;
					*(_DWORD *)(v45 + 52) = -1;
					*(_DWORD *)(v45 + 48) = 0;
					*(_DWORD *)(v45 + 76) = 1065353216;
					*(_DWORD *)(v45 + 64) = 0;
					*(_DWORD *)(v45 + 68) = 0;
					*(_DWORD *)(v45 + 72) = 0;
					*(_DWORD *)(v45 + 92) = 1065353216;
					*(_DWORD *)(v45 + 88) = 0;
					*(_DWORD *)(v45 + 80) = 0;
					*(_DWORD *)(v45 + 84) = 0;
					*(_DWORD *)(v45 + 100) = 0;
					*(_DWORD *)(v45 + 96) = 0;
					*(_DWORD *)v45 = v46;
					*(_DWORD *)v45 = v47;
					GameCall<int>(0xAA364C, 0xd6ff70)(v45, 16);
					v5 = v45;
					return v5;
				}
				if (v1 <= 21101)
				{
					if (v1 == 20091)
					{
						v720 = -256;
						v115 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v720, HIDWORD(v868));
						v116 = *(int *)0xD71E58;
						*(_DWORD *)v115 = *(int *)0xD71F10;
						*(_DWORD *)(v115 + 4) = 0;
						*(_DWORD *)(v115 + 8) = 0;
						*(_DWORD *)(v115 + 12) = 0;
						*(_DWORD *)(v115 + 16) = 0;
						*(_DWORD *)(v115 + 20) = 0;
						v117 = *(int *)0xD7204C;
						*(_DWORD *)(v115 + 24) = *v674;
						*(_BYTE *)(v115 + 32) = 0;
						*(_DWORD *)(v115 + 28) = 0;
						*(_BYTE *)(v115 + 40) = 0;
						*(_DWORD *)(v115 + 36) = 0;
						*(_DWORD *)(v115 + 44) = 0;
						*(_DWORD *)(v115 + 52) = -1;
						*(_DWORD *)(v115 + 48) = 0;
						*(_DWORD *)(v115 + 76) = 1065353216;
						*(_DWORD *)(v115 + 64) = 0;
						*(_DWORD *)(v115 + 68) = 0;
						*(_DWORD *)(v115 + 72) = 0;
						*(_DWORD *)(v115 + 92) = 1065353216;
						*(_DWORD *)(v115 + 88) = 0;
						*(_DWORD *)(v115 + 80) = 0;
						*(_DWORD *)(v115 + 84) = 0;
						*(_DWORD *)(v115 + 100) = 0;
						*(_DWORD *)(v115 + 96) = 0;
						*(_DWORD *)v115 = v116;
						*(_DWORD *)v115 = v117;
						GameCall<int>(0xAA364C, 0xd6ff70)(v115, 16);
						v5 = v115;
						return v5;
					}
					if (v1 > 20091)
					{
						if (v1 == 21041)
						{
							v710 = -256;
							v225 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v710, HIDWORD(v868));
							v226 = *(int *)0xD71E58;
							*(_DWORD *)v225 = *(int *)0xD71F10;
							*(_DWORD *)(v225 + 4) = 0;
							*(_DWORD *)(v225 + 8) = 0;
							*(_DWORD *)(v225 + 12) = 0;
							*(_DWORD *)(v225 + 16) = 0;
							*(_DWORD *)(v225 + 20) = 0;
							v227 = *(int *)0xD7205C;
							*(_DWORD *)(v225 + 24) = *v674;
							*(_BYTE *)(v225 + 32) = 0;
							*(_DWORD *)(v225 + 28) = 0;
							*(_BYTE *)(v225 + 40) = 0;
							*(_DWORD *)(v225 + 36) = 0;
							*(_DWORD *)(v225 + 44) = 0;
							*(_DWORD *)(v225 + 52) = -1;
							*(_DWORD *)(v225 + 48) = 0;
							*(_DWORD *)(v225 + 76) = 1065353216;
							*(_DWORD *)(v225 + 64) = 0;
							*(_DWORD *)(v225 + 68) = 0;
							*(_DWORD *)(v225 + 72) = 0;
							*(_DWORD *)(v225 + 92) = 1065353216;
							*(_DWORD *)(v225 + 88) = 0;
							*(_DWORD *)(v225 + 80) = 0;
							*(_DWORD *)(v225 + 84) = 0;
							*(_DWORD *)(v225 + 100) = 0;
							*(_DWORD *)(v225 + 96) = 0;
							*(_DWORD *)v225 = v226;
							*(_DWORD *)v225 = v227;
							GameCall<int>(0xAA364C, 0xd6ff70)(v225, 16);
							v5 = v225;
							return v5;
						}
						if (v1 > 21041)
						{
							if (v1 == 21061)
							{
								v702 = -256;
								v352 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v702, HIDWORD(v868));
								v353 = *(int *)0xD71E58;
								*(_DWORD *)v352 = *(int *)0xD71F10;
								*(_DWORD *)(v352 + 4) = 0;
								*(_DWORD *)(v352 + 8) = 0;
								*(_DWORD *)(v352 + 12) = 0;
								*(_DWORD *)(v352 + 16) = 0;
								*(_DWORD *)(v352 + 20) = 0;
								v354 = *(int *)0xD72064;
								*(_DWORD *)(v352 + 24) = *v674;
								*(_BYTE *)(v352 + 32) = 0;
								*(_DWORD *)(v352 + 28) = 0;
								*(_BYTE *)(v352 + 40) = 0;
								*(_DWORD *)(v352 + 36) = 0;
								*(_DWORD *)(v352 + 44) = 0;
								*(_DWORD *)(v352 + 52) = -1;
								*(_DWORD *)(v352 + 48) = 0;
								*(_DWORD *)(v352 + 76) = 1065353216;
								*(_DWORD *)(v352 + 64) = 0;
								*(_DWORD *)(v352 + 68) = 0;
								*(_DWORD *)(v352 + 72) = 0;
								*(_DWORD *)(v352 + 92) = 1065353216;
								*(_DWORD *)(v352 + 88) = 0;
								*(_DWORD *)(v352 + 80) = 0;
								*(_DWORD *)(v352 + 84) = 0;
								*(_DWORD *)(v352 + 100) = 0;
								*(_DWORD *)(v352 + 96) = 0;
								*(_DWORD *)v352 = v353;
								*(_DWORD *)v352 = v354;
								GameCall<int>(0xAA364C, 0xd6ff70)(v352, 16);
								v5 = v352;
								return v5;
							}
							if (v1 > 21061)
							{
								if (v1 == 21081)
								{
									v703 = -256;
									v492 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v703, HIDWORD(v868));
									v493 = *(int *)0xD71E58;
									*(_DWORD *)v492 = *(int *)0xD71F10;
									*(_DWORD *)(v492 + 4) = 0;
									*(_DWORD *)(v492 + 8) = 0;
									*(_DWORD *)(v492 + 12) = 0;
									*(_DWORD *)(v492 + 16) = 0;
									*(_DWORD *)(v492 + 20) = 0;
									v494 = *(int *)0xD72068;
									*(_DWORD *)(v492 + 24) = *v674;
									*(_BYTE *)(v492 + 32) = 0;
									*(_DWORD *)(v492 + 28) = 0;
									*(_BYTE *)(v492 + 40) = 0;
									*(_DWORD *)(v492 + 36) = 0;
									*(_DWORD *)(v492 + 44) = 0;
									*(_DWORD *)(v492 + 52) = -1;
									*(_DWORD *)(v492 + 48) = 0;
									*(_DWORD *)(v492 + 76) = 1065353216;
									*(_DWORD *)(v492 + 64) = 0;
									*(_DWORD *)(v492 + 68) = 0;
									*(_DWORD *)(v492 + 72) = 0;
									*(_DWORD *)(v492 + 92) = 1065353216;
									*(_DWORD *)(v492 + 88) = 0;
									*(_DWORD *)(v492 + 80) = 0;
									*(_DWORD *)(v492 + 84) = 0;
									*(_DWORD *)(v492 + 100) = 0;
									*(_DWORD *)(v492 + 96) = 0;
									*(_DWORD *)v492 = v493;
									*(_DWORD *)v492 = v494;
									GameCall<int>(0xAA364C, 0xd6ff70)(v492, 16);
									v5 = v492;
									return v5;
								}
								if (v1 == 21091)
								{
									v704 = -256;
									v256 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v704, HIDWORD(v868));
									v257 = *(int *)0xD71E58;
									*(_DWORD *)v256 = *(int *)0xD71F10;
									*(_DWORD *)(v256 + 4) = 0;
									*(_DWORD *)(v256 + 8) = 0;
									*(_DWORD *)(v256 + 12) = 0;
									*(_DWORD *)(v256 + 16) = 0;
									*(_DWORD *)(v256 + 20) = 0;
									v258 = *(int *)0xD7206C;
									*(_DWORD *)(v256 + 24) = *v674;
									*(_BYTE *)(v256 + 32) = 0;
									*(_DWORD *)(v256 + 28) = 0;
									*(_BYTE *)(v256 + 40) = 0;
									*(_DWORD *)(v256 + 36) = 0;
									*(_DWORD *)(v256 + 44) = 0;
									*(_DWORD *)(v256 + 52) = -1;
									*(_DWORD *)(v256 + 48) = 0;
									*(_DWORD *)(v256 + 76) = 1065353216;
									*(_DWORD *)(v256 + 64) = 0;
									*(_DWORD *)(v256 + 68) = 0;
									*(_DWORD *)(v256 + 72) = 0;
									*(_DWORD *)(v256 + 92) = 1065353216;
									*(_DWORD *)(v256 + 88) = 0;
									*(_DWORD *)(v256 + 80) = 0;
									*(_DWORD *)(v256 + 84) = 0;
									*(_DWORD *)(v256 + 100) = 0;
									*(_DWORD *)(v256 + 96) = 0;
									*(_DWORD *)v256 = v257;
									*(_DWORD *)v256 = v258;
									GameCall<int>(0xAA364C, 0xd6ff70)(v256, 16);
									v5 = v256;
									return v5;
								}
							}
							else if (v1 == 21051)
							{
								v701 = -256;
								v147 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v701, HIDWORD(v868));
								v148 = *(int *)0xD71E58;
								*(_DWORD *)v147 = *(int *)0xD71F10;
								*(_DWORD *)(v147 + 4) = 0;
								*(_DWORD *)(v147 + 8) = 0;
								*(_DWORD *)(v147 + 12) = 0;
								*(_DWORD *)(v147 + 16) = 0;
								*(_DWORD *)(v147 + 20) = 0;
								v149 = *(int *)0xD72060;
								*(_DWORD *)(v147 + 24) = *v674;
								*(_BYTE *)(v147 + 32) = 0;
								*(_DWORD *)(v147 + 28) = 0;
								*(_BYTE *)(v147 + 40) = 0;
								*(_DWORD *)(v147 + 36) = 0;
								*(_DWORD *)(v147 + 44) = 0;
								*(_DWORD *)(v147 + 52) = -1;
								*(_DWORD *)(v147 + 48) = 0;
								*(_DWORD *)(v147 + 76) = 1065353216;
								*(_DWORD *)(v147 + 64) = 0;
								*(_DWORD *)(v147 + 68) = 0;
								*(_DWORD *)(v147 + 72) = 0;
								*(_DWORD *)(v147 + 92) = 1065353216;
								*(_DWORD *)(v147 + 88) = 0;
								*(_DWORD *)(v147 + 80) = 0;
								*(_DWORD *)(v147 + 84) = 0;
								*(_DWORD *)(v147 + 100) = 0;
								*(_DWORD *)(v147 + 96) = 0;
								*(_DWORD *)v147 = v148;
								*(_DWORD *)v147 = v149;
								GameCall<int>(0xAA364C, 0xd6ff70)(v147, 16);
								v5 = v147;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
								case 21021:
									v712 = -256;
									v328 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v712, HIDWORD(v868));
									v329 = *(int *)0xD71E58;
									*(_DWORD *)v328 = *(int *)0xD71F10;
									*(_DWORD *)(v328 + 4) = 0;
									*(_DWORD *)(v328 + 8) = 0;
									*(_DWORD *)(v328 + 12) = 0;
									*(_DWORD *)(v328 + 16) = 0;
									*(_DWORD *)(v328 + 20) = 0;
									v330 = *(int *)0xD72054;
									*(_DWORD *)(v328 + 24) = *v674;
									*(_BYTE *)(v328 + 32) = 0;
									*(_DWORD *)(v328 + 28) = 0;
									*(_BYTE *)(v328 + 40) = 0;
									*(_DWORD *)(v328 + 36) = 0;
									*(_DWORD *)(v328 + 44) = 0;
									*(_DWORD *)(v328 + 52) = -1;
									*(_DWORD *)(v328 + 48) = 0;
									*(_DWORD *)(v328 + 76) = 1065353216;
									*(_DWORD *)(v328 + 64) = 0;
									*(_DWORD *)(v328 + 68) = 0;
									*(_DWORD *)(v328 + 72) = 0;
									*(_DWORD *)(v328 + 92) = 1065353216;
									*(_DWORD *)(v328 + 88) = 0;
									*(_DWORD *)(v328 + 80) = 0;
									*(_DWORD *)(v328 + 84) = 0;
									*(_DWORD *)(v328 + 100) = 0;
									*(_DWORD *)(v328 + 96) = 0;
									*(_DWORD *)v328 = v329;
									*(_DWORD *)v328 = v330;
									GameCall<int>(0xAA364C, 0xd6ff70)(v328, 16);
									v5 = v328;
									return v5;
								case 21031:
									v711 = -256;
									v427 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v711, HIDWORD(v868));
									v428 = *(int *)0xD71F24;
									*(_DWORD *)v427 = *(int *)0xD71F10;
									*(_DWORD *)(v427 + 4) = 0;
									*(_DWORD *)(v427 + 8) = 0;
									*(_DWORD *)(v427 + 12) = 0;
									*(_DWORD *)(v427 + 16) = 0;
									*(_DWORD *)(v427 + 20) = 0;
									*(_DWORD *)(v427 + 24) = *v674;
									*(_BYTE *)(v427 + 32) = 0;
									*(_DWORD *)(v427 + 28) = 0;
									*(_BYTE *)(v427 + 40) = 0;
									*(_DWORD *)(v427 + 36) = 0;
									*(_DWORD *)(v427 + 44) = 0;
									*(_DWORD *)(v427 + 52) = -1;
									*(_DWORD *)(v427 + 48) = 0;
									*(_DWORD *)(v427 + 76) = 1065353216;
									*(_DWORD *)(v427 + 64) = 0;
									*(_DWORD *)(v427 + 68) = 0;
									*(_DWORD *)(v427 + 72) = 0;
									*(_DWORD *)(v427 + 92) = 1065353216;
									*(_DWORD *)(v427 + 88) = 0;
									*(_DWORD *)(v427 + 80) = 0;
									*(_DWORD *)(v427 + 84) = 0;
									*(_DWORD *)(v427 + 100) = 0;
									*(_DWORD *)(v427 + 96) = 0;
									*(_DWORD *)v427 = v428;
									GameCall<int>(0xAA364C, 0xd6ff70)(v427, 30);
									v5 = v427;
									*(_DWORD *)v427 = *(int *)0xD72058;
									return v5;
								case 21011:
									v721 = -256;
									v81 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v721, HIDWORD(v868));
									v82 = *(int *)0xD71E58;
									*(_DWORD *)v81 = *(int *)0xD71F10;
									*(_DWORD *)(v81 + 4) = 0;
									*(_DWORD *)(v81 + 8) = 0;
									*(_DWORD *)(v81 + 12) = 0;
									*(_DWORD *)(v81 + 16) = 0;
									*(_DWORD *)(v81 + 20) = 0;
									v83 = *(int *)0xD72050;
									*(_DWORD *)(v81 + 24) = *v674;
									*(_BYTE *)(v81 + 32) = 0;
									*(_DWORD *)(v81 + 28) = 0;
									*(_BYTE *)(v81 + 40) = 0;
									*(_DWORD *)(v81 + 36) = 0;
									*(_DWORD *)(v81 + 44) = 0;
									*(_DWORD *)(v81 + 52) = -1;
									*(_DWORD *)(v81 + 48) = 0;
									*(_DWORD *)(v81 + 76) = 1065353216;
									*(_DWORD *)(v81 + 64) = 0;
									*(_DWORD *)(v81 + 68) = 0;
									*(_DWORD *)(v81 + 72) = 0;
									*(_DWORD *)(v81 + 92) = 1065353216;
									*(_DWORD *)(v81 + 88) = 0;
									*(_DWORD *)(v81 + 80) = 0;
									*(_DWORD *)(v81 + 84) = 0;
									*(_DWORD *)(v81 + 100) = 0;
									*(_DWORD *)(v81 + 96) = 0;
									*(_DWORD *)v81 = v82;
									*(_DWORD *)v81 = v83;
									GameCall<int>(0xAA364C, 0xd6ff70)(v81, 16);
									v5 = v81;
									return v5;
							}
						}
					}
					else
					{
						if (v1 == 20011)
						{
							v717 = -256;
							v211 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v717, HIDWORD(v868));
							v212 = *(int *)0xD71E58;
							*(_DWORD *)v211 = *(int *)0xD71F10;
							*(_DWORD *)(v211 + 4) = 0;
							*(_DWORD *)(v211 + 8) = 0;
							*(_DWORD *)(v211 + 12) = 0;
							*(_DWORD *)(v211 + 16) = 0;
							*(_DWORD *)(v211 + 20) = 0;
							v213 = *(int *)0xD72040;
							*(_DWORD *)(v211 + 24) = *v674;
							*(_BYTE *)(v211 + 32) = 0;
							*(_DWORD *)(v211 + 28) = 0;
							*(_BYTE *)(v211 + 40) = 0;
							*(_DWORD *)(v211 + 36) = 0;
							*(_DWORD *)(v211 + 44) = 0;
							*(_DWORD *)(v211 + 52) = -1;
							*(_DWORD *)(v211 + 48) = 0;
							*(_DWORD *)(v211 + 76) = 1065353216;
							*(_DWORD *)(v211 + 64) = 0;
							*(_DWORD *)(v211 + 68) = 0;
							*(_DWORD *)(v211 + 72) = 0;
							*(_DWORD *)(v211 + 92) = 1065353216;
							*(_DWORD *)(v211 + 88) = 0;
							*(_DWORD *)(v211 + 80) = 0;
							*(_DWORD *)(v211 + 84) = 0;
							*(_DWORD *)(v211 + 100) = 0;
							*(_DWORD *)(v211 + 96) = 0;
							*(_DWORD *)v211 = v212;
							*(_DWORD *)v211 = v213;
							GameCall<int>(0xAA364C, 0xd6ff70)(v211, 16);
							v5 = v211;
							return v5;
						}
						if (v1 > 20011)
						{
							switch (v1)
							{
							case 20041:
								v718 = -256;
								v325 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v718, HIDWORD(v868));
								v326 = *(int *)0xD71E58;
								*(_DWORD *)v325 = *(int *)0xD71F10;
								*(_DWORD *)(v325 + 4) = 0;
								*(_DWORD *)(v325 + 8) = 0;
								*(_DWORD *)(v325 + 12) = 0;
								*(_DWORD *)(v325 + 16) = 0;
								*(_DWORD *)(v325 + 20) = 0;
								v327 = *(int *)0xD72044;
								*(_DWORD *)(v325 + 24) = *v674;
								*(_BYTE *)(v325 + 32) = 0;
								*(_DWORD *)(v325 + 28) = 0;
								*(_BYTE *)(v325 + 40) = 0;
								*(_DWORD *)(v325 + 36) = 0;
								*(_DWORD *)(v325 + 44) = 0;
								*(_DWORD *)(v325 + 52) = -1;
								*(_DWORD *)(v325 + 48) = 0;
								*(_DWORD *)(v325 + 76) = 1065353216;
								*(_DWORD *)(v325 + 64) = 0;
								*(_DWORD *)(v325 + 68) = 0;
								*(_DWORD *)(v325 + 72) = 0;
								*(_DWORD *)(v325 + 92) = 1065353216;
								*(_DWORD *)(v325 + 88) = 0;
								*(_DWORD *)(v325 + 80) = 0;
								*(_DWORD *)(v325 + 84) = 0;
								*(_DWORD *)(v325 + 100) = 0;
								*(_DWORD *)(v325 + 96) = 0;
								*(_DWORD *)v325 = v326;
								*(_DWORD *)v325 = v327;
								GameCall<int>(0xAA364C, 0xd6ff70)(v325, 16);
								v5 = v325;
								return v5;
							case 20051:
								v719 = -256;
								v424 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v719, HIDWORD(v868));
								v425 = *(int *)0xD71E58;
								*(_DWORD *)v424 = *(int *)0xD71F10;
								*(_DWORD *)(v424 + 4) = 0;
								*(_DWORD *)(v424 + 8) = 0;
								*(_DWORD *)(v424 + 12) = 0;
								*(_DWORD *)(v424 + 16) = 0;
								*(_DWORD *)(v424 + 20) = 0;
								v426 = *(int *)0xD72048;
								*(_DWORD *)(v424 + 24) = *v674;
								*(_BYTE *)(v424 + 32) = 0;
								*(_DWORD *)(v424 + 28) = 0;
								*(_BYTE *)(v424 + 40) = 0;
								*(_DWORD *)(v424 + 36) = 0;
								*(_DWORD *)(v424 + 44) = 0;
								*(_DWORD *)(v424 + 52) = -1;
								*(_DWORD *)(v424 + 48) = 0;
								*(_DWORD *)(v424 + 76) = 1065353216;
								*(_DWORD *)(v424 + 64) = 0;
								*(_DWORD *)(v424 + 68) = 0;
								*(_DWORD *)(v424 + 72) = 0;
								*(_DWORD *)(v424 + 92) = 1065353216;
								*(_DWORD *)(v424 + 88) = 0;
								*(_DWORD *)(v424 + 80) = 0;
								*(_DWORD *)(v424 + 84) = 0;
								*(_DWORD *)(v424 + 100) = 0;
								*(_DWORD *)(v424 + 96) = 0;
								*(_DWORD *)v424 = v425;
								*(_DWORD *)v424 = v426;
								GameCall<int>(0xAA364C, 0xd6ff70)(v424, 16);
								v5 = v424;
								return v5;
							case 20031:
								v716 = -256;
								v130 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v716, HIDWORD(v868));
								v131 = *(int *)0xD71E58;
								*(_DWORD *)v130 = *(int *)0xD71F10;
								*(_DWORD *)(v130 + 4) = 0;
								*(_DWORD *)(v130 + 8) = 0;
								*(_DWORD *)(v130 + 12) = 0;
								*(_DWORD *)(v130 + 16) = 0;
								*(_DWORD *)(v130 + 20) = 0;
								v132 = *(int *)0xD7203C;
								*(_DWORD *)(v130 + 24) = *v674;
								*(_BYTE *)(v130 + 32) = 0;
								*(_DWORD *)(v130 + 28) = 0;
								*(_BYTE *)(v130 + 40) = 0;
								*(_DWORD *)(v130 + 36) = 0;
								*(_DWORD *)(v130 + 44) = 0;
								*(_DWORD *)(v130 + 52) = -1;
								*(_DWORD *)(v130 + 48) = 0;
								*(_DWORD *)(v130 + 76) = 1065353216;
								*(_DWORD *)(v130 + 64) = 0;
								*(_DWORD *)(v130 + 68) = 0;
								*(_DWORD *)(v130 + 72) = 0;
								*(_DWORD *)(v130 + 92) = 1065353216;
								*(_DWORD *)(v130 + 88) = 0;
								*(_DWORD *)(v130 + 80) = 0;
								*(_DWORD *)(v130 + 84) = 0;
								*(_DWORD *)(v130 + 100) = 0;
								*(_DWORD *)(v130 + 96) = 0;
								*(_DWORD *)v130 = v131;
								*(_DWORD *)v130 = v132;
								GameCall<int>(0xAA364C, 0xd6ff70)(v130, 16);
								v5 = v130;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
							case 18041:
								v714 = -256;
								v296 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v714, HIDWORD(v868));
								v297 = *(int *)0xD71E58;
								*(_DWORD *)v296 = *(int *)0xD71F10;
								*(_DWORD *)(v296 + 4) = 0;
								*(_DWORD *)(v296 + 8) = 0;
								*(_DWORD *)(v296 + 12) = 0;
								*(_DWORD *)(v296 + 16) = 0;
								*(_DWORD *)(v296 + 20) = 0;
								v298 = *(int *)0xD72034;
								*(_DWORD *)(v296 + 24) = *v674;
								*(_BYTE *)(v296 + 32) = 0;
								*(_DWORD *)(v296 + 28) = 0;
								*(_BYTE *)(v296 + 40) = 0;
								*(_DWORD *)(v296 + 36) = 0;
								*(_DWORD *)(v296 + 44) = 0;
								*(_DWORD *)(v296 + 52) = -1;
								*(_DWORD *)(v296 + 48) = 0;
								*(_DWORD *)(v296 + 76) = 1065353216;
								*(_DWORD *)(v296 + 64) = 0;
								*(_DWORD *)(v296 + 68) = 0;
								*(_DWORD *)(v296 + 72) = 0;
								*(_DWORD *)(v296 + 92) = 1065353216;
								*(_DWORD *)(v296 + 88) = 0;
								*(_DWORD *)(v296 + 80) = 0;
								*(_DWORD *)(v296 + 84) = 0;
								*(_DWORD *)(v296 + 100) = 0;
								*(_DWORD *)(v296 + 96) = 0;
								*(_DWORD *)v296 = v297;
								*(_DWORD *)v296 = v298;
								GameCall<int>(0xAA364C, 0xd6ff70)(v296, 16);
								v5 = v296;
								return v5;
							case 18051:
								v715 = -256;
								v459 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v715, HIDWORD(v868));
								v460 = *(int *)0xD71E58;
								*(_DWORD *)v459 = *(int *)0xD71F10;
								*(_DWORD *)(v459 + 4) = 0;
								*(_DWORD *)(v459 + 8) = 0;
								*(_DWORD *)(v459 + 12) = 0;
								*(_DWORD *)(v459 + 16) = 0;
								*(_DWORD *)(v459 + 20) = 0;
								v461 = *(int *)0xD72038;
								*(_DWORD *)(v459 + 24) = *v674;
								*(_BYTE *)(v459 + 32) = 0;
								*(_DWORD *)(v459 + 28) = 0;
								*(_BYTE *)(v459 + 40) = 0;
								*(_DWORD *)(v459 + 36) = 0;
								*(_DWORD *)(v459 + 44) = 0;
								*(_DWORD *)(v459 + 52) = -1;
								*(_DWORD *)(v459 + 48) = 0;
								*(_DWORD *)(v459 + 76) = 1065353216;
								*(_DWORD *)(v459 + 64) = 0;
								*(_DWORD *)(v459 + 68) = 0;
								*(_DWORD *)(v459 + 72) = 0;
								*(_DWORD *)(v459 + 92) = 1065353216;
								*(_DWORD *)(v459 + 88) = 0;
								*(_DWORD *)(v459 + 80) = 0;
								*(_DWORD *)(v459 + 84) = 0;
								*(_DWORD *)(v459 + 100) = 0;
								*(_DWORD *)(v459 + 96) = 0;
								*(_DWORD *)v459 = v460;
								*(_DWORD *)v459 = v461;
								GameCall<int>(0xAA364C, 0xd6ff70)(v459, 16);
								v5 = v459;
								return v5;
							case 18031:
								v713 = -256;
								v39 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v713, HIDWORD(v868));
								v40 = *(int *)0xD71E58;
								*(_DWORD *)v39 = *(int *)0xD71F10;
								*(_DWORD *)(v39 + 4) = 0;
								*(_DWORD *)(v39 + 8) = 0;
								*(_DWORD *)(v39 + 12) = 0;
								*(_DWORD *)(v39 + 16) = 0;
								*(_DWORD *)(v39 + 20) = 0;
								v41 = *(int *)0xD72030;
								*(_DWORD *)(v39 + 24) = *v674;
								*(_BYTE *)(v39 + 32) = 0;
								*(_DWORD *)(v39 + 28) = 0;
								*(_BYTE *)(v39 + 40) = 0;
								*(_DWORD *)(v39 + 36) = 0;
								*(_DWORD *)(v39 + 44) = 0;
								*(_DWORD *)(v39 + 52) = -1;
								*(_DWORD *)(v39 + 48) = 0;
								*(_DWORD *)(v39 + 76) = 1065353216;
								*(_DWORD *)(v39 + 64) = 0;
								*(_DWORD *)(v39 + 68) = 0;
								*(_DWORD *)(v39 + 72) = 0;
								*(_DWORD *)(v39 + 92) = 1065353216;
								*(_DWORD *)(v39 + 88) = 0;
								*(_DWORD *)(v39 + 80) = 0;
								*(_DWORD *)(v39 + 84) = 0;
								*(_DWORD *)(v39 + 100) = 0;
								*(_DWORD *)(v39 + 96) = 0;
								*(_DWORD *)v39 = v40;
								*(_DWORD *)v39 = v41;
								GameCall<int>(0xAA364C, 0xd6ff70)(v39, 16);
								v5 = v39;
								return v5;
							}
						}
					}
				}
				else
				{
					if (v1 == 24011)
					{
						v826 = -256;
						v121 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v826, HIDWORD(v868));
						v122 = *(int *)0xD71E58;
						*(_DWORD *)v121 = *(int *)0xD71F10;
						*(_DWORD *)(v121 + 4) = 0;
						*(_DWORD *)(v121 + 8) = 0;
						*(_DWORD *)(v121 + 12) = 0;
						*(_DWORD *)(v121 + 16) = 0;
						*(_DWORD *)(v121 + 20) = 0;
						v123 = *(int *)0xD72094;
						*(_DWORD *)(v121 + 24) = *v674;
						*(_BYTE *)(v121 + 32) = 0;
						*(_DWORD *)(v121 + 28) = 0;
						*(_BYTE *)(v121 + 40) = 0;
						*(_DWORD *)(v121 + 36) = 0;
						*(_DWORD *)(v121 + 44) = 0;
						*(_DWORD *)(v121 + 52) = -1;
						*(_DWORD *)(v121 + 48) = 0;
						*(_DWORD *)(v121 + 76) = 1065353216;
						*(_DWORD *)(v121 + 64) = 0;
						*(_DWORD *)(v121 + 68) = 0;
						*(_DWORD *)(v121 + 72) = 0;
						*(_DWORD *)(v121 + 92) = 1065353216;
						*(_DWORD *)(v121 + 88) = 0;
						*(_DWORD *)(v121 + 80) = 0;
						*(_DWORD *)(v121 + 84) = 0;
						*(_DWORD *)(v121 + 100) = 0;
						*(_DWORD *)(v121 + 96) = 0;
						*(_DWORD *)v121 = v122;
						*(_DWORD *)v121 = v123;
						GameCall<int>(0xAA364C, 0xd6ff70)(v121, 16);
						v5 = v121;
						return v5;
					}
					if (v1 > 24011)
					{
						if (v1 == 26011)
						{
							v830 = -256;
							v195 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v830, HIDWORD(v868));
							v196 = *(int *)0xD71E58;
							*(_DWORD *)v195 = *(int *)0xD71F10;
							*(_DWORD *)(v195 + 4) = 0;
							*(_DWORD *)(v195 + 8) = 0;
							*(_DWORD *)(v195 + 12) = 0;
							*(_DWORD *)(v195 + 16) = 0;
							*(_DWORD *)(v195 + 20) = 0;
							v197 = *(int *)0xD720A4;
							*(_DWORD *)(v195 + 24) = *v674;
							*(_BYTE *)(v195 + 32) = 0;
							*(_DWORD *)(v195 + 28) = 0;
							*(_BYTE *)(v195 + 40) = 0;
							*(_DWORD *)(v195 + 36) = 0;
							*(_DWORD *)(v195 + 44) = 0;
							*(_DWORD *)(v195 + 52) = -1;
							*(_DWORD *)(v195 + 48) = 0;
							*(_DWORD *)(v195 + 76) = 1065353216;
							*(_DWORD *)(v195 + 64) = 0;
							*(_DWORD *)(v195 + 68) = 0;
							*(_DWORD *)(v195 + 72) = 0;
							*(_DWORD *)(v195 + 92) = 1065353216;
							*(_DWORD *)(v195 + 88) = 0;
							*(_DWORD *)(v195 + 80) = 0;
							*(_DWORD *)(v195 + 84) = 0;
							*(_DWORD *)(v195 + 100) = 0;
							*(_DWORD *)(v195 + 96) = 0;
							*(_DWORD *)v195 = v196;
							*(_DWORD *)v195 = v197;
							GameCall<int>(0xAA364C, 0xd6ff70)(v195, 16);
							v5 = v195;
							return v5;
						}
						if (v1 > 26011)
						{
							if (v1 == 27021)
							{
								v832 = -256;
								v372 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v832, HIDWORD(v868));
								v373 = *(int *)0xD71E58;
								*(_DWORD *)v372 = *(int *)0xD71F10;
								*(_DWORD *)(v372 + 4) = 0;
								*(_DWORD *)(v372 + 8) = 0;
								*(_DWORD *)(v372 + 12) = 0;
								*(_DWORD *)(v372 + 16) = 0;
								*(_DWORD *)(v372 + 20) = 0;
								v374 = *(int *)0xD720AC;
								*(_DWORD *)(v372 + 24) = *v674;
								*(_BYTE *)(v372 + 32) = 0;
								*(_DWORD *)(v372 + 28) = 0;
								*(_BYTE *)(v372 + 40) = 0;
								*(_DWORD *)(v372 + 36) = 0;
								*(_DWORD *)(v372 + 44) = 0;
								*(_DWORD *)(v372 + 52) = -1;
								*(_DWORD *)(v372 + 48) = 0;
								*(_DWORD *)(v372 + 76) = 1065353216;
								*(_DWORD *)(v372 + 64) = 0;
								*(_DWORD *)(v372 + 68) = 0;
								*(_DWORD *)(v372 + 72) = 0;
								*(_DWORD *)(v372 + 92) = 1065353216;
								*(_DWORD *)(v372 + 88) = 0;
								*(_DWORD *)(v372 + 80) = 0;
								*(_DWORD *)(v372 + 84) = 0;
								*(_DWORD *)(v372 + 100) = 0;
								*(_DWORD *)(v372 + 96) = 0;
								*(_DWORD *)v372 = v373;
								*(_DWORD *)v372 = v374;
								GameCall<int>(0xAA364C, 0xd6ff70)(v372, 16);
								v5 = v372;
								return v5;
							}
							if (v1 > 27021)
							{
								if (v1 == 27061)
								{
									v833 = -256;
									v502 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v833, HIDWORD(v868));
									v503 = *(int *)0xD71E58;
									*(_DWORD *)v502 = *(int *)0xD71F10;
									*(_DWORD *)(v502 + 4) = 0;
									*(_DWORD *)(v502 + 8) = 0;
									*(_DWORD *)(v502 + 12) = 0;
									*(_DWORD *)(v502 + 16) = 0;
									*(_DWORD *)(v502 + 20) = 0;
									v504 = *(int *)0xD720B0;
									*(_DWORD *)(v502 + 24) = *v674;
									*(_BYTE *)(v502 + 32) = 0;
									*(_DWORD *)(v502 + 28) = 0;
									*(_BYTE *)(v502 + 40) = 0;
									*(_DWORD *)(v502 + 36) = 0;
									*(_DWORD *)(v502 + 44) = 0;
									*(_DWORD *)(v502 + 52) = -1;
									*(_DWORD *)(v502 + 48) = 0;
									*(_DWORD *)(v502 + 76) = 1065353216;
									*(_DWORD *)(v502 + 64) = 0;
									*(_DWORD *)(v502 + 68) = 0;
									*(_DWORD *)(v502 + 72) = 0;
									*(_DWORD *)(v502 + 92) = 1065353216;
									*(_DWORD *)(v502 + 88) = 0;
									*(_DWORD *)(v502 + 80) = 0;
									*(_DWORD *)(v502 + 84) = 0;
									*(_DWORD *)(v502 + 100) = 0;
									*(_DWORD *)(v502 + 96) = 0;
									*(_DWORD *)v502 = v503;
									*(_DWORD *)v502 = v504;
									GameCall<int>(0xAA364C, 0xd6ff70)(v502, 16);
									v5 = v502;
									return v5;
								}
								if (v1 == 28011)
								{
									v824 = -256;
									v253 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v824, HIDWORD(v868));
									v254 = *(int *)0xD71E58;
									*(_DWORD *)v253 = *(int *)0xD71F10;
									*(_DWORD *)(v253 + 4) = 0;
									*(_DWORD *)(v253 + 8) = 0;
									*(_DWORD *)(v253 + 12) = 0;
									*(_DWORD *)(v253 + 16) = 0;
									*(_DWORD *)(v253 + 20) = 0;
									v255 = *(int *)0xD720B4;
									*(_DWORD *)(v253 + 24) = *v674;
									*(_BYTE *)(v253 + 32) = 0;
									*(_DWORD *)(v253 + 28) = 0;
									*(_BYTE *)(v253 + 40) = 0;
									*(_DWORD *)(v253 + 36) = 0;
									*(_DWORD *)(v253 + 44) = 0;
									*(_DWORD *)(v253 + 52) = -1;
									*(_DWORD *)(v253 + 48) = 0;
									*(_DWORD *)(v253 + 76) = 1065353216;
									*(_DWORD *)(v253 + 64) = 0;
									*(_DWORD *)(v253 + 68) = 0;
									*(_DWORD *)(v253 + 72) = 0;
									*(_DWORD *)(v253 + 92) = 1065353216;
									*(_DWORD *)(v253 + 88) = 0;
									*(_DWORD *)(v253 + 80) = 0;
									*(_DWORD *)(v253 + 84) = 0;
									*(_DWORD *)(v253 + 100) = 0;
									*(_DWORD *)(v253 + 96) = 0;
									*(_DWORD *)v253 = v254;
									*(_DWORD *)v253 = v255;
									GameCall<int>(0xAA364C, 0xd6ff70)(v253, 16);
									v5 = v253;
									return v5;
								}
							}
							else if (v1 == 27011)
							{
								v831 = -256;
								v153 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v831, HIDWORD(v868));
								v154 = *(int *)0xD71E58;
								*(_DWORD *)v153 = *(int *)0xD71F10;
								*(_DWORD *)(v153 + 4) = 0;
								*(_DWORD *)(v153 + 8) = 0;
								*(_DWORD *)(v153 + 12) = 0;
								*(_DWORD *)(v153 + 16) = 0;
								*(_DWORD *)(v153 + 20) = 0;
								v155 = *(int *)0xD720A8;
								*(_DWORD *)(v153 + 24) = *v674;
								*(_BYTE *)(v153 + 32) = 0;
								*(_DWORD *)(v153 + 28) = 0;
								*(_BYTE *)(v153 + 40) = 0;
								*(_DWORD *)(v153 + 36) = 0;
								*(_DWORD *)(v153 + 44) = 0;
								*(_DWORD *)(v153 + 52) = -1;
								*(_DWORD *)(v153 + 48) = 0;
								*(_DWORD *)(v153 + 76) = 1065353216;
								*(_DWORD *)(v153 + 64) = 0;
								*(_DWORD *)(v153 + 68) = 0;
								*(_DWORD *)(v153 + 72) = 0;
								*(_DWORD *)(v153 + 92) = 1065353216;
								*(_DWORD *)(v153 + 88) = 0;
								*(_DWORD *)(v153 + 80) = 0;
								*(_DWORD *)(v153 + 84) = 0;
								*(_DWORD *)(v153 + 100) = 0;
								*(_DWORD *)(v153 + 96) = 0;
								*(_DWORD *)v153 = v154;
								*(_DWORD *)v153 = v155;
								GameCall<int>(0xAA364C, 0xd6ff70)(v153, 16);
								v5 = v153;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
							case 25011:
								v828 = -256;
								v333 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v828, HIDWORD(v868));
								v334 = *(int *)0xD71E58;
								*(_DWORD *)v333 = *(int *)0xD71F10;
								*(_DWORD *)(v333 + 4) = 0;
								*(_DWORD *)(v333 + 8) = 0;
								*(_DWORD *)(v333 + 12) = 0;
								*(_DWORD *)(v333 + 16) = 0;
								*(_DWORD *)(v333 + 20) = 0;
								v335 = *(int *)0xD7209C;
								*(_DWORD *)(v333 + 24) = *v674;
								*(_BYTE *)(v333 + 32) = 0;
								*(_DWORD *)(v333 + 28) = 0;
								*(_BYTE *)(v333 + 40) = 0;
								*(_DWORD *)(v333 + 36) = 0;
								*(_DWORD *)(v333 + 44) = 0;
								*(_DWORD *)(v333 + 52) = -1;
								*(_DWORD *)(v333 + 48) = 0;
								*(_DWORD *)(v333 + 76) = 1065353216;
								*(_DWORD *)(v333 + 64) = 0;
								*(_DWORD *)(v333 + 92) = 1065353216;
								*(_DWORD *)(v333 + 68) = 0;
								*(_DWORD *)(v333 + 72) = 0;
								*(_DWORD *)(v333 + 80) = 0;
								*(_DWORD *)(v333 + 88) = 0;
								*(_DWORD *)(v333 + 84) = 0;
								*(_DWORD *)(v333 + 100) = 0;
								*(_DWORD *)(v333 + 96) = 0;
								*(_DWORD *)v333 = v334;
								*(_DWORD *)v333 = v335;
								GameCall<int>(0xAA364C, 0xd6ff70)(v333, 16);
								v5 = v333;
								return v5;
							case 25021:
								v829 = -256;
								v429 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v829, HIDWORD(v868));
								v430 = *(int *)0xD71E58;
								*(_DWORD *)v429 = *(int *)0xD71F10;
								*(_DWORD *)(v429 + 4) = 0;
								*(_DWORD *)(v429 + 8) = 0;
								*(_DWORD *)(v429 + 12) = 0;
								*(_DWORD *)(v429 + 16) = 0;
								*(_DWORD *)(v429 + 20) = 0;
								v431 = *(int *)0xD720A0;
								*(_DWORD *)(v429 + 24) = *v674;
								*(_BYTE *)(v429 + 32) = 0;
								*(_DWORD *)(v429 + 28) = 0;
								*(_BYTE *)(v429 + 40) = 0;
								*(_DWORD *)(v429 + 36) = 0;
								*(_DWORD *)(v429 + 44) = 0;
								*(_DWORD *)(v429 + 52) = -1;
								*(_DWORD *)(v429 + 48) = 0;
								*(_DWORD *)(v429 + 76) = 1065353216;
								*(_DWORD *)(v429 + 64) = 0;
								*(_DWORD *)(v429 + 68) = 0;
								*(_DWORD *)(v429 + 72) = 0;
								*(_DWORD *)(v429 + 92) = 1065353216;
								*(_DWORD *)(v429 + 88) = 0;
								*(_DWORD *)(v429 + 80) = 0;
								*(_DWORD *)(v429 + 84) = 0;
								*(_DWORD *)(v429 + 100) = 0;
								*(_DWORD *)(v429 + 96) = 0;
								*(_DWORD *)v429 = v430;
								*(_DWORD *)v429 = v431;
								GameCall<int>(0xAA364C, 0xd6ff70)(v429, 16);
								v5 = v429;
								return v5;
							case 24021:
								v827 = -256;
								v87 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v827, HIDWORD(v868));
								v88 = *(int *)0xD71F24;
								*(_DWORD *)v87 = *(int *)0xD71F10;
								*(_DWORD *)(v87 + 4) = 0;
								*(_DWORD *)(v87 + 8) = 0;
								*(_DWORD *)(v87 + 12) = 0;
								*(_DWORD *)(v87 + 16) = 0;
								*(_DWORD *)(v87 + 20) = 0;
								*(_DWORD *)(v87 + 24) = *v674;
								*(_BYTE *)(v87 + 32) = 0;
								*(_DWORD *)(v87 + 28) = 0;
								*(_BYTE *)(v87 + 40) = 0;
								*(_DWORD *)(v87 + 36) = 0;
								*(_DWORD *)(v87 + 44) = 0;
								*(_DWORD *)(v87 + 52) = -1;
								*(_DWORD *)(v87 + 48) = 0;
								*(_DWORD *)(v87 + 76) = 1065353216;
								*(_DWORD *)(v87 + 64) = 0;
								*(_DWORD *)(v87 + 68) = 0;
								*(_DWORD *)(v87 + 72) = 0;
								*(_DWORD *)(v87 + 92) = 1065353216;
								*(_DWORD *)(v87 + 88) = 0;
								*(_DWORD *)(v87 + 80) = 0;
								*(_DWORD *)(v87 + 84) = 0;
								*(_DWORD *)(v87 + 100) = 0;
								*(_DWORD *)(v87 + 96) = 0;
								*(_DWORD *)v87 = v88;
								GameCall<int>(0xAA364C, 0xd6ff70)(v87, 30);
								v5 = v87;
								*(_DWORD *)v87 = *(int *)0xD72098;
								return v5;
							}
						}
					}
					else
					{
						if (v1 == 22091)
						{
							v709 = -256;
							v192 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v709, HIDWORD(v868));
							v193 = *(int *)0xD71E58;
							*(_DWORD *)v192 = *(int *)0xD71F10;
							*(_DWORD *)(v192 + 4) = 0;
							*(_DWORD *)(v192 + 8) = 0;
							*(_DWORD *)(v192 + 12) = 0;
							*(_DWORD *)(v192 + 16) = 0;
							*(_DWORD *)(v192 + 20) = 0;
							v194 = *(int *)0xD72080;
							*(_DWORD *)(v192 + 24) = *v674;
							*(_BYTE *)(v192 + 32) = 0;
							*(_DWORD *)(v192 + 28) = 0;
							*(_BYTE *)(v192 + 40) = 0;
							*(_DWORD *)(v192 + 36) = 0;
							*(_DWORD *)(v192 + 44) = 0;
							*(_DWORD *)(v192 + 52) = -1;
							*(_DWORD *)(v192 + 48) = 0;
							*(_DWORD *)(v192 + 76) = 1065353216;
							*(_DWORD *)(v192 + 64) = 0;
							*(_DWORD *)(v192 + 68) = 0;
							*(_DWORD *)(v192 + 72) = 0;
							*(_DWORD *)(v192 + 92) = 1065353216;
							*(_DWORD *)(v192 + 88) = 0;
							*(_DWORD *)(v192 + 80) = 0;
							*(_DWORD *)(v192 + 84) = 0;
							*(_DWORD *)(v192 + 100) = 0;
							*(_DWORD *)(v192 + 96) = 0;
							*(_DWORD *)v192 = v193;
							*(_DWORD *)v192 = v194;
							GameCall<int>(0xAA364C, 0xd6ff70)(v192, 16);
							v5 = v192;
							return v5;
						}
						if (v1 > 22091)
						{
							if (v1 == 23021)
							{
								v769 = -256;
								v392 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v769, HIDWORD(v868));
								v393 = *(int *)0xD71E58;
								*(_DWORD *)v392 = *(int *)0xD71F10;
								*(_DWORD *)(v392 + 4) = 0;
								*(_DWORD *)(v392 + 8) = 0;
								*(_DWORD *)(v392 + 12) = 0;
								*(_DWORD *)(v392 + 16) = 0;
								*(_DWORD *)(v392 + 20) = 0;
								v394 = *(int *)0xD72088;
								*(_DWORD *)(v392 + 24) = *v674;
								*(_BYTE *)(v392 + 32) = 0;
								*(_DWORD *)(v392 + 28) = 0;
								*(_BYTE *)(v392 + 40) = 0;
								*(_DWORD *)(v392 + 36) = 0;
								*(_DWORD *)(v392 + 44) = 0;
								*(_DWORD *)(v392 + 52) = -1;
								*(_DWORD *)(v392 + 48) = 0;
								*(_DWORD *)(v392 + 76) = 1065353216;
								*(_DWORD *)(v392 + 64) = 0;
								*(_DWORD *)(v392 + 68) = 0;
								*(_DWORD *)(v392 + 72) = 0;
								*(_DWORD *)(v392 + 92) = 1065353216;
								*(_DWORD *)(v392 + 88) = 0;
								*(_DWORD *)(v392 + 80) = 0;
								*(_DWORD *)(v392 + 84) = 0;
								*(_DWORD *)(v392 + 100) = 0;
								*(_DWORD *)(v392 + 96) = 0;
								*(_DWORD *)v392 = v393;
								*(_DWORD *)v392 = v394;
								GameCall<int>(0xAA364C, 0xd6ff70)(v392, 16);
								v5 = v392;
								return v5;
							}
							if (v1 > 23021)
							{
								if (v1 == 23031)
								{
									v770 = -256;
									v470 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v770, HIDWORD(v868));
									v471 = *(int *)0xD71E58;
									*(_DWORD *)v470 = *(int *)0xD71F10;
									*(_DWORD *)(v470 + 4) = 0;
									*(_DWORD *)(v470 + 8) = 0;
									*(_DWORD *)(v470 + 12) = 0;
									*(_DWORD *)(v470 + 16) = 0;
									*(_DWORD *)(v470 + 20) = 0;
									v472 = *(int *)0xD7208C;
									*(_DWORD *)(v470 + 24) = *v674;
									*(_BYTE *)(v470 + 32) = 0;
									*(_DWORD *)(v470 + 28) = 0;
									*(_BYTE *)(v470 + 40) = 0;
									*(_DWORD *)(v470 + 36) = 0;
									*(_DWORD *)(v470 + 44) = 0;
									*(_DWORD *)(v470 + 52) = -1;
									*(_DWORD *)(v470 + 48) = 0;
									*(_DWORD *)(v470 + 76) = 1065353216;
									*(_DWORD *)(v470 + 64) = 0;
									*(_DWORD *)(v470 + 68) = 0;
									*(_DWORD *)(v470 + 72) = 0;
									*(_DWORD *)(v470 + 92) = 1065353216;
									*(_DWORD *)(v470 + 88) = 0;
									*(_DWORD *)(v470 + 80) = 0;
									*(_DWORD *)(v470 + 84) = 0;
									*(_DWORD *)(v470 + 100) = 0;
									*(_DWORD *)(v470 + 96) = 0;
									*(_DWORD *)v470 = v471;
									*(_DWORD *)v470 = v472;
									GameCall<int>(0xAA364C, 0xd6ff70)(v470, 16);
									v5 = v470;
									return v5;
								}
								if (v1 == 23041)
								{
									v825 = -256;
									v280 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v825, HIDWORD(v868));
									v281 = *(int *)0xD71E58;
									*(_DWORD *)v280 = *(int *)0xD71F10;
									*(_DWORD *)(v280 + 4) = 0;
									*(_DWORD *)(v280 + 8) = 0;
									*(_DWORD *)(v280 + 12) = 0;
									*(_DWORD *)(v280 + 16) = 0;
									*(_DWORD *)(v280 + 20) = 0;
									v282 = *(int *)0xD72090;
									*(_DWORD *)(v280 + 24) = *v674;
									*(_BYTE *)(v280 + 32) = 0;
									*(_DWORD *)(v280 + 28) = 0;
									*(_BYTE *)(v280 + 40) = 0;
									*(_DWORD *)(v280 + 36) = 0;
									*(_DWORD *)(v280 + 44) = 0;
									*(_DWORD *)(v280 + 52) = -1;
									*(_DWORD *)(v280 + 48) = 0;
									*(_DWORD *)(v280 + 76) = 1065353216;
									*(_DWORD *)(v280 + 64) = 0;
									*(_DWORD *)(v280 + 68) = 0;
									*(_DWORD *)(v280 + 72) = 0;
									*(_DWORD *)(v280 + 92) = 1065353216;
									*(_DWORD *)(v280 + 88) = 0;
									*(_DWORD *)(v280 + 80) = 0;
									*(_DWORD *)(v280 + 84) = 0;
									*(_DWORD *)(v280 + 100) = 0;
									*(_DWORD *)(v280 + 96) = 0;
									*(_DWORD *)v280 = v281;
									*(_DWORD *)v280 = v282;
									GameCall<int>(0xAA364C, 0xd6ff70)(v280, 16);
									v5 = v280;
									return v5;
								}
							}
							else if (v1 == 23011)
							{
								v768 = -256;
								v173 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v768, HIDWORD(v868));
								v174 = *(int *)0xD71E58;
								*(_DWORD *)v173 = *(int *)0xD71F10;
								*(_DWORD *)(v173 + 4) = 0;
								*(_DWORD *)(v173 + 8) = 0;
								*(_DWORD *)(v173 + 12) = 0;
								*(_DWORD *)(v173 + 16) = 0;
								*(_DWORD *)(v173 + 20) = 0;
								v175 = *(int *)0xD72084;
								*(_DWORD *)(v173 + 24) = *v674;
								*(_BYTE *)(v173 + 32) = 0;
								*(_DWORD *)(v173 + 28) = 0;
								*(_BYTE *)(v173 + 40) = 0;
								*(_DWORD *)(v173 + 36) = 0;
								*(_DWORD *)(v173 + 44) = 0;
								*(_DWORD *)(v173 + 52) = -1;
								*(_DWORD *)(v173 + 48) = 0;
								*(_DWORD *)(v173 + 76) = 1065353216;
								*(_DWORD *)(v173 + 64) = 0;
								*(_DWORD *)(v173 + 68) = 0;
								*(_DWORD *)(v173 + 72) = 0;
								*(_DWORD *)(v173 + 92) = 1065353216;
								*(_DWORD *)(v173 + 88) = 0;
								*(_DWORD *)(v173 + 80) = 0;
								*(_DWORD *)(v173 + 84) = 0;
								*(_DWORD *)(v173 + 100) = 0;
								*(_DWORD *)(v173 + 96) = 0;
								*(_DWORD *)v173 = v174;
								*(_DWORD *)v173 = v175;
								GameCall<int>(0xAA364C, 0xd6ff70)(v173, 16);
								v5 = v173;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
							case 22031:
								v707 = -256;
								v319 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v707, HIDWORD(v868));
								v320 = *(int *)0xD71E58;
								*(_DWORD *)v319 = *(int *)0xD71F10;
								*(_DWORD *)(v319 + 4) = 0;
								*(_DWORD *)(v319 + 8) = 0;
								*(_DWORD *)(v319 + 12) = 0;
								*(_DWORD *)(v319 + 16) = 0;
								*(_DWORD *)(v319 + 20) = 0;
								v321 = *(int *)0xD72078;
								*(_DWORD *)(v319 + 24) = *v674;
								*(_BYTE *)(v319 + 32) = 0;
								*(_DWORD *)(v319 + 28) = 0;
								*(_BYTE *)(v319 + 40) = 0;
								*(_DWORD *)(v319 + 36) = 0;
								*(_DWORD *)(v319 + 44) = 0;
								*(_DWORD *)(v319 + 52) = -1;
								*(_DWORD *)(v319 + 48) = 0;
								*(_DWORD *)(v319 + 76) = 1065353216;
								*(_DWORD *)(v319 + 64) = 0;
								*(_DWORD *)(v319 + 68) = 0;
								*(_DWORD *)(v319 + 72) = 0;
								*(_DWORD *)(v319 + 92) = 1065353216;
								*(_DWORD *)(v319 + 88) = 0;
								*(_DWORD *)(v319 + 80) = 0;
								*(_DWORD *)(v319 + 84) = 0;
								*(_DWORD *)(v319 + 100) = 0;
								*(_DWORD *)(v319 + 96) = 0;
								*(_DWORD *)v319 = v320;
								*(_DWORD *)v319 = v321;
								GameCall<int>(0xAA364C, 0xd6ff70)(v319, 16);
								v5 = v319;
								return v5;
							case 22081:
								v708 = -256;
								v446 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v708, HIDWORD(v868));
								v447 = *(int *)0xD71E58;
								*(_DWORD *)v446 = *(int *)0xD71F10;
								*(_DWORD *)(v446 + 4) = 0;
								*(_DWORD *)(v446 + 8) = 0;
								*(_DWORD *)(v446 + 12) = 0;
								*(_DWORD *)(v446 + 16) = 0;
								*(_DWORD *)(v446 + 20) = 0;
								v448 = *(int *)0xD7207C;
								*(_DWORD *)(v446 + 24) = *v674;
								*(_BYTE *)(v446 + 32) = 0;
								*(_DWORD *)(v446 + 28) = 0;
								*(_BYTE *)(v446 + 40) = 0;
								*(_DWORD *)(v446 + 36) = 0;
								*(_DWORD *)(v446 + 44) = 0;
								*(_DWORD *)(v446 + 52) = -1;
								*(_DWORD *)(v446 + 48) = 0;
								*(_DWORD *)(v446 + 76) = 1065353216;
								*(_DWORD *)(v446 + 64) = 0;
								*(_DWORD *)(v446 + 68) = 0;
								*(_DWORD *)(v446 + 72) = 0;
								*(_DWORD *)(v446 + 92) = 1065353216;
								*(_DWORD *)(v446 + 88) = 0;
								*(_DWORD *)(v446 + 80) = 0;
								*(_DWORD *)(v446 + 84) = 0;
								*(_DWORD *)(v446 + 100) = 0;
								*(_DWORD *)(v446 + 96) = 0;
								*(_DWORD *)v446 = v447;
								*(_DWORD *)v446 = v448;
								GameCall<int>(0xAA364C, 0xd6ff70)(v446, 16);
								v5 = v446;
								return v5;
							case 21121:
								v706 = -256;
								v12 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v706, HIDWORD(v868));
								v13 = *(int *)0xD71E58;
								*(_DWORD *)v12 = *(int *)0xD71F10;
								*(_DWORD *)(v12 + 4) = 0;
								*(_DWORD *)(v12 + 8) = 0;
								*(_DWORD *)(v12 + 12) = 0;
								*(_DWORD *)(v12 + 16) = 0;
								*(_DWORD *)(v12 + 20) = 0;
								v14 = *(int *)0xD72074;
								*(_DWORD *)(v12 + 24) = *v674;
								*(_BYTE *)(v12 + 32) = 0;
								*(_DWORD *)(v12 + 28) = 0;
								*(_BYTE *)(v12 + 40) = 0;
								*(_DWORD *)(v12 + 36) = 0;
								*(_DWORD *)(v12 + 44) = 0;
								*(_DWORD *)(v12 + 52) = -1;
								*(_DWORD *)(v12 + 48) = 0;
								*(_DWORD *)(v12 + 76) = 1065353216;
								*(_DWORD *)(v12 + 64) = 0;
								*(_DWORD *)(v12 + 68) = 0;
								*(_DWORD *)(v12 + 72) = 0;
								*(_DWORD *)(v12 + 92) = 1065353216;
								*(_DWORD *)(v12 + 88) = 0;
								*(_DWORD *)(v12 + 80) = 0;
								*(_DWORD *)(v12 + 84) = 0;
								*(_DWORD *)(v12 + 100) = 0;
								*(_DWORD *)(v12 + 96) = 0;
								*(_DWORD *)v12 = v13;
								*(_DWORD *)v12 = v14;
								GameCall<int>(0xAA364C, 0xd6ff70)(v12, 16);
								v5 = v12;
								return v5;
							}
						}
					}
				}
			}
			else
			{
				if (v1 == 60091)
				{
					v843 = -256;
					v58 = GameCall<int>(0x9E8B28, 0xd6ff70)(176, &v843, HIDWORD(v868));
					v59 = *(int *)0xD71E5C;
					*(_DWORD *)v58 = *(int *)0xD71F10;
					*(_DWORD *)(v58 + 4) = 0;
					*(_DWORD *)(v58 + 8) = 0;
					*(_DWORD *)(v58 + 12) = 0;
					*(_DWORD *)(v58 + 16) = 0;
					*(_DWORD *)(v58 + 20) = 0;
					v60 = *(int *)0xD72138;
					*(_DWORD *)(v58 + 24) = *v674;
					*(_BYTE *)(v58 + 32) = 0;
					*(_DWORD *)(v58 + 28) = 0;
					*(_BYTE *)(v58 + 40) = 0;
					*(_DWORD *)(v58 + 36) = 0;
					*(_DWORD *)(v58 + 44) = 0;
					*(_DWORD *)(v58 + 52) = -1;
					*(_DWORD *)(v58 + 48) = 0;
					*(_DWORD *)(v58 + 76) = 1065353216;
					*(_DWORD *)(v58 + 64) = 0;
					*(_DWORD *)(v58 + 68) = 0;
					*(_DWORD *)(v58 + 72) = 0;
					*(_DWORD *)(v58 + 92) = 1065353216;
					*(_DWORD *)(v58 + 88) = 0;
					*(_DWORD *)(v58 + 80) = 0;
					*(_DWORD *)(v58 + 84) = 0;
					*(_DWORD *)(v58 + 100) = 0;
					*(_DWORD *)(v58 + 96) = 0;
					*(_DWORD *)v58 = v59;
					*(_DWORD *)(v58 + 168) = 0;
					*(_DWORD *)(v58 + 112) = 0;
					*(_DWORD *)(v58 + 116) = 0;
					*(_DWORD *)(v58 + 120) = 0;
					*(_DWORD *)(v58 + 124) = 0;
					*(_DWORD *)(v58 + 128) = 0;
					*(_DWORD *)(v58 + 132) = 0;
					*(_DWORD *)(v58 + 136) = 0;
					*(_DWORD *)(v58 + 140) = 0;
					*(_DWORD *)(v58 + 144) = 0;
					*(_DWORD *)(v58 + 148) = 0;
					*(_DWORD *)(v58 + 152) = 0;
					*(_DWORD *)(v58 + 156) = 0;
					*(_DWORD *)(v58 + 160) = 0;
					*(_DWORD *)(v58 + 164) = 0;
					*(_DWORD *)v58 = v60;
					GameCall<int>(0xAA364C, 0xd6ff70)(v58, 16);
					v5 = v58;
					return v5;
				}
				if (v1 <= 60091)
				{
					if (v1 == 31011)
					{
						v819 = -256;
						v98 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v819, HIDWORD(v868));
						v99 = *(int *)0xD71E58;
						*(_DWORD *)v98 = *(int *)0xD71F10;
						*(_DWORD *)(v98 + 4) = 0;
						*(_DWORD *)(v98 + 8) = 0;
						*(_DWORD *)(v98 + 12) = 0;
						*(_DWORD *)(v98 + 16) = 0;
						*(_DWORD *)(v98 + 20) = 0;
						v100 = *(int *)0xD720D8;
						*(_DWORD *)(v98 + 24) = *v674;
						*(_BYTE *)(v98 + 32) = 0;
						*(_DWORD *)(v98 + 28) = 0;
						*(_BYTE *)(v98 + 40) = 0;
						*(_DWORD *)(v98 + 36) = 0;
						*(_DWORD *)(v98 + 44) = 0;
						*(_DWORD *)(v98 + 52) = -1;
						*(_DWORD *)(v98 + 48) = 0;
						*(_DWORD *)(v98 + 76) = 1065353216;
						*(_DWORD *)(v98 + 64) = 0;
						*(_DWORD *)(v98 + 68) = 0;
						*(_DWORD *)(v98 + 72) = 0;
						*(_DWORD *)(v98 + 92) = 1065353216;
						*(_DWORD *)(v98 + 88) = 0;
						*(_DWORD *)(v98 + 80) = 0;
						*(_DWORD *)(v98 + 84) = 0;
						*(_DWORD *)(v98 + 100) = 0;
						*(_DWORD *)(v98 + 96) = 0;
						*(_DWORD *)v98 = v99;
						*(_DWORD *)v98 = v100;
						GameCall<int>(0xAA364C, 0xd6ff70)(v98, 16);
						v5 = v98;
						return v5;
					}
					if (v1 > 31011)
					{
						v676 = 34031;
						if (v1 == 34031)
						{
							v835 = -256;
							v228 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v835, 34031);
							v229 = *(int *)0xD71E58;
							*(_DWORD *)v228 = *(int *)0xD71F10;
							*(_DWORD *)(v228 + 4) = 0;
							*(_DWORD *)(v228 + 8) = 0;
							*(_DWORD *)(v228 + 12) = 0;
							*(_DWORD *)(v228 + 16) = 0;
							*(_DWORD *)(v228 + 20) = 0;
							v230 = *(int *)0xD720E8;
							*(_DWORD *)(v228 + 24) = *v674;
							*(_BYTE *)(v228 + 32) = 0;
							*(_DWORD *)(v228 + 28) = 0;
							*(_BYTE *)(v228 + 40) = 0;
							*(_DWORD *)(v228 + 36) = 0;
							*(_DWORD *)(v228 + 44) = 0;
							*(_DWORD *)(v228 + 52) = -1;
							*(_DWORD *)(v228 + 48) = 0;
							*(_DWORD *)(v228 + 76) = 1065353216;
							*(_DWORD *)(v228 + 64) = 0;
							*(_DWORD *)(v228 + 68) = 0;
							*(_DWORD *)(v228 + 72) = 0;
							*(_DWORD *)(v228 + 92) = 1065353216;
							*(_DWORD *)(v228 + 88) = 0;
							*(_DWORD *)(v228 + 80) = 0;
							*(_DWORD *)(v228 + 84) = 0;
							*(_DWORD *)(v228 + 100) = 0;
							*(_DWORD *)(v228 + 96) = 0;
							*(_DWORD *)v228 = v229;
							*(_DWORD *)v228 = v230;
							GameCall<int>(0xAA364C, 0xd6ff70)(v228, 16);
							v5 = v228;
							return v5;
						}
						if (v1 > 34031)
						{
							if (v1 == 60021)
							{
								v840 = -256;
								v336 = GameCall<int>(0x9E8B28, 0xd6ff70)(176, &v840, 34031);
								v337 = *(int *)0xD71E5C;
								*(_DWORD *)v336 = *(int *)0xD71F10;
								*(_DWORD *)(v336 + 4) = 0;
								*(_DWORD *)(v336 + 8) = 0;
								*(_DWORD *)(v336 + 12) = 0;
								*(_DWORD *)(v336 + 16) = 0;
								*(_DWORD *)(v336 + 20) = 0;
								v338 = *(int *)0xD7212C;
								*(_DWORD *)(v336 + 24) = *v674;
								*(_BYTE *)(v336 + 32) = 0;
								*(_DWORD *)(v336 + 28) = 0;
								*(_BYTE *)(v336 + 40) = 0;
								*(_DWORD *)(v336 + 36) = 0;
								*(_DWORD *)(v336 + 44) = 0;
								*(_DWORD *)(v336 + 52) = -1;
								*(_DWORD *)(v336 + 48) = 0;
								*(_DWORD *)(v336 + 64) = 0;
								*(_DWORD *)(v336 + 68) = 0;
								*(_DWORD *)(v336 + 72) = 0;
								*(_DWORD *)(v336 + 76) = 1065353216;
								*(_DWORD *)(v336 + 88) = 0;
								*(_DWORD *)(v336 + 80) = 0;
								*(_DWORD *)(v336 + 84) = 0;
								*(_DWORD *)(v336 + 92) = 1065353216;
								*(_DWORD *)(v336 + 100) = 0;
								*(_DWORD *)(v336 + 96) = 0;
								*(_DWORD *)v336 = v337;
								*(_DWORD *)(v336 + 168) = 0;
								*(_DWORD *)(v336 + 112) = 0;
								*(_DWORD *)(v336 + 116) = 0;
								*(_DWORD *)(v336 + 120) = 0;
								*(_DWORD *)(v336 + 124) = 0;
								*(_DWORD *)(v336 + 128) = 0;
								*(_DWORD *)(v336 + 132) = 0;
								*(_DWORD *)(v336 + 136) = 0;
								*(_DWORD *)(v336 + 140) = 0;
								*(_DWORD *)(v336 + 144) = 0;
								*(_DWORD *)(v336 + 148) = 0;
								*(_DWORD *)(v336 + 152) = 0;
								*(_DWORD *)(v336 + 156) = 0;
								*(_DWORD *)(v336 + 160) = 0;
								*(_DWORD *)(v336 + 164) = 0;
								*(_DWORD *)v336 = v338;
								GameCall<int>(0xAA364C, 0xd6ff70)(v336, 16);
								v5 = v336;
								return v5;
							}
							if (v1 > 60021)
							{
								if ((v1 ^ 0xFFFF0000) == -5495)
								{
									v841 = -256;
									v505 = GameCall<int>(0x9E8B28, 0xd6ff70)(176, &v841, 34031);
									v506 = *(int *)0xD71E5C;
									*(_DWORD *)v505 = *(int *)0xD71F10;
									*(_DWORD *)(v505 + 4) = 0;
									*(_DWORD *)(v505 + 8) = 0;
									*(_DWORD *)(v505 + 12) = 0;
									*(_DWORD *)(v505 + 16) = 0;
									*(_DWORD *)(v505 + 20) = 0;
									v507 = *(int *)0xD72130;
									*(_DWORD *)(v505 + 24) = *v674;
									*(_BYTE *)(v505 + 32) = 0;
									*(_DWORD *)(v505 + 28) = 0;
									*(_BYTE *)(v505 + 40) = 0;
									*(_DWORD *)(v505 + 36) = 0;
									*(_DWORD *)(v505 + 44) = 0;
									*(_DWORD *)(v505 + 52) = -1;
									*(_DWORD *)(v505 + 48) = 0;
									*(_DWORD *)(v505 + 64) = 0;
									*(_DWORD *)(v505 + 68) = 0;
									*(_DWORD *)(v505 + 72) = 0;
									*(_DWORD *)(v505 + 76) = 1065353216;
									*(_DWORD *)(v505 + 88) = 0;
									*(_DWORD *)(v505 + 80) = 0;
									*(_DWORD *)(v505 + 84) = 0;
									*(_DWORD *)(v505 + 92) = 1065353216;
									*(_DWORD *)(v505 + 100) = 0;
									*(_DWORD *)(v505 + 96) = 0;
									*(_DWORD *)v505 = v506;
									*(_DWORD *)(v505 + 168) = 0;
									*(_DWORD *)(v505 + 112) = 0;
									*(_DWORD *)(v505 + 116) = 0;
									*(_DWORD *)(v505 + 120) = 0;
									*(_DWORD *)(v505 + 124) = 0;
									*(_DWORD *)(v505 + 128) = 0;
									*(_DWORD *)(v505 + 132) = 0;
									*(_DWORD *)(v505 + 136) = 0;
									*(_DWORD *)(v505 + 140) = 0;
									*(_DWORD *)(v505 + 144) = 0;
									*(_DWORD *)(v505 + 148) = 0;
									*(_DWORD *)(v505 + 152) = 0;
									*(_DWORD *)(v505 + 156) = 0;
									*(_DWORD *)(v505 + 160) = 0;
									*(_DWORD *)(v505 + 164) = 0;
									*(_DWORD *)v505 = v507;
									GameCall<int>(0xAA364C, 0xd6ff70)(v505, 16);
									v5 = v505;
									return v5;
								}
								if ((v1 ^ 0xFFFF0000) == -5485)
								{
									v842 = -256;
									v247 = GameCall<int>(0x9E8B28, 0xd6ff70)(176, &v842, 34031);
									v248 = *(int *)0xD71E5C;
									*(_DWORD *)v247 = *(int *)0xD71F10;
									*(_DWORD *)(v247 + 4) = 0;
									*(_DWORD *)(v247 + 8) = 0;
									*(_DWORD *)(v247 + 12) = 0;
									*(_DWORD *)(v247 + 16) = 0;
									*(_DWORD *)(v247 + 20) = 0;
									v249 = *(int *)0xD72134;
									*(_DWORD *)(v247 + 24) = *v674;
									*(_BYTE *)(v247 + 32) = 0;
									*(_DWORD *)(v247 + 28) = 0;
									*(_BYTE *)(v247 + 40) = 0;
									*(_DWORD *)(v247 + 36) = 0;
									*(_DWORD *)(v247 + 44) = 0;
									*(_DWORD *)(v247 + 52) = -1;
									*(_DWORD *)(v247 + 48) = 0;
									*(_DWORD *)(v247 + 64) = 0;
									*(_DWORD *)(v247 + 68) = 0;
									*(_DWORD *)(v247 + 72) = 0;
									*(_DWORD *)(v247 + 76) = 1065353216;
									*(_DWORD *)(v247 + 88) = 0;
									*(_DWORD *)(v247 + 80) = 0;
									*(_DWORD *)(v247 + 84) = 0;
									*(_DWORD *)(v247 + 92) = 1065353216;
									*(_DWORD *)(v247 + 100) = 0;
									*(_DWORD *)(v247 + 96) = 0;
									*(_DWORD *)v247 = v248;
									*(_DWORD *)(v247 + 168) = 0;
									*(_DWORD *)(v247 + 112) = 0;
									*(_DWORD *)(v247 + 116) = 0;
									*(_DWORD *)(v247 + 120) = 0;
									*(_DWORD *)(v247 + 124) = 0;
									*(_DWORD *)(v247 + 128) = 0;
									*(_DWORD *)(v247 + 132) = 0;
									*(_DWORD *)(v247 + 136) = 0;
									*(_DWORD *)(v247 + 140) = 0;
									*(_DWORD *)(v247 + 144) = 0;
									*(_DWORD *)(v247 + 148) = 0;
									*(_DWORD *)(v247 + 152) = 0;
									*(_DWORD *)(v247 + 156) = 0;
									*(_DWORD *)(v247 + 160) = 0;
									*(_DWORD *)(v247 + 164) = 0;
									*(_DWORD *)v247 = v249;
									GameCall<int>(0xAA364C, 0xd6ff70)(v247, 16);
									v5 = v247;
									return v5;
								}
							}
							else if ((v1 ^ 0xFFFF0000) == -5525)
							{
								v839 = -256;
								v150 = GameCall<int>(0x9E8B28, 0xd6ff70)(176, &v839, 34031);
								v151 = *(int *)0xD71E5C;
								*(_DWORD *)v150 = *(int *)0xD71F10;
								*(_DWORD *)(v150 + 4) = 0;
								*(_DWORD *)(v150 + 8) = 0;
								*(_DWORD *)(v150 + 12) = 0;
								*(_DWORD *)(v150 + 16) = 0;
								*(_DWORD *)(v150 + 20) = 0;
								v152 = *(int *)0xD72128;
								*(_DWORD *)(v150 + 24) = *v674;
								*(_BYTE *)(v150 + 32) = 0;
								*(_DWORD *)(v150 + 28) = 0;
								*(_BYTE *)(v150 + 40) = 0;
								*(_DWORD *)(v150 + 36) = 0;
								*(_DWORD *)(v150 + 44) = 0;
								*(_DWORD *)(v150 + 52) = -1;
								*(_DWORD *)(v150 + 48) = 0;
								*(_DWORD *)(v150 + 64) = 0;
								*(_DWORD *)(v150 + 68) = 0;
								*(_DWORD *)(v150 + 72) = 0;
								*(_DWORD *)(v150 + 76) = 1065353216;
								*(_DWORD *)(v150 + 88) = 0;
								*(_DWORD *)(v150 + 80) = 0;
								*(_DWORD *)(v150 + 84) = 0;
								*(_DWORD *)(v150 + 92) = 1065353216;
								*(_DWORD *)(v150 + 100) = 0;
								*(_DWORD *)(v150 + 96) = 0;
								*(_DWORD *)v150 = v151;
								*(_DWORD *)(v150 + 168) = 0;
								*(_DWORD *)(v150 + 112) = 0;
								*(_DWORD *)(v150 + 116) = 0;
								*(_DWORD *)(v150 + 120) = 0;
								*(_DWORD *)(v150 + 124) = 0;
								*(_DWORD *)(v150 + 128) = 0;
								*(_DWORD *)(v150 + 132) = 0;
								*(_DWORD *)(v150 + 136) = 0;
								*(_DWORD *)(v150 + 140) = 0;
								*(_DWORD *)(v150 + 144) = 0;
								*(_DWORD *)(v150 + 148) = 0;
								*(_DWORD *)(v150 + 152) = 0;
								*(_DWORD *)(v150 + 156) = 0;
								*(_DWORD *)(v150 + 160) = 0;
								*(_DWORD *)(v150 + 164) = 0;
								*(_DWORD *)v150 = v152;
								GameCall<int>(0xAA364C, 0xd6ff70)(v150, 16);
								v5 = v150;
								return v5;
							}
						}
						else
						{
							if ((v1 ^ 0xFFFF0000) == -31525)
							{
								v821 = -256;
								v349 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v821, 34031);
								v350 = *(int *)0xD71E58;
								*(_DWORD *)v349 = *(int *)0xD71F10;
								*(_DWORD *)(v349 + 4) = 0;
								*(_DWORD *)(v349 + 8) = 0;
								*(_DWORD *)(v349 + 12) = 0;
								*(_DWORD *)(v349 + 16) = 0;
								*(_DWORD *)(v349 + 20) = 0;
								v351 = *(int *)0xD720E0;
								*(_DWORD *)(v349 + 24) = *v674;
								*(_BYTE *)(v349 + 32) = 0;
								*(_DWORD *)(v349 + 28) = 0;
								*(_BYTE *)(v349 + 40) = 0;
								*(_DWORD *)(v349 + 36) = 0;
								*(_DWORD *)(v349 + 44) = 0;
								*(_DWORD *)(v349 + 52) = -1;
								*(_DWORD *)(v349 + 48) = 0;
								*(_DWORD *)(v349 + 76) = 1065353216;
								*(_DWORD *)(v349 + 64) = 0;
								*(_DWORD *)(v349 + 68) = 0;
								*(_DWORD *)(v349 + 72) = 0;
								*(_DWORD *)(v349 + 92) = 1065353216;
								*(_DWORD *)(v349 + 88) = 0;
								*(_DWORD *)(v349 + 80) = 0;
								*(_DWORD *)(v349 + 84) = 0;
								*(_DWORD *)(v349 + 100) = 0;
								*(_DWORD *)(v349 + 96) = 0;
								*(_DWORD *)v349 = v350;
								*(_DWORD *)v349 = v351;
								GameCall<int>(0xAA364C, 0xd6ff70)(v349, 16);
								v5 = v349;
								return v5;
							}
							if ((v1 ^ 0xFFFF0000) == -31515)
							{
								v834 = -256;
								v421 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v834, 34031);
								v422 = *(int *)0xD71E58;
								*(_DWORD *)v421 = *(int *)0xD71F10;
								*(_DWORD *)(v421 + 4) = 0;
								*(_DWORD *)(v421 + 8) = 0;
								*(_DWORD *)(v421 + 12) = 0;
								*(_DWORD *)(v421 + 16) = 0;
								*(_DWORD *)(v421 + 20) = 0;
								v423 = *(int *)0xD720E4;
								*(_DWORD *)(v421 + 24) = *v674;
								*(_BYTE *)(v421 + 32) = 0;
								*(_DWORD *)(v421 + 28) = 0;
								*(_BYTE *)(v421 + 40) = 0;
								*(_DWORD *)(v421 + 36) = 0;
								*(_DWORD *)(v421 + 44) = 0;
								*(_DWORD *)(v421 + 52) = -1;
								*(_DWORD *)(v421 + 48) = 0;
								*(_DWORD *)(v421 + 76) = 1065353216;
								*(_DWORD *)(v421 + 64) = 0;
								*(_DWORD *)(v421 + 68) = 0;
								*(_DWORD *)(v421 + 72) = 0;
								*(_DWORD *)(v421 + 92) = 1065353216;
								*(_DWORD *)(v421 + 88) = 0;
								*(_DWORD *)(v421 + 80) = 0;
								*(_DWORD *)(v421 + 84) = 0;
								*(_DWORD *)(v421 + 100) = 0;
								*(_DWORD *)(v421 + 96) = 0;
								*(_DWORD *)v421 = v422;
								*(_DWORD *)v421 = v423;
								GameCall<int>(0xAA364C, 0xd6ff70)(v421, 16);
								v5 = v421;
								return v5;
							}
							if (v1 == 31021)
							{
								v820 = -256;
								v64 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v820, 34031);
								v65 = *(int *)0xD71E58;
								*(_DWORD *)v64 = *(int *)0xD71F10;
								*(_DWORD *)(v64 + 4) = 0;
								*(_DWORD *)(v64 + 8) = 0;
								*(_DWORD *)(v64 + 12) = 0;
								*(_DWORD *)(v64 + 16) = 0;
								*(_DWORD *)(v64 + 20) = 0;
								v66 = *(int *)0xD720DC;
								*(_DWORD *)(v64 + 24) = *v674;
								*(_BYTE *)(v64 + 32) = 0;
								*(_DWORD *)(v64 + 28) = 0;
								*(_BYTE *)(v64 + 40) = 0;
								*(_DWORD *)(v64 + 36) = 0;
								*(_DWORD *)(v64 + 44) = 0;
								*(_DWORD *)(v64 + 52) = -1;
								*(_DWORD *)(v64 + 48) = 0;
								*(_DWORD *)(v64 + 76) = 1065353216;
								*(_DWORD *)(v64 + 64) = 0;
								*(_DWORD *)(v64 + 68) = 0;
								*(_DWORD *)(v64 + 72) = 0;
								*(_DWORD *)(v64 + 92) = 1065353216;
								*(_DWORD *)(v64 + 88) = 0;
								*(_DWORD *)(v64 + 80) = 0;
								*(_DWORD *)(v64 + 84) = 0;
								*(_DWORD *)(v64 + 100) = 0;
								*(_DWORD *)(v64 + 96) = 0;
								*(_DWORD *)v64 = v65;
								*(_DWORD *)v64 = v66;
								GameCall<int>(0xAA364C, 0xd6ff70)(v64, 16);
								v5 = v64;
								return v5;
							}
						}
					}
					else
					{
						if (v1 == 28131)
						{
							v815 = -256;
							v205 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v815, HIDWORD(v868));
							v206 = *(int *)0xD71E58;
							*(_DWORD *)v205 = *(int *)0xD71F10;
							*(_DWORD *)(v205 + 4) = 0;
							*(_DWORD *)(v205 + 8) = 0;
							*(_DWORD *)(v205 + 12) = 0;
							*(_DWORD *)(v205 + 16) = 0;
							*(_DWORD *)(v205 + 20) = 0;
							v207 = *(int *)0xD720C8;
							*(_DWORD *)(v205 + 24) = *v674;
							*(_BYTE *)(v205 + 32) = 0;
							*(_DWORD *)(v205 + 28) = 0;
							*(_BYTE *)(v205 + 40) = 0;
							*(_DWORD *)(v205 + 36) = 0;
							*(_DWORD *)(v205 + 44) = 0;
							*(_DWORD *)(v205 + 52) = -1;
							*(_DWORD *)(v205 + 48) = 0;
							*(_DWORD *)(v205 + 76) = 1065353216;
							*(_DWORD *)(v205 + 64) = 0;
							*(_DWORD *)(v205 + 68) = 0;
							*(_DWORD *)(v205 + 72) = 0;
							*(_DWORD *)(v205 + 92) = 1065353216;
							*(_DWORD *)(v205 + 88) = 0;
							*(_DWORD *)(v205 + 80) = 0;
							*(_DWORD *)(v205 + 84) = 0;
							*(_DWORD *)(v205 + 100) = 0;
							*(_DWORD *)(v205 + 96) = 0;
							*(_DWORD *)v205 = v206;
							*(_DWORD *)v205 = v207;
							GameCall<int>(0xAA364C, 0xd6ff70)(v205, 16);
							v5 = v205;
							return v5;
						}
						if (v1 > 28131)
						{
							switch (v1)
							{
							case 29021:
								v817 = -256;
								v346 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v817, HIDWORD(v868));
								v347 = *(int *)0xD71E58;
								*(_DWORD *)v346 = *(int *)0xD71F10;
								*(_DWORD *)(v346 + 4) = 0;
								*(_DWORD *)(v346 + 8) = 0;
								*(_DWORD *)(v346 + 12) = 0;
								*(_DWORD *)(v346 + 16) = 0;
								*(_DWORD *)(v346 + 20) = 0;
								v348 = *(int *)0xD720D0;
								*(_DWORD *)(v346 + 24) = *v674;
								*(_BYTE *)(v346 + 32) = 0;
								*(_DWORD *)(v346 + 28) = 0;
								*(_BYTE *)(v346 + 40) = 0;
								*(_DWORD *)(v346 + 36) = 0;
								*(_DWORD *)(v346 + 44) = 0;
								*(_DWORD *)(v346 + 52) = -1;
								*(_DWORD *)(v346 + 48) = 0;
								*(_DWORD *)(v346 + 76) = 1065353216;
								*(_DWORD *)(v346 + 64) = 0;
								*(_DWORD *)(v346 + 68) = 0;
								*(_DWORD *)(v346 + 72) = 0;
								*(_DWORD *)(v346 + 92) = 1065353216;
								*(_DWORD *)(v346 + 88) = 0;
								*(_DWORD *)(v346 + 80) = 0;
								*(_DWORD *)(v346 + 84) = 0;
								*(_DWORD *)(v346 + 100) = 0;
								*(_DWORD *)(v346 + 96) = 0;
								*(_DWORD *)v346 = v347;
								*(_DWORD *)v346 = v348;
								GameCall<int>(0xAA364C, 0xd6ff70)(v346, 16);
								v5 = v346;
								return v5;
							case 30011:
								v818 = -256;
								v418 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v818, HIDWORD(v868));
								v419 = *(int *)0xD71E58;
								*(_DWORD *)v418 = *(int *)0xD71F10;
								*(_DWORD *)(v418 + 4) = 0;
								*(_DWORD *)(v418 + 8) = 0;
								*(_DWORD *)(v418 + 12) = 0;
								*(_DWORD *)(v418 + 16) = 0;
								*(_DWORD *)(v418 + 20) = 0;
								v420 = *(int *)0xD720D4;
								*(_DWORD *)(v418 + 24) = *v674;
								*(_BYTE *)(v418 + 32) = 0;
								*(_DWORD *)(v418 + 28) = 0;
								*(_BYTE *)(v418 + 40) = 0;
								*(_DWORD *)(v418 + 36) = 0;
								*(_DWORD *)(v418 + 44) = 0;
								*(_DWORD *)(v418 + 52) = -1;
								*(_DWORD *)(v418 + 48) = 0;
								*(_DWORD *)(v418 + 76) = 1065353216;
								*(_DWORD *)(v418 + 64) = 0;
								*(_DWORD *)(v418 + 68) = 0;
								*(_DWORD *)(v418 + 72) = 0;
								*(_DWORD *)(v418 + 92) = 1065353216;
								*(_DWORD *)(v418 + 88) = 0;
								*(_DWORD *)(v418 + 80) = 0;
								*(_DWORD *)(v418 + 84) = 0;
								*(_DWORD *)(v418 + 100) = 0;
								*(_DWORD *)(v418 + 96) = 0;
								*(_DWORD *)v418 = v419;
								*(_DWORD *)v418 = v420;
								GameCall<int>(0xAA364C, 0xd6ff70)(v418, 16);
								v5 = v418;
								return v5;
							case 29011:
								v816 = -256;
								v163 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v816, HIDWORD(v868));
								v164 = *(int *)0xD71E58;
								*(_DWORD *)v163 = *(int *)0xD71F10;
								*(_DWORD *)(v163 + 4) = 0;
								*(_DWORD *)(v163 + 8) = 0;
								*(_DWORD *)(v163 + 12) = 0;
								*(_DWORD *)(v163 + 16) = 0;
								*(_DWORD *)(v163 + 20) = 0;
								v165 = *(int *)0xD720CC;
								*(_DWORD *)(v163 + 24) = *v674;
								*(_BYTE *)(v163 + 32) = 0;
								*(_DWORD *)(v163 + 28) = 0;
								*(_BYTE *)(v163 + 40) = 0;
								*(_DWORD *)(v163 + 36) = 0;
								*(_DWORD *)(v163 + 44) = 0;
								*(_DWORD *)(v163 + 52) = -1;
								*(_DWORD *)(v163 + 48) = 0;
								*(_DWORD *)(v163 + 76) = 1065353216;
								*(_DWORD *)(v163 + 64) = 0;
								*(_DWORD *)(v163 + 68) = 0;
								*(_DWORD *)(v163 + 72) = 0;
								*(_DWORD *)(v163 + 92) = 1065353216;
								*(_DWORD *)(v163 + 88) = 0;
								*(_DWORD *)(v163 + 80) = 0;
								*(_DWORD *)(v163 + 84) = 0;
								*(_DWORD *)(v163 + 100) = 0;
								*(_DWORD *)(v163 + 96) = 0;
								*(_DWORD *)v163 = v164;
								*(_DWORD *)v163 = v165;
								GameCall<int>(0xAA364C, 0xd6ff70)(v163, 16);
								v5 = v163;
								return v5;
							}
						}
						else
						{
							switch (v1)
							{
							case 28091:
								v813 = -256;
								v385 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v813, HIDWORD(v868));
								v386 = *(int *)0xD71F24;
								*(_DWORD *)v385 = *(int *)0xD71F10;
								*(_DWORD *)(v385 + 4) = 0;
								*(_DWORD *)(v385 + 8) = 0;
								*(_DWORD *)(v385 + 12) = 0;
								*(_DWORD *)(v385 + 16) = 0;
								*(_DWORD *)(v385 + 20) = 0;
								*(_DWORD *)(v385 + 24) = *v674;
								*(_BYTE *)(v385 + 32) = 0;
								*(_DWORD *)(v385 + 28) = 0;
								*(_BYTE *)(v385 + 40) = 0;
								*(_DWORD *)(v385 + 36) = 0;
								*(_DWORD *)(v385 + 44) = 0;
								*(_DWORD *)(v385 + 52) = -1;
								*(_DWORD *)(v385 + 48) = 0;
								*(_DWORD *)(v385 + 76) = 1065353216;
								*(_DWORD *)(v385 + 64) = 0;
								*(_DWORD *)(v385 + 68) = 0;
								*(_DWORD *)(v385 + 72) = 0;
								*(_DWORD *)(v385 + 92) = 1065353216;
								*(_DWORD *)(v385 + 88) = 0;
								*(_DWORD *)(v385 + 80) = 0;
								*(_DWORD *)(v385 + 84) = 0;
								*(_DWORD *)(v385 + 100) = 0;
								*(_DWORD *)(v385 + 96) = 0;
								*(_DWORD *)v385 = v386;
								GameCall<int>(0xAA364C, 0xd6ff70)(v385, 30);
								v5 = v385;
								*(_DWORD *)v385 = *(int *)0xD720C0;
								return v5;
							case 28101:
								v814 = -256;
								v395 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v814, HIDWORD(v868));
								v396 = *(int *)0xD71E58;
								*(_DWORD *)v395 = *(int *)0xD71F10;
								*(_DWORD *)(v395 + 4) = 0;
								*(_DWORD *)(v395 + 8) = 0;
								*(_DWORD *)(v395 + 12) = 0;
								*(_DWORD *)(v395 + 16) = 0;
								*(_DWORD *)(v395 + 20) = 0;
								v397 = *(int *)0xD720C4;
								*(_DWORD *)(v395 + 24) = *v674;
								*(_BYTE *)(v395 + 32) = 0;
								*(_DWORD *)(v395 + 28) = 0;
								*(_BYTE *)(v395 + 40) = 0;
								*(_DWORD *)(v395 + 36) = 0;
								*(_DWORD *)(v395 + 44) = 0;
								*(_DWORD *)(v395 + 52) = -1;
								*(_DWORD *)(v395 + 48) = 0;
								*(_DWORD *)(v395 + 76) = 1065353216;
								*(_DWORD *)(v395 + 64) = 0;
								*(_DWORD *)(v395 + 68) = 0;
								*(_DWORD *)(v395 + 72) = 0;
								*(_DWORD *)(v395 + 92) = 1065353216;
								*(_DWORD *)(v395 + 88) = 0;
								*(_DWORD *)(v395 + 80) = 0;
								*(_DWORD *)(v395 + 84) = 0;
								*(_DWORD *)(v395 + 100) = 0;
								*(_DWORD *)(v395 + 96) = 0;
								*(_DWORD *)v395 = v396;
								*(_DWORD *)v395 = v397;
								GameCall<int>(0xAA364C, 0xd6ff70)(v395, 16);
								v5 = v395;
								return v5;
							case 28031:
								v822 = -256;
								v42 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v822, HIDWORD(v868));
								v43 = *(int *)0xD71E58;
								*(_DWORD *)v42 = *(int *)0xD71F10;
								*(_DWORD *)(v42 + 4) = 0;
								*(_DWORD *)(v42 + 8) = 0;
								*(_DWORD *)(v42 + 12) = 0;
								*(_DWORD *)(v42 + 16) = 0;
								*(_DWORD *)(v42 + 20) = 0;
								v44 = *(int *)0xD720BC;
								*(_DWORD *)(v42 + 24) = *v674;
								*(_BYTE *)(v42 + 32) = 0;
								*(_DWORD *)(v42 + 28) = 0;
								*(_BYTE *)(v42 + 40) = 0;
								*(_DWORD *)(v42 + 36) = 0;
								*(_DWORD *)(v42 + 44) = 0;
								*(_DWORD *)(v42 + 52) = -1;
								*(_DWORD *)(v42 + 48) = 0;
								*(_DWORD *)(v42 + 76) = 1065353216;
								*(_DWORD *)(v42 + 64) = 0;
								*(_DWORD *)(v42 + 68) = 0;
								*(_DWORD *)(v42 + 72) = 0;
								*(_DWORD *)(v42 + 92) = 1065353216;
								*(_DWORD *)(v42 + 88) = 0;
								*(_DWORD *)(v42 + 80) = 0;
								*(_DWORD *)(v42 + 84) = 0;
								*(_DWORD *)(v42 + 100) = 0;
								*(_DWORD *)(v42 + 96) = 0;
								*(_DWORD *)v42 = v43;
								*(_DWORD *)v42 = v44;
								GameCall<int>(0xAA364C, 0xd6ff70)(v42, 16);
								v5 = v42;
								return v5;
							}
						}
					}
				}
				else
				{
					if (v1 == (0x138BC + 1))
					{
						v854 = -256;
						v95 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v854, HIDWORD(v868));
						v96 = *(int *)0xD71E58;
						*(_DWORD *)v95 = *(int *)0xD71F10;
						*(_DWORD *)(v95 + 4) = 0;
						*(_DWORD *)(v95 + 8) = 0;
						*(_DWORD *)(v95 + 12) = 0;
						*(_DWORD *)(v95 + 16) = 0;
						*(_DWORD *)(v95 + 20) = 0;
						v97 = *(int *)0xD72104;
						*(_DWORD *)(v95 + 24) = *v674;
						*(_BYTE *)(v95 + 32) = 0;
						*(_DWORD *)(v95 + 28) = 0;
						*(_BYTE *)(v95 + 40) = 0;
						*(_DWORD *)(v95 + 36) = 0;
						*(_DWORD *)(v95 + 44) = 0;
						*(_DWORD *)(v95 + 52) = -1;
						*(_DWORD *)(v95 + 48) = 0;
						*(_DWORD *)(v95 + 76) = 1065353216;
						*(_DWORD *)(v95 + 64) = 0;
						*(_DWORD *)(v95 + 68) = 0;
						*(_DWORD *)(v95 + 72) = 0;
						*(_DWORD *)(v95 + 92) = 1065353216;
						*(_DWORD *)(v95 + 88) = 0;
						*(_DWORD *)(v95 + 80) = 0;
						*(_DWORD *)(v95 + 84) = 0;
						*(_DWORD *)(v95 + 100) = 0;
						*(_DWORD *)(v95 + 96) = 0;
						*(_DWORD *)v95 = v96;
						*(_DWORD *)v95 = v97;
						GameCall<int>(0xAA364C, 0xd6ff70)(v95, 12);
						v5 = v95;
						return v5;
					}
					if (v1 > (int)0x138BC + 1)
					{
						if (v1 == (0x138EC + 3))
						{
							v846 = -256;
							v198 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v846, HIDWORD(v868));
							v199 = *(int *)0xD71E58;
							v200 = v198;
							*(_DWORD *)v198 = *(int *)0xD71F10;
							*(_DWORD *)(v198 + 4) = 0;
							*(_DWORD *)(v198 + 8) = 0;
							*(_DWORD *)(v198 + 12) = 0;
							*(_DWORD *)(v198 + 16) = 0;
							*(_DWORD *)(v198 + 20) = 0;
							v201 = *(int *)0xD72114;
							*(_DWORD *)(v198 + 24) = *v674;
							*(_BYTE *)(v198 + 32) = 0;
							*(_DWORD *)(v198 + 28) = 0;
							*(_BYTE *)(v198 + 40) = 0;
							*(_DWORD *)(v198 + 36) = 0;
							*(_DWORD *)(v198 + 44) = 0;
							*(_DWORD *)(v198 + 52) = -1;
							*(_DWORD *)(v198 + 48) = 0;
							*(_DWORD *)(v198 + 76) = 1065353216;
							*(_DWORD *)(v198 + 64) = 0;
							*(_DWORD *)(v198 + 68) = 0;
							*(_DWORD *)(v198 + 72) = 0;
							*(_DWORD *)(v198 + 92) = 1065353216;
							*(_DWORD *)(v198 + 88) = 0;
							*(_DWORD *)(v198 + 80) = 0;
							*(_DWORD *)(v198 + 84) = 0;
							*(_DWORD *)(v198 + 100) = 0;
							*(_DWORD *)(v198 + 96) = 0;
							*(_DWORD *)v198 = v199;
							*(_DWORD *)v198 = v201;
							GameCall<int>(0xAA364C, 0xd6ff70)(v198, 30);
							v5 = v200;
							return v5;
						}
						if (v1 > (int)0x138EC + 3)
						{
							if (v1 == (0x1390C + 1))
							{
								v836 = -256;
								v364 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v836, HIDWORD(v868));
								v365 = *(int *)0xD71E58;
								v366 = v364;
								*(_DWORD *)v364 = *(int *)0xD71F10;
								*(_DWORD *)(v364 + 4) = 0;
								*(_DWORD *)(v364 + 8) = 0;
								*(_DWORD *)(v364 + 12) = 0;
								*(_DWORD *)(v364 + 16) = 0;
								*(_DWORD *)(v364 + 20) = 0;
								v367 = *(int *)0xD7211C;
								*(_DWORD *)(v364 + 24) = *v674;
								*(_BYTE *)(v364 + 32) = 0;
								*(_DWORD *)(v364 + 28) = 0;
								*(_BYTE *)(v364 + 40) = 0;
								*(_DWORD *)(v364 + 36) = 0;
								*(_DWORD *)(v364 + 44) = 0;
								*(_DWORD *)(v364 + 52) = -1;
								*(_DWORD *)(v364 + 48) = 0;
								*(_DWORD *)(v364 + 76) = 1065353216;
								*(_DWORD *)(v364 + 64) = 0;
								*(_DWORD *)(v364 + 68) = 0;
								*(_DWORD *)(v364 + 72) = 0;
								*(_DWORD *)(v364 + 92) = 1065353216;
								*(_DWORD *)(v364 + 88) = 0;
								*(_DWORD *)(v364 + 80) = 0;
								*(_DWORD *)(v364 + 84) = 0;
								*(_DWORD *)(v364 + 100) = 0;
								*(_DWORD *)(v364 + 96) = 0;
								*(_DWORD *)v364 = v365;
								*(_DWORD *)v364 = v367;
								GameCall<int>(0xAA364C, 0xd6ff70)(v364, 30);
								v5 = v366;
								return v5;
							}
							if (v1 > (int)0x1390C + 1)
							{
								if ((v1 ^ 0x10000) == 14615)
								{
									v837 = -256;
									v481 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v837, HIDWORD(v868));
									v482 = *(int *)0xD71E58;
									v483 = v481;
									v484 = v481 + 48;
									v485 = v481 + 64;
									v486 = v481 + 80;
									v487 = v481 + 28;
									v488 = v481 + 36;
									v489 = v481;
									v490 = *(int *)0xD71F10;
									*(_DWORD *)(v483 + 4) = 0;
									*(_DWORD *)v483 = v490;
									*(_DWORD *)(v483 + 8) = 0;
									*(_DWORD *)(v483 + 12) = 0;
									*(_DWORD *)(v483 + 16) = 0;
									*(_DWORD *)(v483 + 20) = 0;
									v491 = *(int *)0xD72120;
									*(_DWORD *)(v483 + 24) = *v674;
									*(_BYTE *)(v487 + 4) = 0;
									*(_DWORD *)v487 = 0;
									*(_BYTE *)(v488 + 4) = 0;
									*(_DWORD *)v488 = 0;
									*(_DWORD *)(v483 + 44) = 0;
									*(_DWORD *)(v484 + 4) = -1;
									*(_DWORD *)v484 = 0;
									*(_DWORD *)(v485 + 12) = 1065353216;
									*(_DWORD *)v485 = 0;
									*(_DWORD *)(v485 + 4) = 0;
									*(_DWORD *)(v485 + 8) = 0;
									*(_DWORD *)(v486 + 12) = 1065353216;
									*(_DWORD *)(v486 + 8) = 0;
									*(_DWORD *)v486 = 0;
									*(_DWORD *)(v486 + 4) = 0;
									*(_DWORD *)(v484 + 52) = 0;
									*(_DWORD *)(v484 + 48) = 0;
									*(_DWORD *)v483 = v482;
									*(_DWORD *)v489 = v491;
									GameCall<int>(0xAA364C, 0xd6ff70)(v483, 30);
									v5 = v489;
									return v5;
								}
								if ((v1 ^ 0x10000) == 14665)
								{
									v838 = -256;
									v266 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v838, HIDWORD(v868));
									v267 = *(int *)0xD71E58;
									v268 = v266;
									*(_DWORD *)v266 = *(int *)0xD71F10;
									*(_DWORD *)(v266 + 4) = 0;
									*(_DWORD *)(v266 + 8) = 0;
									*(_DWORD *)(v266 + 12) = 0;
									*(_DWORD *)(v266 + 16) = 0;
									*(_DWORD *)(v266 + 20) = 0;
									v269 = *(int *)0xD72124;
									*(_DWORD *)(v266 + 24) = *v674;
									*(_BYTE *)(v266 + 32) = 0;
									*(_DWORD *)(v266 + 28) = 0;
									*(_BYTE *)(v266 + 40) = 0;
									*(_DWORD *)(v266 + 36) = 0;
									*(_DWORD *)(v266 + 44) = 0;
									*(_DWORD *)(v266 + 52) = -1;
									*(_DWORD *)(v266 + 48) = 0;
									*(_DWORD *)(v266 + 76) = 1065353216;
									*(_DWORD *)(v266 + 64) = 0;
									*(_DWORD *)(v266 + 68) = 0;
									*(_DWORD *)(v266 + 72) = 0;
									*(_DWORD *)(v266 + 92) = 1065353216;
									*(_DWORD *)(v266 + 88) = 0;
									*(_DWORD *)(v266 + 80) = 0;
									*(_DWORD *)(v266 + 84) = 0;
									*(_DWORD *)(v266 + 100) = 0;
									*(_DWORD *)(v266 + 96) = 0;
									*(_DWORD *)v266 = v267;
									*(_DWORD *)v266 = v269;
									GameCall<int>(0xAA364C, 0xd6ff70)(v266, 16);
									v5 = v268;
									return v5;
								}
							}
							else if ((v1 ^ 0x10000) == 14595)
							{
								v845 = -256;
								v156 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v845, HIDWORD(v868));
								v157 = *(int *)0xD71E58;
								v158 = v156;
								*(_DWORD *)v156 = *(int *)0xD71F10;
								*(_DWORD *)(v156 + 4) = 0;
								*(_DWORD *)(v156 + 8) = 0;
								*(_DWORD *)(v156 + 12) = 0;
								*(_DWORD *)(v156 + 16) = 0;
								*(_DWORD *)(v156 + 20) = 0;
								v159 = *(int *)0xD72118;
								*(_DWORD *)(v156 + 24) = *v674;
								*(_BYTE *)(v156 + 32) = 0;
								*(_DWORD *)(v156 + 28) = 0;
								*(_BYTE *)(v156 + 40) = 0;
								*(_DWORD *)(v156 + 36) = 0;
								*(_DWORD *)(v156 + 44) = 0;
								*(_DWORD *)(v156 + 52) = -1;
								*(_DWORD *)(v156 + 48) = 0;
								*(_DWORD *)(v156 + 76) = 1065353216;
								*(_DWORD *)(v156 + 64) = 0;
								*(_DWORD *)(v156 + 68) = 0;
								*(_DWORD *)(v156 + 72) = 0;
								*(_DWORD *)(v156 + 92) = 1065353216;
								*(_DWORD *)(v156 + 88) = 0;
								*(_DWORD *)(v156 + 80) = 0;
								*(_DWORD *)(v156 + 84) = 0;
								*(_DWORD *)(v156 + 100) = 0;
								*(_DWORD *)(v156 + 96) = 0;
								*(_DWORD *)v156 = v157;
								*(_DWORD *)v156 = v159;
								GameCall<int>(0xAA364C, 0xd6ff70)(v156, 16);
								v5 = v158;
								return v5;
							}
						}
						else
						{
							switch (v1 ^ 0x10000)
							{
							case 14555:
								v856 = -256;
								v368 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v856, HIDWORD(v868));
								v369 = *(int *)0xD71E58;
								v370 = v368;
								*(_DWORD *)v368 = *(int *)0xD71F10;
								*(_DWORD *)(v368 + 4) = 0;
								*(_DWORD *)(v368 + 8) = 0;
								*(_DWORD *)(v368 + 12) = 0;
								*(_DWORD *)(v368 + 16) = 0;
								*(_DWORD *)(v368 + 20) = 0;
								v371 = *(int *)0xD7210C;
								*(_DWORD *)(v368 + 24) = *v674;
								*(_BYTE *)(v368 + 32) = 0;
								*(_DWORD *)(v368 + 28) = 0;
								*(_BYTE *)(v368 + 40) = 0;
								*(_DWORD *)(v368 + 36) = 0;
								*(_DWORD *)(v368 + 44) = 0;
								*(_DWORD *)(v368 + 52) = -1;
								*(_DWORD *)(v368 + 48) = 0;
								*(_DWORD *)(v368 + 76) = 1065353216;
								*(_DWORD *)(v368 + 64) = 0;
								*(_DWORD *)(v368 + 68) = 0;
								*(_DWORD *)(v368 + 72) = 0;
								*(_DWORD *)(v368 + 92) = 1065353216;
								*(_DWORD *)(v368 + 88) = 0;
								*(_DWORD *)(v368 + 80) = 0;
								*(_DWORD *)(v368 + 84) = 0;
								*(_DWORD *)(v368 + 100) = 0;
								*(_DWORD *)(v368 + 96) = 0;
								*(_DWORD *)v368 = v369;
								*(_DWORD *)v368 = v371;
								GameCall<int>(0xAA364C, 0xd6ff70)(v368, 30);
								v5 = v370;
								return v5;
							case 14565:
								v847 = -256;
								v398 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v847, HIDWORD(v868));
								v399 = *(int *)0xD71E58;
								v400 = v398;
								*(_DWORD *)v398 = *(int *)0xD71F10;
								*(_DWORD *)(v398 + 4) = 0;
								*(_DWORD *)(v398 + 8) = 0;
								*(_DWORD *)(v398 + 12) = 0;
								*(_DWORD *)(v398 + 16) = 0;
								*(_DWORD *)(v398 + 20) = 0;
								v401 = *(int *)0xD72110;
								*(_DWORD *)(v398 + 24) = *v674;
								*(_BYTE *)(v398 + 32) = 0;
								*(_DWORD *)(v398 + 28) = 0;
								*(_BYTE *)(v398 + 40) = 0;
								*(_DWORD *)(v398 + 36) = 0;
								*(_DWORD *)(v398 + 44) = 0;
								*(_DWORD *)(v398 + 52) = -1;
								*(_DWORD *)(v398 + 48) = 0;
								*(_DWORD *)(v398 + 76) = 1065353216;
								*(_DWORD *)(v398 + 64) = 0;
								*(_DWORD *)(v398 + 68) = 0;
								*(_DWORD *)(v398 + 72) = 0;
								*(_DWORD *)(v398 + 92) = 1065353216;
								*(_DWORD *)(v398 + 88) = 0;
								*(_DWORD *)(v398 + 80) = 0;
								*(_DWORD *)(v398 + 84) = 0;
								*(_DWORD *)(v398 + 100) = 0;
								*(_DWORD *)(v398 + 96) = 0;
								*(_DWORD *)v398 = v399;
								*(_DWORD *)v398 = v401;
								GameCall<int>(0xAA364C, 0xd6ff70)(v398, 30);
								v5 = v400;
								return v5;
							case 14545:
								v855 = -256;
								v61 = GameCall<int>(0x9E8B28, 0xd6ff70)(176, &v855, HIDWORD(v868));
								v62 = *(int *)0xD71E5C;
								*(_DWORD *)v61 = *(int *)0xD71F10;
								*(_DWORD *)(v61 + 4) = 0;
								*(_DWORD *)(v61 + 8) = 0;
								*(_DWORD *)(v61 + 12) = 0;
								*(_DWORD *)(v61 + 16) = 0;
								*(_DWORD *)(v61 + 20) = 0;
								v63 = *(int *)0xD72108;
								*(_DWORD *)(v61 + 24) = *v674;
								*(_BYTE *)(v61 + 32) = 0;
								*(_DWORD *)(v61 + 28) = 0;
								*(_BYTE *)(v61 + 40) = 0;
								*(_DWORD *)(v61 + 36) = 0;
								*(_DWORD *)(v61 + 44) = 0;
								*(_DWORD *)(v61 + 52) = -1;
								*(_DWORD *)(v61 + 48) = 0;
								*(_DWORD *)(v61 + 76) = 1065353216;
								*(_DWORD *)(v61 + 64) = 0;
								*(_DWORD *)(v61 + 68) = 0;
								*(_DWORD *)(v61 + 72) = 0;
								*(_DWORD *)(v61 + 80) = 0;
								*(_DWORD *)(v61 + 88) = 0;
								*(_DWORD *)(v61 + 84) = 0;
								*(_DWORD *)(v61 + 92) = 1065353216;
								*(_DWORD *)(v61 + 100) = 0;
								*(_DWORD *)(v61 + 96) = 0;
								*(_DWORD *)v61 = v62;
								*(_DWORD *)(v61 + 168) = 0;
								*(_DWORD *)(v61 + 112) = 0;
								*(_DWORD *)(v61 + 116) = 0;
								*(_DWORD *)(v61 + 120) = 0;
								*(_DWORD *)(v61 + 124) = 0;
								*(_DWORD *)(v61 + 128) = 0;
								*(_DWORD *)(v61 + 132) = 0;
								*(_DWORD *)(v61 + 136) = 0;
								*(_DWORD *)(v61 + 140) = 0;
								*(_DWORD *)(v61 + 144) = 0;
								*(_DWORD *)(v61 + 148) = 0;
								*(_DWORD *)(v61 + 152) = 0;
								*(_DWORD *)(v61 + 156) = 0;
								*(_DWORD *)(v61 + 160) = 0;
								*(_DWORD *)(v61 + 164) = 0;
								*(_DWORD *)v61 = v63;
								GameCall<int>(0xAA364C, 0xd6ff70)(v61, 12);
								v5 = v61;
								return v5;
							}
						}
					}
					else if (v1 > (int)0x138A0 + 1)
					{
						if ((v1 ^ 0x10000) == 14515)
						{
							v852 = -256;
							v234 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v852, HIDWORD(v868));
							v235 = *(int *)0xD71E58;
							*(_DWORD *)v234 = *(int *)0xD71F10;
							*(_DWORD *)(v234 + 4) = 0;
							*(_DWORD *)(v234 + 8) = 0;
							*(_DWORD *)(v234 + 12) = 0;
							*(_DWORD *)(v234 + 16) = 0;
							*(_DWORD *)(v234 + 20) = 0;
							v236 = *(int *)0xD720FC;
							*(_DWORD *)(v234 + 24) = *v674;
							*(_BYTE *)(v234 + 32) = 0;
							*(_DWORD *)(v234 + 28) = 0;
							*(_BYTE *)(v234 + 40) = 0;
							*(_DWORD *)(v234 + 36) = 0;
							*(_DWORD *)(v234 + 44) = 0;
							*(_DWORD *)(v234 + 52) = -1;
							*(_DWORD *)(v234 + 48) = 0;
							*(_DWORD *)(v234 + 76) = 1065353216;
							*(_DWORD *)(v234 + 64) = 0;
							*(_DWORD *)(v234 + 68) = 0;
							*(_DWORD *)(v234 + 72) = 0;
							*(_DWORD *)(v234 + 92) = 1065353216;
							*(_DWORD *)(v234 + 88) = 0;
							*(_DWORD *)(v234 + 80) = 0;
							*(_DWORD *)(v234 + 84) = 0;
							*(_DWORD *)(v234 + 100) = 0;
							*(_DWORD *)(v234 + 96) = 0;
							*(_DWORD *)v234 = v235;
							*(_DWORD *)v234 = v236;
							GameCall<int>(0xAA364C, 0xd6ff70)(v234, 16);
							v5 = v234;
							return v5;
						}
						v676 = v1 ^ 0x10000;
						if ((v1 ^ 0x10000) == 14516)
						{
							v853 = -256;
							v299 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v853, 14516);
							v300 = *(int *)0xD71E58;
							*(_DWORD *)v299 = *(int *)0xD71F10;
							*(_DWORD *)(v299 + 4) = 0;
							*(_DWORD *)(v299 + 8) = 0;
							*(_DWORD *)(v299 + 12) = 0;
							*(_DWORD *)(v299 + 16) = 0;
							*(_DWORD *)(v299 + 20) = 0;
							v301 = *(int *)0xD72100;
							*(_DWORD *)(v299 + 24) = *v674;
							*(_BYTE *)(v299 + 32) = 0;
							*(_DWORD *)(v299 + 28) = 0;
							*(_BYTE *)(v299 + 40) = 0;
							*(_DWORD *)(v299 + 36) = 0;
							*(_DWORD *)(v299 + 44) = 0;
							*(_DWORD *)(v299 + 52) = -1;
							*(_DWORD *)(v299 + 48) = 0;
							*(_DWORD *)(v299 + 76) = 1065353216;
							*(_DWORD *)(v299 + 64) = 0;
							*(_DWORD *)(v299 + 68) = 0;
							*(_DWORD *)(v299 + 72) = 0;
							*(_DWORD *)(v299 + 92) = 1065353216;
							*(_DWORD *)(v299 + 88) = 0;
							*(_DWORD *)(v299 + 80) = 0;
							*(_DWORD *)(v299 + 84) = 0;
							*(_DWORD *)(v299 + 100) = 0;
							*(_DWORD *)(v299 + 96) = 0;
							*(_DWORD *)v299 = v300;
							*(_DWORD *)v299 = v301;
							GameCall<int>(0xAA364C, 0xd6ff70)(v299, 16);
							v5 = v299;
							return v5;
						}
						if ((v1 ^ 0x10000) == 14505)
						{
							v851 = -256;
							v124 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v851, v676);
							v125 = *(int *)0xD71E58;
							*(_DWORD *)v124 = *(int *)0xD71F10;
							*(_DWORD *)(v124 + 4) = 0;
							*(_DWORD *)(v124 + 8) = 0;
							*(_DWORD *)(v124 + 12) = 0;
							*(_DWORD *)(v124 + 16) = 0;
							*(_DWORD *)(v124 + 20) = 0;
							v126 = *(int *)0xD720F8;
							*(_DWORD *)(v124 + 24) = *v674;
							*(_BYTE *)(v124 + 32) = 0;
							*(_DWORD *)(v124 + 28) = 0;
							*(_BYTE *)(v124 + 40) = 0;
							*(_DWORD *)(v124 + 36) = 0;
							*(_DWORD *)(v124 + 44) = 0;
							*(_DWORD *)(v124 + 52) = -1;
							*(_DWORD *)(v124 + 48) = 0;
							*(_DWORD *)(v124 + 76) = 1065353216;
							*(_DWORD *)(v124 + 64) = 0;
							*(_DWORD *)(v124 + 68) = 0;
							*(_DWORD *)(v124 + 72) = 0;
							*(_DWORD *)(v124 + 92) = 1065353216;
							*(_DWORD *)(v124 + 88) = 0;
							*(_DWORD *)(v124 + 80) = 0;
							*(_DWORD *)(v124 + 84) = 0;
							*(_DWORD *)(v124 + 100) = 0;
							*(_DWORD *)(v124 + 96) = 0;
							*(_DWORD *)v124 = v125;
							*(_DWORD *)v124 = v126;
							GameCall<int>(0xAA364C, 0xd6ff70)(v124, 30);
							v5 = v124;
							return v5;
						}
					}
					else
					{
						if (v1 >= (int)0x1389C + 3)
						{
							v850 = -256;
							v231 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v850, HIDWORD(v868));
							v232 = *(int *)0xD71E58;
							*(_DWORD *)v231 = *(int *)0xD71F10;
							*(_DWORD *)(v231 + 4) = 0;
							*(_DWORD *)(v231 + 8) = 0;
							*(_DWORD *)(v231 + 12) = 0;
							*(_DWORD *)(v231 + 16) = 0;
							*(_DWORD *)(v231 + 20) = 0;
							v233 = *(int *)0xD720F4;
							*(_DWORD *)(v231 + 24) = *v674;
							*(_BYTE *)(v231 + 32) = 0;
							*(_DWORD *)(v231 + 28) = 0;
							*(_BYTE *)(v231 + 40) = 0;
							*(_DWORD *)(v231 + 36) = 0;
							*(_DWORD *)(v231 + 44) = 0;
							*(_DWORD *)(v231 + 52) = -1;
							*(_DWORD *)(v231 + 48) = 0;
							*(_DWORD *)(v231 + 76) = 1065353216;
							*(_DWORD *)(v231 + 64) = 0;
							*(_DWORD *)(v231 + 68) = 0;
							*(_DWORD *)(v231 + 72) = 0;
							*(_DWORD *)(v231 + 92) = 1065353216;
							*(_DWORD *)(v231 + 88) = 0;
							*(_DWORD *)(v231 + 80) = 0;
							*(_DWORD *)(v231 + 84) = 0;
							*(_DWORD *)(v231 + 100) = 0;
							*(_DWORD *)(v231 + 96) = 0;
							*(_DWORD *)v231 = v232;
							*(_DWORD *)v231 = v233;
							GameCall<int>(0xAA364C, 0xd6ff70)(v231, 16);
							v5 = v231;
							return v5;
						}
						if ((v1 ^ 0x10000) == 14475)
						{
							v848 = -256;
							v454 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v848, HIDWORD(v868));
							v455 = *(int *)0xD71F24;
							*(_DWORD *)v454 = *(int *)0xD71F10;
							*(_DWORD *)(v454 + 4) = 0;
							*(_DWORD *)(v454 + 8) = 0;
							*(_DWORD *)(v454 + 12) = 0;
							*(_DWORD *)(v454 + 16) = 0;
							*(_DWORD *)(v454 + 20) = 0;
							*(_DWORD *)(v454 + 24) = *v674;
							*(_BYTE *)(v454 + 32) = 0;
							*(_DWORD *)(v454 + 28) = 0;
							*(_BYTE *)(v454 + 40) = 0;
							*(_DWORD *)(v454 + 36) = 0;
							*(_DWORD *)(v454 + 44) = 0;
							*(_DWORD *)(v454 + 52) = -1;
							*(_DWORD *)(v454 + 48) = 0;
							*(_DWORD *)(v454 + 76) = 1065353216;
							*(_DWORD *)(v454 + 64) = 0;
							*(_DWORD *)(v454 + 68) = 0;
							*(_DWORD *)(v454 + 72) = 0;
							*(_DWORD *)(v454 + 92) = 1065353216;
							*(_DWORD *)(v454 + 88) = 0;
							*(_DWORD *)(v454 + 80) = 0;
							*(_DWORD *)(v454 + 84) = 0;
							*(_DWORD *)(v454 + 100) = 0;
							*(_DWORD *)(v454 + 96) = 0;
							*(_DWORD *)v454 = v455;
							GameCall<int>(0xAA364C, 0xd6ff70)(v454, 30);
							v5 = v454;
							*(_DWORD *)v454 = *(int *)0xD720EC;
							return v5;
						}
						if ((v1 ^ 0x10000) == 14485)
						{
							v849 = -256;
							v467 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v849, HIDWORD(v868));
							v468 = *(int *)0xD71E58;
							*(_DWORD *)v467 = *(int *)0xD71F10;
							*(_DWORD *)(v467 + 4) = 0;
							*(_DWORD *)(v467 + 8) = 0;
							*(_DWORD *)(v467 + 12) = 0;
							*(_DWORD *)(v467 + 16) = 0;
							*(_DWORD *)(v467 + 20) = 0;
							v469 = *(int *)0xD720F0;
							*(_DWORD *)(v467 + 24) = *v674;
							*(_BYTE *)(v467 + 32) = 0;
							*(_DWORD *)(v467 + 28) = 0;
							*(_BYTE *)(v467 + 40) = 0;
							*(_DWORD *)(v467 + 36) = 0;
							*(_DWORD *)(v467 + 44) = 0;
							*(_DWORD *)(v467 + 52) = -1;
							*(_DWORD *)(v467 + 48) = 0;
							*(_DWORD *)(v467 + 76) = 1065353216;
							*(_DWORD *)(v467 + 64) = 0;
							*(_DWORD *)(v467 + 68) = 0;
							*(_DWORD *)(v467 + 72) = 0;
							*(_DWORD *)(v467 + 92) = 1065353216;
							*(_DWORD *)(v467 + 88) = 0;
							*(_DWORD *)(v467 + 80) = 0;
							*(_DWORD *)(v467 + 84) = 0;
							*(_DWORD *)(v467 + 100) = 0;
							*(_DWORD *)(v467 + 96) = 0;
							*(_DWORD *)v467 = v468;
							*(_DWORD *)v467 = v469;
							GameCall<int>(0xAA364C, 0xd6ff70)(v467, 12);
							v5 = v467;
							return v5;
						}
						if ((v1 ^ 0xFFFF0000) == -5435)
						{
							v844 = -256;
							v2 = GameCall<int>(0x9E8B28, 0xd6ff70)(176, &v844, HIDWORD(v868));
							v3 = *(int *)0xD71E5C;
							*(_DWORD *)v2 = *(int *)0xD71F10;
							*(_DWORD *)(v2 + 4) = 0;
							*(_DWORD *)(v2 + 8) = 0;
							*(_DWORD *)(v2 + 12) = 0;
							*(_DWORD *)(v2 + 16) = 0;
							*(_DWORD *)(v2 + 20) = 0;
							v4 = *(int *)0xD7213C;
							*(_DWORD *)(v2 + 24) = *v674;
							*(_BYTE *)(v2 + 32) = 0;
							*(_DWORD *)(v2 + 28) = 0;
							*(_BYTE *)(v2 + 40) = 0;
							*(_DWORD *)(v2 + 36) = 0;
							*(_DWORD *)(v2 + 44) = 0;
							*(_DWORD *)(v2 + 52) = -1;
							*(_DWORD *)(v2 + 48) = 0;
							*(_DWORD *)(v2 + 64) = 0;
							*(_DWORD *)(v2 + 68) = 0;
							*(_DWORD *)(v2 + 72) = 0;
							*(_DWORD *)(v2 + 76) = 1065353216;
							*(_DWORD *)(v2 + 88) = 0;
							*(_DWORD *)(v2 + 80) = 0;
							*(_DWORD *)(v2 + 84) = 0;
							*(_DWORD *)(v2 + 92) = 1065353216;
							*(_DWORD *)(v2 + 100) = 0;
							*(_DWORD *)(v2 + 96) = 0;
							*(_DWORD *)v2 = v3;
							*(_DWORD *)(v2 + 168) = 0;
							*(_DWORD *)(v2 + 112) = 0;
							*(_DWORD *)(v2 + 116) = 0;
							*(_DWORD *)(v2 + 120) = 0;
							*(_DWORD *)(v2 + 124) = 0;
							*(_DWORD *)(v2 + 128) = 0;
							*(_DWORD *)(v2 + 132) = 0;
							*(_DWORD *)(v2 + 136) = 0;
							*(_DWORD *)(v2 + 140) = 0;
							*(_DWORD *)(v2 + 144) = 0;
							*(_DWORD *)(v2 + 148) = 0;
							*(_DWORD *)(v2 + 152) = 0;
							*(_DWORD *)(v2 + 156) = 0;
							*(_DWORD *)(v2 + 160) = 0;
							*(_DWORD *)(v2 + 164) = 0;
							*(_DWORD *)v2 = v4;
							GameCall<int>(0xAA364C, 0xd6ff70)(v2, 16);
							v5 = v2;
							return v5;
						}
					}
				}
			}
		}
		// Non specified unit ID
		v812 = -256;
		v28 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v812, v676);
		v29 = *(int *)0xD71E58;
		v30 = v28;
		*(_DWORD *)v28 = *(int *)0xD71F10;
		*(_DWORD *)(v28 + 4) = 0;
		*(_DWORD *)(v28 + 8) = 0;
		*(_DWORD *)(v28 + 12) = 0;
		*(_DWORD *)(v28 + 16) = 0;
		*(_DWORD *)(v28 + 20) = 0;
		v31 = *(int *)0xD71F24;
		*(_DWORD *)(v28 + 24) = *v674;
		*(_BYTE *)(v28 + 32) = 0;
		*(_DWORD *)(v28 + 28) = 0;
		*(_BYTE *)(v28 + 40) = 0;
		*(_DWORD *)(v28 + 36) = 0;
		*(_DWORD *)(v28 + 44) = 0;
		*(_DWORD *)(v28 + 52) = -1;
		*(_DWORD *)(v28 + 48) = 0;
		*(_DWORD *)(v28 + 76) = 1065353216;
		*(_DWORD *)(v28 + 64) = 0;
		*(_DWORD *)(v28 + 68) = 0;
		*(_DWORD *)(v28 + 72) = 0;
		*(_DWORD *)(v28 + 92) = 1065353216;
		*(_DWORD *)(v28 + 88) = 0;
		*(_DWORD *)(v28 + 80) = 0;
		*(_DWORD *)(v28 + 84) = 0;
		*(_DWORD *)(v28 + 100) = 0;
		*(_DWORD *)(v28 + 96) = 0;
		*(_DWORD *)v28 = v29;
		*(_DWORD *)v28 = v31;
		GameCall<int>(0xAA364C, 0xd6ff70)(v28, 30);
		v5 = v30;
		return v5;
	}
	v675 = (char *)v868;
	v862 = *(__int64 *)((char *)&v669 + 4);
	HIDWORD(v669) = (_DWORD)v674;
	v858 = *(__int64 *)((char *)&v671 + 4);
	v859 = v671;
	v860 = *(__int64 *)((char *)&v670 + 4);
	v861 = v670;
	v863 = v669;
	v864 = *(__int64 *)((char *)&v668 + 4);
	v865 = v668;
	v866 = *(__int64 *)((char *)&v667 + 4);
	v867 = v667;
	v513 = *v674;
	if (*v674 == (0x11260 + 1))
	{
		v815 = -256;
		v514 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v815, v868);
		v532 = *(int *)0xD71E50;
		v516 = v514;
		v533 = *(int *)0xD72144;
		v534 = (int *)*(int *)0xD71E60;
		*(_DWORD *)v514 = *(int *)0xD71F10;
		*(_DWORD *)(v514 + 4) = 0;
		*(_DWORD *)(v514 + 8) = 0;
		*(_DWORD *)(v514 + 12) = 0;
		*(_DWORD *)(v514 + 16) = 0;
		*(_DWORD *)(v514 + 20) = 0;
		v535 = *v674;
		*(_DWORD *)(v514 + 24) = *v674;
		*(_BYTE *)(v514 + 32) = 0;
		*(_DWORD *)(v514 + 28) = 0;
		*(_BYTE *)(v514 + 40) = 0;
		*(_DWORD *)(v514 + 36) = 0;
		*(_DWORD *)(v514 + 44) = 0;
		*(_DWORD *)(v514 + 48) = 0;
		*(_DWORD *)(v514 + 52) = -1;
		*(_DWORD *)(v514 + 76) = 1065353216;
		*(_DWORD *)(v514 + 64) = 0;
		*(_DWORD *)(v514 + 68) = 0;
		*(_DWORD *)(v514 + 72) = 0;
		*(_DWORD *)(v514 + 92) = 1065353216;
		*(_DWORD *)(v514 + 88) = 0;
		*(_DWORD *)(v514 + 80) = 0;
		*(_DWORD *)(v514 + 84) = 0;
		*(_DWORD *)(v514 + 100) = 0;
		*(_DWORD *)(v514 + 96) = 0;
		*(_DWORD *)v514 = v532;
		*(_DWORD *)v514 = v533;
		v536 = *v534;
		v833 = -256;
		v537 = GameCall<int>(0x9E9198, 0xd6ff70)(v536, 64, (int)&v833, 0, 0, v514 + 80, v535, v514 + 64);
		*(_DWORD *)(v514 + 8) = v537;
		v521 = &v834;
		*(_DWORD *)v537 = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 4) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 8) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 12) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 16) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 20) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 24) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 28) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 32) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 36) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 40) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 44) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 48) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 52) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 56) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 60) = 0;
		*(_DWORD *)(v514 + 12) = 16;
		v834 = -256;
		goto LABEL_342;
	}
	if (*v674 <= (int)0x11260 + 1)
	{
		v675 = (char *)0x111B4 + 3;
		if (v513 == (0x111B4 + 3))
		{
			v817 = -256;
			v514 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v817, (char *)0x111B4 + 3);
			v560 = *(int *)0xD71E50;
			v516 = v514;
			v561 = *(int *)0xD71EA4;
			v562 = (int *)*(int *)0xD71E60;
			*(_DWORD *)v514 = *(int *)0xD71F10;
			*(_DWORD *)(v514 + 4) = 0;
			*(_DWORD *)(v514 + 8) = 0;
			*(_DWORD *)(v514 + 12) = 0;
			*(_DWORD *)(v514 + 16) = 0;
			*(_DWORD *)(v514 + 20) = 0;
			v563 = *v674;
			*(_DWORD *)(v514 + 24) = *v674;
			*(_BYTE *)(v514 + 32) = 0;
			*(_DWORD *)(v514 + 28) = 0;
			*(_BYTE *)(v514 + 40) = 0;
			*(_DWORD *)(v514 + 36) = 0;
			*(_DWORD *)(v514 + 44) = 0;
			*(_DWORD *)(v514 + 48) = 0;
			*(_DWORD *)(v514 + 52) = -1;
			*(_DWORD *)(v514 + 76) = 1065353216;
			*(_DWORD *)(v514 + 64) = 0;
			*(_DWORD *)(v514 + 68) = 0;
			*(_DWORD *)(v514 + 72) = 0;
			*(_DWORD *)(v514 + 92) = 1065353216;
			*(_DWORD *)(v514 + 88) = 0;
			*(_DWORD *)(v514 + 80) = 0;
			*(_DWORD *)(v514 + 84) = 0;
			*(_DWORD *)(v514 + 100) = 0;
			*(_DWORD *)(v514 + 96) = 0;
			*(_DWORD *)v514 = v560;
			*(_DWORD *)v514 = v561;
			v564 = *v562;
			v829 = -256;
			v565 = GameCall<int>(0x9E9198, 0xd6ff70)(v564, 64, (int)&v829, 0, 0, v514 + 80, v563, v514 + 64);
			*(_DWORD *)(v514 + 8) = v565;
			v521 = &v828;
			*(_DWORD *)v565 = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 4) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 8) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 12) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 16) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 20) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 24) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 28) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 32) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 36) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 40) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 44) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 48) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 52) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 56) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 60) = 0;
			*(_DWORD *)(v514 + 12) = 16;
			v828 = -256;
			goto LABEL_342;
		}
		if (v513 <= (int)0x111B4 + 3)
		{
			if (v513 == (0x11198 + 1))
				goto LABEL_332;
			if (v513 <= (int)0x11198 + 1)
			{
				if ((v513 ^ 0x10000) != 4485)
				{
					if ((v513 ^ 0x10000) != 4495)
						goto LABEL_358;
					v820 = -256;
					v546 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v820, (char *)0x111B4 + 3);
					v547 = *(int *)0xD71E50;
					v524 = v546;
					v548 = *(int *)0xD71EAC;
					v549 = (int *)*(int *)0xD71E60;
					*(_DWORD *)v546 = *(int *)0xD71F10;
					*(_DWORD *)(v546 + 4) = 0;
					*(_DWORD *)(v546 + 8) = 0;
					*(_DWORD *)(v546 + 12) = 0;
					*(_DWORD *)(v546 + 16) = 0;
					*(_DWORD *)(v546 + 20) = 0;
					v550 = *v674;
					*(_DWORD *)(v546 + 24) = *v674;
					*(_BYTE *)(v546 + 32) = 0;
					*(_DWORD *)(v546 + 28) = 0;
					*(_BYTE *)(v546 + 40) = 0;
					*(_DWORD *)(v546 + 36) = 0;
					*(_DWORD *)(v546 + 44) = 0;
					*(_DWORD *)(v546 + 48) = 0;
					*(_DWORD *)(v546 + 52) = -1;
					*(_DWORD *)(v546 + 76) = 1065353216;
					*(_DWORD *)(v546 + 64) = 0;
					*(_DWORD *)(v546 + 68) = 0;
					*(_DWORD *)(v546 + 72) = 0;
					*(_DWORD *)(v546 + 92) = 1065353216;
					*(_DWORD *)(v546 + 88) = 0;
					*(_DWORD *)(v546 + 80) = 0;
					*(_DWORD *)(v546 + 84) = 0;
					*(_DWORD *)(v546 + 100) = 0;
					*(_DWORD *)(v546 + 96) = 0;
					*(_DWORD *)v546 = v547;
					*(_DWORD *)v546 = v548;
					v551 = *v549;
					v813 = -256;
					v552 = GameCall<int>(0x9E9198, 0xd6ff70)(v551, 64, (int)&v813, 0, 0, v546 + 28, v550, v546 + 64);
					*(_DWORD *)(v546 + 8) = v552;
					v553 = &v808;
					*(_DWORD *)v552 = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 4) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 8) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 12) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 16) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 20) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 24) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 28) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 32) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 36) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 40) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 44) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 48) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 52) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 56) = 0;
					*(_DWORD *)(*(_DWORD *)(v546 + 8) + 60) = 0;
					*(_DWORD *)(v546 + 12) = 16;
					v808 = -256;
				LABEL_353:
					v530 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, v553);
					v531 = v546;
					goto LABEL_340;
				}
				goto LABEL_332;
			}
			if ((v513 ^ 0x10000) == 4515)
			{
				v819 = -256;
				v653 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v819, (char *)0x111B4 + 3);
				v654 = *(int *)0xD71E50;
				v524 = v653;
				v655 = *(int *)0xD71E9C;
				v656 = (int *)*(int *)0xD71E60;
				*(_DWORD *)v653 = *(int *)0xD71F10;
				*(_DWORD *)(v653 + 4) = 0;
				*(_DWORD *)(v653 + 8) = 0;
				*(_DWORD *)(v653 + 12) = 0;
				*(_DWORD *)(v653 + 16) = 0;
				*(_DWORD *)(v653 + 20) = 0;
				v657 = *v674;
				*(_DWORD *)(v653 + 24) = *v674;
				*(_BYTE *)(v653 + 32) = 0;
				*(_DWORD *)(v653 + 28) = 0;
				*(_BYTE *)(v653 + 40) = 0;
				*(_DWORD *)(v653 + 36) = 0;
				*(_DWORD *)(v653 + 44) = 0;
				*(_DWORD *)(v653 + 48) = 0;
				*(_DWORD *)(v653 + 52) = -1;
				*(_DWORD *)(v653 + 76) = 1065353216;
				*(_DWORD *)(v653 + 64) = 0;
				*(_DWORD *)(v653 + 68) = 0;
				*(_DWORD *)(v653 + 72) = 0;
				*(_DWORD *)(v653 + 92) = 1065353216;
				*(_DWORD *)(v653 + 88) = 0;
				*(_DWORD *)(v653 + 80) = 0;
				*(_DWORD *)(v653 + 84) = 0;
				*(_DWORD *)(v653 + 100) = 0;
				*(_DWORD *)(v653 + 96) = 0;
				*(_DWORD *)v653 = v654;
				*(_DWORD *)v653 = v655;
				v658 = *v656;
				v811 = -256;
				v659 = GameCall<int>(0x9E9198, 0xd6ff70)(v658, 64, (int)&v811, 0, 0, v653 + 28, v657, v653 + 64);
				*(_DWORD *)(v653 + 8) = v659;
				*(_DWORD *)v659 = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 4) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 8) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 12) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 16) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 20) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 24) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 28) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 32) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 36) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 40) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 44) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 48) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 52) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 56) = 0;
				*(_DWORD *)(*(_DWORD *)(v653 + 8) + 60) = 0;
				*(_DWORD *)(v653 + 12) = 16;
				v812 = -256;
				v530 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v812);
				v531 = v653;
			}
			else
			{
				if ((v513 ^ 0x10000) != 4525)
					goto LABEL_358;
				v818 = -256;
				v600 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v818, (char *)0x111B4 + 3);
				v601 = *(int *)0xD71EA0;
				v524 = v600;
				v602 = *(int *)0xD71E50;
				v603 = (int *)*(int *)0xD71E60;
				*(_DWORD *)v600 = *(int *)0xD71F10;
				*(_DWORD *)(v600 + 4) = 0;
				*(_DWORD *)(v600 + 8) = 0;
				*(_DWORD *)(v600 + 12) = 0;
				*(_DWORD *)(v600 + 16) = 0;
				*(_DWORD *)(v600 + 20) = 0;
				v604 = *v674;
				*(_DWORD *)(v600 + 24) = *v674;
				*(_BYTE *)(v600 + 32) = 0;
				*(_DWORD *)(v600 + 28) = 0;
				*(_BYTE *)(v600 + 40) = 0;
				*(_DWORD *)(v600 + 36) = 0;
				*(_DWORD *)(v600 + 44) = 0;
				*(_DWORD *)(v600 + 48) = 0;
				*(_DWORD *)(v600 + 52) = -1;
				*(_DWORD *)(v600 + 76) = 1065353216;
				*(_DWORD *)(v600 + 64) = 0;
				*(_DWORD *)(v600 + 68) = 0;
				*(_DWORD *)(v600 + 72) = 0;
				*(_DWORD *)(v600 + 92) = 1065353216;
				*(_DWORD *)(v600 + 88) = 0;
				*(_DWORD *)(v600 + 80) = 0;
				*(_DWORD *)(v600 + 84) = 0;
				*(_DWORD *)(v600 + 100) = 0;
				*(_DWORD *)(v600 + 96) = 0;
				*(_DWORD *)v600 = v602;
				*(_DWORD *)v600 = v601;
				v605 = *v603;
				v809 = -256;
				v606 = GameCall<int>(0x9E9198, 0xd6ff70)(v605, 64, (int)&v809, 0, 0, v600 + 28, v604, v600 + 64);
				*(_DWORD *)(v600 + 8) = v606;
				*(_DWORD *)v606 = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 4) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 8) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 12) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 16) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 20) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 24) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 28) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 32) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 36) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 40) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 44) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 48) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 52) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 56) = 0;
				*(_DWORD *)(*(_DWORD *)(v600 + 8) + 60) = 0;
				*(_DWORD *)(v600 + 12) = 16;
				v810 = -256;
				v530 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v810);
				v531 = v600;
			}
		}
		else
		{
			if (v513 == (0x111D4 + 1))
				goto LABEL_332;
			if (v513 <= (int)0x111D4 + 1)
			{
				if ((v513 ^ 0x10000) == 4555)
				{
					v816 = -256;
					v626 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v816, (char *)0x111B4 + 3);
					v627 = (int *)*(int *)0xD71E60;
					v524 = v626;
					v628 = *(int *)0xD71EA8;
					*(_DWORD *)v626 = *(int *)0xD71F10;
					*(_DWORD *)(v626 + 4) = 0;
					*(_DWORD *)(v626 + 8) = 0;
					*(_DWORD *)(v626 + 12) = 0;
					*(_DWORD *)(v626 + 16) = 0;
					*(_DWORD *)(v626 + 20) = 0;
					v629 = *(int *)0xD71E50;
					*(_DWORD *)(v626 + 24) = *v674;
					*(_BYTE *)(v626 + 32) = 0;
					*(_DWORD *)(v626 + 28) = 0;
					*(_BYTE *)(v626 + 40) = 0;
					*(_DWORD *)(v626 + 36) = 0;
					*(_DWORD *)(v626 + 44) = 0;
					*(_DWORD *)(v626 + 48) = 0;
					*(_DWORD *)(v626 + 52) = -1;
					*(_DWORD *)(v626 + 64) = 0;
					*(_DWORD *)(v626 + 68) = 0;
					*(_DWORD *)(v626 + 72) = 0;
					*(_DWORD *)(v626 + 76) = 1065353216;
					*(_DWORD *)(v626 + 88) = 0;
					*(_DWORD *)(v626 + 92) = 1065353216;
					*(_DWORD *)(v626 + 80) = 0;
					*(_DWORD *)(v626 + 84) = 0;
					*(_DWORD *)(v626 + 100) = 0;
					*(_DWORD *)(v626 + 96) = 0;
					*(_DWORD *)v626 = v629;
					*(_DWORD *)v626 = v628;
					v630 = *v627;
					v849 = -256;
					v631 = GameCall<int>(0x9E9198, 0xd6ff70)(v630, 64, (int)&v849, 0, 0, v626 + 28, (int)v627, v626 + 64);
					*(_DWORD *)(v626 + 8) = v631;
					*(_DWORD *)v631 = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 4) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 8) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 12) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 16) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 20) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 24) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 28) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 32) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 36) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 40) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 44) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 48) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 52) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 56) = 0;
					*(_DWORD *)(*(_DWORD *)(v626 + 8) + 60) = 0;
					*(_DWORD *)(v626 + 12) = 16;
					v830 = -256;
					v530 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v830);
					v531 = v626;
				}
				else
				{
					if ((v513 ^ 0x10000) != 4556)
						goto LABEL_358;
					v821 = -256;
					v660 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v821, (char *)0x111B4 + 3);
					v661 = *(int *)0xD71E50;
					v524 = v660;
					v662 = *(int *)0xD71EBC;
					v663 = (int *)*(int *)0xD71E60;
					*(_DWORD *)v660 = *(int *)0xD71F10;
					*(_DWORD *)(v660 + 4) = 0;
					*(_DWORD *)(v660 + 8) = 0;
					*(_DWORD *)(v660 + 12) = 0;
					*(_DWORD *)(v660 + 16) = 0;
					*(_DWORD *)(v660 + 20) = 0;
					v664 = *v674;
					*(_DWORD *)(v660 + 24) = *v674;
					*(_BYTE *)(v660 + 32) = 0;
					*(_DWORD *)(v660 + 28) = 0;
					*(_BYTE *)(v660 + 40) = 0;
					*(_DWORD *)(v660 + 36) = 0;
					*(_DWORD *)(v660 + 44) = 0;
					*(_DWORD *)(v660 + 48) = 0;
					*(_DWORD *)(v660 + 52) = -1;
					*(_DWORD *)(v660 + 76) = 1065353216;
					*(_DWORD *)(v660 + 64) = 0;
					*(_DWORD *)(v660 + 68) = 0;
					*(_DWORD *)(v660 + 72) = 0;
					*(_DWORD *)(v660 + 92) = 1065353216;
					*(_DWORD *)(v660 + 88) = 0;
					*(_DWORD *)(v660 + 80) = 0;
					*(_DWORD *)(v660 + 84) = 0;
					*(_DWORD *)(v660 + 100) = 0;
					*(_DWORD *)(v660 + 96) = 0;
					*(_DWORD *)v660 = v661;
					*(_DWORD *)v660 = v662;
					v665 = *v663;
					v847 = -256;
					v666 = GameCall<int>(0x9E9198, 0xd6ff70)(v665, 64, (int)&v847, 0, 0, v660 + 28, v664, v660 + 64);
					*(_DWORD *)(v660 + 8) = v666;
					*(_DWORD *)v666 = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 4) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 8) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 12) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 16) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 20) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 24) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 28) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 32) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 36) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 40) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 44) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 48) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 52) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 56) = 0;
					*(_DWORD *)(*(_DWORD *)(v660 + 8) + 60) = 0;
					*(_DWORD *)(v660 + 12) = 16;
					v848 = -256;
					v530 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v848);
					v531 = v660;
				}
			}
			else if ((v513 ^ 0x10000) == 4595)
			{
				v822 = -256;
				v632 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v822, (char *)0x111B4 + 3);
				v633 = *(int *)0xD71EC0;
				v524 = v632;
				v634 = *(int *)0xD71E50;
				v635 = (int *)*(int *)0xD71E60;
				*(_DWORD *)v632 = *(int *)0xD71F10;
				*(_DWORD *)(v632 + 4) = 0;
				*(_DWORD *)(v632 + 8) = 0;
				*(_DWORD *)(v632 + 12) = 0;
				*(_DWORD *)(v632 + 16) = 0;
				*(_DWORD *)(v632 + 20) = 0;
				v636 = *v674;
				*(_DWORD *)(v632 + 24) = *v674;
				*(_BYTE *)(v632 + 32) = 0;
				*(_DWORD *)(v632 + 28) = 0;
				*(_BYTE *)(v632 + 40) = 0;
				*(_DWORD *)(v632 + 36) = 0;
				*(_DWORD *)(v632 + 44) = 0;
				*(_DWORD *)(v632 + 48) = 0;
				*(_DWORD *)(v632 + 52) = -1;
				*(_DWORD *)(v632 + 76) = 1065353216;
				*(_DWORD *)(v632 + 64) = 0;
				*(_DWORD *)(v632 + 68) = 0;
				*(_DWORD *)(v632 + 72) = 0;
				*(_DWORD *)(v632 + 80) = 0;
				*(_DWORD *)(v632 + 88) = 0;
				*(_DWORD *)(v632 + 84) = 0;
				*(_DWORD *)(v632 + 92) = 1065353216;
				*(_DWORD *)(v632 + 100) = 0;
				*(_DWORD *)(v632 + 96) = 0;
				*(_DWORD *)v632 = v634;
				*(_DWORD *)v632 = v633;
				v637 = *v635;
				v845 = -256;
				v638 = GameCall<int>(0x9E9198, 0xd6ff70)(v637, 64, (int)&v845, 0, 0, v632 + 28, v636, v632 + 64);
				*(_DWORD *)(v632 + 8) = v638;
				*(_DWORD *)v638 = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 4) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 8) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 12) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 16) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 20) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 24) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 28) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 32) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 36) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 40) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 44) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 48) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 52) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 56) = 0;
				*(_DWORD *)(*(_DWORD *)(v632 + 8) + 60) = 0;
				*(_DWORD *)(v632 + 12) = 16;
				v846 = -256;
				v530 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v846);
				v531 = v632;
			}
			else
			{
				if ((v513 ^ 0x10000) != 4635)
					goto LABEL_358;
				v827 = -256;
				v522 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v827, (char *)0x111B4 + 3);
				v523 = *(int *)0xD71E50;
				v524 = v522;
				v525 = *(int *)0xD71EC4;
				v526 = (int *)*(int *)0xD71E60;
				*(_DWORD *)v522 = *(int *)0xD71F10;
				*(_DWORD *)(v522 + 4) = 0;
				*(_DWORD *)(v522 + 8) = 0;
				*(_DWORD *)(v522 + 12) = 0;
				*(_DWORD *)(v522 + 16) = 0;
				*(_DWORD *)(v522 + 20) = 0;
				v527 = *v674;
				*(_DWORD *)(v522 + 24) = *v674;
				*(_BYTE *)(v522 + 32) = 0;
				*(_DWORD *)(v522 + 28) = 0;
				*(_BYTE *)(v522 + 40) = 0;
				*(_DWORD *)(v522 + 36) = 0;
				*(_DWORD *)(v522 + 44) = 0;
				*(_DWORD *)(v522 + 48) = 0;
				*(_DWORD *)(v522 + 52) = -1;
				*(_DWORD *)(v522 + 76) = 1065353216;
				*(_DWORD *)(v522 + 64) = 0;
				*(_DWORD *)(v522 + 68) = 0;
				*(_DWORD *)(v522 + 72) = 0;
				*(_DWORD *)(v522 + 92) = 1065353216;
				*(_DWORD *)(v522 + 88) = 0;
				*(_DWORD *)(v522 + 80) = 0;
				*(_DWORD *)(v522 + 84) = 0;
				*(_DWORD *)(v522 + 100) = 0;
				*(_DWORD *)(v522 + 96) = 0;
				*(_DWORD *)v522 = v523;
				*(_DWORD *)v522 = v525;
				v528 = *v526;
				v851 = -256;
				v529 = GameCall<int>(0x9E9198, 0xd6ff70)(v528, 64, (int)&v851, 0, 0, v522 + 28, v527, v522 + 64);
				*(_DWORD *)(v522 + 8) = v529;
				*(_DWORD *)v529 = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 4) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 8) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 12) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 16) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 20) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 24) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 28) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 32) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 36) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 40) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 44) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 48) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 52) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 56) = 0;
				*(_DWORD *)(*(_DWORD *)(v522 + 8) + 60) = 0;
				*(_DWORD *)(v522 + 12) = 16;
				v850 = -256;
				v530 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v850);
				v531 = v522;
			}
		}
	LABEL_340:
		*(_DWORD *)v530 = 0;
		*(_DWORD *)(v530 + 4) = 0;
		*(_DWORD *)(v530 + 8) = 0;
		*(_DWORD *)(v530 + 12) = 0;
		*(_DWORD *)(v530 + 20) = 0;
		*(_DWORD *)(v530 + 16) = 0;
		*(_DWORD *)(v530 + 32) = 0;
		*(_DWORD *)(v530 + 24) = 0;
		*(_DWORD *)(v530 + 28) = 0;
		*(_DWORD *)(v530 + 44) = 0;
		*(_DWORD *)(v530 + 36) = 0;
		*(_DWORD *)(v530 + 40) = 0;
		*(_DWORD *)(v530 + 56) = 0;
		*(_DWORD *)(v530 + 48) = 0;
		*(_DWORD *)(v530 + 52) = 0;
		*(_DWORD *)(v530 + 68) = 0;
		*(_DWORD *)(v530 + 60) = 0;
		*(_DWORD *)(v530 + 64) = 0;
		*(_DWORD *)(v530 + 80) = 0;
		*(_DWORD *)(v530 + 72) = 0;
		*(_DWORD *)(v530 + 76) = 0;
		*(_DWORD *)(v530 + 92) = 0;
		*(_DWORD *)(v530 + 84) = 0;
		*(_DWORD *)(v530 + 104) = 0;
		*(_DWORD *)(v530 + 88) = 0;
		*(_DWORD *)(v530 + 96) = 0;
		*(_DWORD *)(v530 + 100) = 0;
		*(_DWORD *)(v530 + 116) = 0;
		*(_DWORD *)(v530 + 108) = 0;
		*(_DWORD *)(v530 + 112) = 0;
		*(_DWORD *)(v530 + 128) = 0;
		*(_DWORD *)(v530 + 120) = 0;
		*(_DWORD *)(v530 + 124) = 0;
		*(_DWORD *)(v530 + 132) = 0;
		*(_DWORD *)(v530 + 140) = 0;
		*(_DWORD *)(v530 + 136) = 0;
		*(_DWORD *)(v530 + 152) = 0;
		*(_DWORD *)(v530 + 144) = 0;
		*(_DWORD *)(v530 + 148) = 0;
		*(_DWORD *)(v530 + 164) = 0;
		*(_DWORD *)(v530 + 156) = 0;
		*(_DWORD *)(v530 + 160) = 0;
		*(_DWORD *)(v530 + 176) = 0;
		*(_DWORD *)(v530 + 168) = 0;
		*(_DWORD *)(v530 + 172) = 0;
		*(_DWORD *)(v530 + 188) = 0;
		*(_DWORD *)(v530 + 180) = 0;
		*(_DWORD *)(v530 + 184) = 0;
		*(_DWORD *)(v524 + 16) = v530;
		return ((int(__fastcall *)(int))v673)(v531);
	}
	if (v513 == (0x112C4 + 1))
	{
		v806 = -256;
		v514 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v806, v868);
		v554 = *(int *)0xD71E50;
		v516 = v514;
		v555 = *(int *)0xD7214C;
		v556 = (int *)*(int *)0xD71E60;
		*(_DWORD *)v514 = *(int *)0xD71F10;
		*(_DWORD *)(v514 + 4) = 0;
		*(_DWORD *)(v514 + 8) = 0;
		*(_DWORD *)(v514 + 12) = 0;
		*(_DWORD *)(v514 + 16) = 0;
		*(_DWORD *)(v514 + 20) = 0;
		v557 = *v674;
		*(_DWORD *)(v514 + 24) = *v674;
		*(_BYTE *)(v514 + 32) = 0;
		*(_DWORD *)(v514 + 28) = 0;
		*(_BYTE *)(v514 + 40) = 0;
		*(_DWORD *)(v514 + 36) = 0;
		*(_DWORD *)(v514 + 44) = 0;
		*(_DWORD *)(v514 + 48) = 0;
		*(_DWORD *)(v514 + 52) = -1;
		*(_DWORD *)(v514 + 76) = 1065353216;
		*(_DWORD *)(v514 + 64) = 0;
		*(_DWORD *)(v514 + 68) = 0;
		*(_DWORD *)(v514 + 72) = 0;
		*(_DWORD *)(v514 + 92) = 1065353216;
		*(_DWORD *)(v514 + 88) = 0;
		*(_DWORD *)(v514 + 80) = 0;
		*(_DWORD *)(v514 + 84) = 0;
		*(_DWORD *)(v514 + 100) = 0;
		*(_DWORD *)(v514 + 96) = 0;
		*(_DWORD *)v514 = v554;
		*(_DWORD *)v514 = v555;
		v558 = *v556;
		v837 = -256;
		v559 = GameCall<int>(0x9E9198, 0xd6ff70)(v558, 64, (int)&v837, 0, 0, v514 + 80, v557, v514 + 64);
		*(_DWORD *)(v514 + 8) = v559;
		v521 = &v836;
		*(_DWORD *)v559 = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 4) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 8) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 12) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 16) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 20) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 24) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 28) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 32) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 36) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 40) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 44) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 48) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 52) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 56) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 60) = 0;
		*(_DWORD *)(v514 + 12) = 16;
		v836 = -256;
		goto LABEL_342;
	}
	if (v513 <= (int)0x112C4 + 1)
	{
		if (v513 == (0x112B0 + 1))
		{
			v826 = -256;
			v514 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v826, v868);
			v613 = *(int *)0xD71E50;
			v516 = v514;
			v614 = *(int *)0xD71E54;
			v615 = (int *)*(int *)0xD71E60;
			*(_DWORD *)v514 = *(int *)0xD71F10;
			*(_DWORD *)(v514 + 4) = 0;
			*(_DWORD *)(v514 + 8) = 0;
			*(_DWORD *)(v514 + 12) = 0;
			*(_DWORD *)(v514 + 16) = 0;
			*(_DWORD *)(v514 + 20) = 0;
			v616 = *v674;
			*(_DWORD *)(v514 + 24) = *v674;
			*(_BYTE *)(v514 + 32) = 0;
			*(_DWORD *)(v514 + 28) = 0;
			*(_BYTE *)(v514 + 40) = 0;
			*(_DWORD *)(v514 + 36) = 0;
			*(_DWORD *)(v514 + 44) = 0;
			*(_DWORD *)(v514 + 48) = 0;
			*(_DWORD *)(v514 + 52) = -1;
			*(_DWORD *)(v514 + 76) = 1065353216;
			*(_DWORD *)(v514 + 64) = 0;
			*(_DWORD *)(v514 + 68) = 0;
			*(_DWORD *)(v514 + 72) = 0;
			*(_DWORD *)(v514 + 92) = 1065353216;
			*(_DWORD *)(v514 + 88) = 0;
			*(_DWORD *)(v514 + 80) = 0;
			*(_DWORD *)(v514 + 84) = 0;
			*(_DWORD *)(v514 + 100) = 0;
			*(_DWORD *)(v514 + 96) = 0;
			*(_DWORD *)v514 = v613;
			*(_DWORD *)v514 = v614;
			v617 = *v615;
			v855 = -256;
			v618 = GameCall<int>(0x9E9198, 0xd6ff70)(v617, 64, (int)&v855, 0, 0, v514 + 80, v616, v514 + 64);
			*(_DWORD *)(v514 + 8) = v618;
			v521 = &v856;
			*(_DWORD *)v618 = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 4) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 8) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 12) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 16) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 20) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 24) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 28) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 32) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 36) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 40) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 44) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 48) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 52) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 56) = 0;
			*(_DWORD *)(*(_DWORD *)(v514 + 8) + 60) = 0;
			*(_DWORD *)(v514 + 12) = 16;
			v856 = -256;
			goto LABEL_342;
		}
		if (v513 > (int)0x112B0 + 1)
		{
			if ((v513 ^ 0x10000) == 4795)
			{
				v825 = -256;
				v646 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v825, v868);
				v647 = *(int *)0xD71E50;
				v524 = v646;
				v648 = *(int *)0xD71EB4;
				v649 = (int *)*(int *)0xD71E60;
				*(_DWORD *)v646 = *(int *)0xD71F10;
				*(_DWORD *)(v646 + 4) = 0;
				*(_DWORD *)(v646 + 8) = 0;
				*(_DWORD *)(v646 + 12) = 0;
				*(_DWORD *)(v646 + 16) = 0;
				*(_DWORD *)(v646 + 20) = 0;
				v650 = *v674;
				*(_DWORD *)(v646 + 24) = *v674;
				*(_BYTE *)(v646 + 32) = 0;
				*(_DWORD *)(v646 + 28) = 0;
				*(_BYTE *)(v646 + 40) = 0;
				*(_DWORD *)(v646 + 36) = 0;
				*(_DWORD *)(v646 + 44) = 0;
				*(_DWORD *)(v646 + 48) = 0;
				*(_DWORD *)(v646 + 52) = -1;
				*(_DWORD *)(v646 + 76) = 1065353216;
				*(_DWORD *)(v646 + 64) = 0;
				*(_DWORD *)(v646 + 68) = 0;
				*(_DWORD *)(v646 + 72) = 0;
				*(_DWORD *)(v646 + 92) = 1065353216;
				*(_DWORD *)(v646 + 88) = 0;
				*(_DWORD *)(v646 + 80) = 0;
				*(_DWORD *)(v646 + 84) = 0;
				*(_DWORD *)(v646 + 100) = 0;
				*(_DWORD *)(v646 + 96) = 0;
				*(_DWORD *)v646 = v647;
				*(_DWORD *)v646 = v648;
				v651 = *v649;
				v853 = -256;
				v652 = GameCall<int>(0x9E9198, 0xd6ff70)(v651, 64, (int)&v853, 0, 0, v646 + 28, v650, v646 + 64);
				*(_DWORD *)(v646 + 8) = v652;
				*(_DWORD *)v652 = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 4) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 8) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 12) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 16) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 20) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 24) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 28) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 32) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 36) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 40) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 44) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 48) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 52) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 56) = 0;
				*(_DWORD *)(*(_DWORD *)(v646 + 8) + 60) = 0;
				*(_DWORD *)(v646 + 12) = 16;
				v854 = -256;
				v530 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v854);
				v531 = v646;
			}
			else
			{
				if ((v513 ^ 0x10000) != 4796)
					goto LABEL_358;
				v824 = -256;
				v539 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v824, v868);
				v540 = *(int *)0xD71E50;
				v524 = v539;
				v541 = *(int *)0xD71EB8;
				v542 = (int *)*(int *)0xD71E60;
				*(_DWORD *)v539 = *(int *)0xD71F10;
				*(_DWORD *)(v539 + 4) = 0;
				*(_DWORD *)(v539 + 8) = 0;
				*(_DWORD *)(v539 + 12) = 0;
				*(_DWORD *)(v539 + 16) = 0;
				*(_DWORD *)(v539 + 20) = 0;
				v543 = *v674;
				*(_DWORD *)(v539 + 24) = *v674;
				*(_BYTE *)(v539 + 32) = 0;
				*(_DWORD *)(v539 + 28) = 0;
				*(_BYTE *)(v539 + 40) = 0;
				*(_DWORD *)(v539 + 36) = 0;
				*(_DWORD *)(v539 + 44) = 0;
				*(_DWORD *)(v539 + 48) = 0;
				*(_DWORD *)(v539 + 52) = -1;
				*(_DWORD *)(v539 + 76) = 1065353216;
				*(_DWORD *)(v539 + 64) = 0;
				*(_DWORD *)(v539 + 68) = 0;
				*(_DWORD *)(v539 + 72) = 0;
				*(_DWORD *)(v539 + 92) = 1065353216;
				*(_DWORD *)(v539 + 88) = 0;
				*(_DWORD *)(v539 + 80) = 0;
				*(_DWORD *)(v539 + 84) = 0;
				*(_DWORD *)(v539 + 100) = 0;
				*(_DWORD *)(v539 + 96) = 0;
				*(_DWORD *)v539 = v540;
				*(_DWORD *)v539 = v541;
				v544 = *v542;
				v844 = -256;
				v545 = GameCall<int>(0x9E9198, 0xd6ff70)(v544, 64, (int)&v844, 0, 0, v539 + 28, v543, v539 + 64);
				*(_DWORD *)(v539 + 8) = v545;
				*(_DWORD *)v545 = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 4) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 8) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 12) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 16) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 20) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 24) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 28) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 32) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 36) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 40) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 44) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 48) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 52) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 56) = 0;
				*(_DWORD *)(*(_DWORD *)(v539 + 8) + 60) = 0;
				*(_DWORD *)(v539 + 12) = 16;
				v852 = -256;
				v530 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v852);
				v531 = v539;
			}
			goto LABEL_340;
		}
		if ((v513 ^ 0x10000) == 4715)
		{
			v814 = -256;
			v619 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v814, v868);
			v620 = *(int *)0xD71E50;
			v524 = v619;
			v621 = *(int *)0xD72148;
			v622 = (int *)*(int *)0xD71E60;
			*(_DWORD *)v619 = *(int *)0xD71F10;
			*(_DWORD *)(v619 + 4) = 0;
			*(_DWORD *)(v619 + 8) = 0;
			*(_DWORD *)(v619 + 12) = 0;
			*(_DWORD *)(v619 + 16) = 0;
			*(_DWORD *)(v619 + 20) = 0;
			v623 = *v674;
			*(_DWORD *)(v619 + 24) = *v674;
			*(_BYTE *)(v619 + 32) = 0;
			*(_DWORD *)(v619 + 28) = 0;
			*(_BYTE *)(v619 + 40) = 0;
			*(_DWORD *)(v619 + 36) = 0;
			*(_DWORD *)(v619 + 44) = 0;
			*(_DWORD *)(v619 + 48) = 0;
			*(_DWORD *)(v619 + 52) = -1;
			*(_DWORD *)(v619 + 76) = 1065353216;
			*(_DWORD *)(v619 + 64) = 0;
			*(_DWORD *)(v619 + 68) = 0;
			*(_DWORD *)(v619 + 72) = 0;
			*(_DWORD *)(v619 + 92) = 1065353216;
			*(_DWORD *)(v619 + 88) = 0;
			*(_DWORD *)(v619 + 80) = 0;
			*(_DWORD *)(v619 + 84) = 0;
			*(_DWORD *)(v619 + 100) = 0;
			*(_DWORD *)(v619 + 96) = 0;
			*(_DWORD *)v619 = v620;
			*(_DWORD *)v619 = v621;
			v624 = *v622;
			v831 = -256;
			v625 = GameCall<int>(0x9E9198, 0xd6ff70)(v624, 64, (int)&v831, 0, 0, v619 + 28, v623, v619 + 64);
			*(_DWORD *)(v619 + 8) = v625;
			*(_DWORD *)v625 = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 4) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 8) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 12) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 16) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 20) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 24) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 28) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 32) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 36) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 40) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 44) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 48) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 52) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 56) = 0;
			*(_DWORD *)(*(_DWORD *)(v619 + 8) + 60) = 0;
			*(_DWORD *)(v619 + 12) = 16;
			v832 = -256;
			v530 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v832);
			v531 = v619;
			goto LABEL_340;
		}
		v675 = (char *)(v513 ^ 0x10000);
		if ((v513 ^ 0x10000) != 4765)
			goto LABEL_358;
	LABEL_332:
		v857 = -256;
		v514 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v857, v675);
		v515 = *(int *)0xD71E50;
		v516 = v514;
		v517 = *(int *)0xD72140;
		v518 = (int *)*(int *)0xD71E60;
		*(_DWORD *)v514 = *(int *)0xD71F10;
		*(_DWORD *)(v514 + 4) = 0;
		*(_DWORD *)(v514 + 8) = 0;
		*(_DWORD *)(v514 + 12) = 0;
		*(_DWORD *)(v514 + 16) = 0;
		*(_DWORD *)(v514 + 20) = 0;
		*(_DWORD *)(v514 + 24) = *v674;
		*(_BYTE *)(v514 + 32) = 0;
		*(_DWORD *)(v514 + 28) = 0;
		*(_BYTE *)(v514 + 40) = 0;
		*(_DWORD *)(v514 + 36) = 0;
		*(_DWORD *)(v514 + 44) = 0;
		*(_DWORD *)(v514 + 48) = 0;
		*(_DWORD *)(v514 + 52) = -1;
		*(_DWORD *)(v514 + 76) = 1065353216;
		*(_DWORD *)(v514 + 64) = 0;
		*(_DWORD *)(v514 + 68) = 0;
		*(_DWORD *)(v514 + 72) = 0;
		*(_DWORD *)(v514 + 92) = 1065353216;
		*(_DWORD *)(v514 + 88) = 0;
		*(_DWORD *)(v514 + 80) = 0;
		*(_DWORD *)(v514 + 84) = 0;
		*(_DWORD *)(v514 + 100) = 0;
		*(_DWORD *)(v514 + 96) = 0;
		*(_DWORD *)v514 = v515;
		*(_DWORD *)v514 = v517;
		v519 = *v518;
		v807 = -256;
		v520 = GameCall<int>(0x9E9198, 0xd6ff70)(v519, 64, (int)&v807, 0, 0, v514 + 80, v514 + 36, v514 + 64);
		*(_DWORD *)(v514 + 8) = v520;
		v521 = &v802;
		*(_DWORD *)v520 = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 4) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 8) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 12) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 16) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 20) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 24) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 28) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 32) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 36) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 40) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 44) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 48) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 52) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 56) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 60) = 0;
		*(_DWORD *)(v514 + 12) = 16;
		v802 = -256;
	LABEL_342:
		v538 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, v521);
		*(_DWORD *)v538 = 0;
		*(_DWORD *)(v538 + 4) = 0;
		*(_DWORD *)(v538 + 8) = 0;
		*(_DWORD *)(v538 + 12) = 0;
		*(_DWORD *)(v538 + 20) = 0;
		*(_DWORD *)(v538 + 16) = 0;
		*(_DWORD *)(v538 + 32) = 0;
		*(_DWORD *)(v538 + 24) = 0;
		*(_DWORD *)(v538 + 28) = 0;
		*(_DWORD *)(v538 + 44) = 0;
		*(_DWORD *)(v538 + 36) = 0;
		*(_DWORD *)(v538 + 40) = 0;
		*(_DWORD *)(v538 + 56) = 0;
		*(_DWORD *)(v538 + 48) = 0;
		*(_DWORD *)(v538 + 52) = 0;
		*(_DWORD *)(v538 + 68) = 0;
		*(_DWORD *)(v538 + 60) = 0;
		*(_DWORD *)(v538 + 64) = 0;
		*(_DWORD *)(v538 + 80) = 0;
		*(_DWORD *)(v538 + 72) = 0;
		*(_DWORD *)(v538 + 76) = 0;
		*(_DWORD *)(v538 + 92) = 0;
		*(_DWORD *)(v538 + 84) = 0;
		*(_DWORD *)(v538 + 104) = 0;
		*(_DWORD *)(v538 + 88) = 0;
		*(_DWORD *)(v538 + 96) = 0;
		*(_DWORD *)(v538 + 100) = 0;
		*(_DWORD *)(v538 + 116) = 0;
		*(_DWORD *)(v538 + 108) = 0;
		*(_DWORD *)(v538 + 112) = 0;
		*(_DWORD *)(v538 + 128) = 0;
		*(_DWORD *)(v538 + 120) = 0;
		*(_DWORD *)(v538 + 124) = 0;
		*(_DWORD *)(v538 + 132) = 0;
		*(_DWORD *)(v538 + 140) = 0;
		*(_DWORD *)(v538 + 136) = 0;
		*(_DWORD *)(v538 + 152) = 0;
		*(_DWORD *)(v538 + 144) = 0;
		*(_DWORD *)(v538 + 148) = 0;
		*(_DWORD *)(v538 + 164) = 0;
		*(_DWORD *)(v538 + 156) = 0;
		*(_DWORD *)(v538 + 160) = 0;
		*(_DWORD *)(v538 + 176) = 0;
		*(_DWORD *)(v538 + 168) = 0;
		*(_DWORD *)(v538 + 172) = 0;
		*(_DWORD *)(v538 + 188) = 0;
		*(_DWORD *)(v538 + 180) = 0;
		*(_DWORD *)(v538 + 184) = 0;
		*(_DWORD *)(v516 + 16) = v538;
		return ((int(__fastcall *)(int))v673)(v514);
	}
	if (v513 == (0x1133C + 1))
	{
		v823 = -256;
		v514 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v823, v868);
		v607 = *(int *)0xD71E50;
		v516 = v514;
		v608 = *(int *)0xD71EB0;
		v609 = (int *)*(int *)0xD71E60;
		*(_DWORD *)v514 = *(int *)0xD71F10;
		*(_DWORD *)(v514 + 4) = 0;
		*(_DWORD *)(v514 + 8) = 0;
		*(_DWORD *)(v514 + 12) = 0;
		*(_DWORD *)(v514 + 16) = 0;
		*(_DWORD *)(v514 + 20) = 0;
		v610 = *v674;
		*(_DWORD *)(v514 + 24) = *v674;
		*(_BYTE *)(v514 + 32) = 0;
		*(_DWORD *)(v514 + 28) = 0;
		*(_BYTE *)(v514 + 40) = 0;
		*(_DWORD *)(v514 + 36) = 0;
		*(_DWORD *)(v514 + 44) = 0;
		*(_DWORD *)(v514 + 48) = 0;
		*(_DWORD *)(v514 + 52) = -1;
		*(_DWORD *)(v514 + 76) = 1065353216;
		*(_DWORD *)(v514 + 64) = 0;
		*(_DWORD *)(v514 + 68) = 0;
		*(_DWORD *)(v514 + 72) = 0;
		*(_DWORD *)(v514 + 92) = 1065353216;
		*(_DWORD *)(v514 + 88) = 0;
		*(_DWORD *)(v514 + 80) = 0;
		*(_DWORD *)(v514 + 84) = 0;
		*(_DWORD *)(v514 + 100) = 0;
		*(_DWORD *)(v514 + 96) = 0;
		*(_DWORD *)v514 = v607;
		*(_DWORD *)v514 = v608;
		v611 = *v609;
		v835 = -256;
		v612 = GameCall<int>(0x9E9198, 0xd6ff70)(v611, 64, (int)&v835, 0, 0, v514 + 80, v610, v514 + 64);
		*(_DWORD *)(v514 + 8) = v612;
		v521 = &v843;
		*(_DWORD *)v612 = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 4) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 8) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 12) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 16) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 20) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 24) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 28) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 32) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 36) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 40) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 44) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 48) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 52) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 56) = 0;
		*(_DWORD *)(*(_DWORD *)(v514 + 8) + 60) = 0;
		*(_DWORD *)(v514 + 12) = 16;
		v843 = -256;
		goto LABEL_342;
	}
	if (v513 <= (int)0x1133C + 1)
	{
		if ((v513 ^ 0x10000) == 4845)
		{
			v805 = -256;
			v639 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v805, v868);
			v640 = *(int *)0xD71E50;
			v524 = v639;
			v641 = *(int *)0xD72150;
			v642 = (int *)*(int *)0xD71E60;
			*(_DWORD *)v639 = *(int *)0xD71F10;
			*(_DWORD *)(v639 + 4) = 0;
			*(_DWORD *)(v639 + 8) = 0;
			*(_DWORD *)(v639 + 12) = 0;
			*(_DWORD *)(v639 + 16) = 0;
			*(_DWORD *)(v639 + 20) = 0;
			v643 = *v674;
			*(_DWORD *)(v639 + 24) = *v674;
			*(_BYTE *)(v639 + 32) = 0;
			*(_DWORD *)(v639 + 28) = 0;
			*(_BYTE *)(v639 + 40) = 0;
			*(_DWORD *)(v639 + 36) = 0;
			*(_DWORD *)(v639 + 44) = 0;
			*(_DWORD *)(v639 + 48) = 0;
			*(_DWORD *)(v639 + 52) = -1;
			*(_DWORD *)(v639 + 76) = 1065353216;
			*(_DWORD *)(v639 + 64) = 0;
			*(_DWORD *)(v639 + 68) = 0;
			*(_DWORD *)(v639 + 72) = 0;
			*(_DWORD *)(v639 + 92) = 1065353216;
			*(_DWORD *)(v639 + 88) = 0;
			*(_DWORD *)(v639 + 80) = 0;
			*(_DWORD *)(v639 + 84) = 0;
			*(_DWORD *)(v639 + 100) = 0;
			*(_DWORD *)(v639 + 96) = 0;
			*(_DWORD *)v639 = v640;
			*(_DWORD *)v639 = v641;
			v644 = *v642;
			v841 = -256;
			v645 = GameCall<int>(0x9E9198, 0xd6ff70)(v644, 64, (int)&v841, 0, 0, v639 + 28, v643, v639 + 64);
			*(_DWORD *)(v639 + 8) = v645;
			*(_DWORD *)v645 = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 4) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 8) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 12) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 16) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 20) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 24) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 28) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 32) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 36) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 40) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 44) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 48) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 52) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 56) = 0;
			*(_DWORD *)(*(_DWORD *)(v639 + 8) + 60) = 0;
			*(_DWORD *)(v639 + 12) = 16;
			v842 = -256;
			v530 = GameCall<int>(0x9E8EE8, 0xd6ff70)(192, &v842);
			v531 = v639;
			goto LABEL_340;
		}
		if ((v513 ^ 0x10000) != 4855)
			goto LABEL_358;
		v804 = -256;
		v546 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v804, v868);
		v594 = *(int *)0xD71E50;
		v524 = v546;
		v595 = *(int *)0xD72154;
		v596 = (int *)*(int *)0xD71E60;
		*(_DWORD *)v546 = *(int *)0xD71F10;
		*(_DWORD *)(v546 + 4) = 0;
		*(_DWORD *)(v546 + 8) = 0;
		*(_DWORD *)(v546 + 12) = 0;
		*(_DWORD *)(v546 + 16) = 0;
		*(_DWORD *)(v546 + 20) = 0;
		v597 = *v674;
		*(_DWORD *)(v546 + 24) = *v674;
		*(_BYTE *)(v546 + 32) = 0;
		*(_DWORD *)(v546 + 28) = 0;
		*(_BYTE *)(v546 + 40) = 0;
		*(_DWORD *)(v546 + 36) = 0;
		*(_DWORD *)(v546 + 44) = 0;
		*(_DWORD *)(v546 + 48) = 0;
		*(_DWORD *)(v546 + 52) = -1;
		*(_DWORD *)(v546 + 76) = 1065353216;
		*(_DWORD *)(v546 + 64) = 0;
		*(_DWORD *)(v546 + 68) = 0;
		*(_DWORD *)(v546 + 72) = 0;
		*(_DWORD *)(v546 + 92) = 1065353216;
		*(_DWORD *)(v546 + 88) = 0;
		*(_DWORD *)(v546 + 80) = 0;
		*(_DWORD *)(v546 + 84) = 0;
		*(_DWORD *)(v546 + 100) = 0;
		*(_DWORD *)(v546 + 96) = 0;
		*(_DWORD *)v546 = v594;
		*(_DWORD *)v546 = v595;
		v598 = *v596;
		v839 = -256;
		v599 = GameCall<int>(0x9E9198, 0xd6ff70)(v598, 64, (int)&v839, 0, 0, v546 + 28, v597, v546 + 64);
		*(_DWORD *)(v546 + 8) = v599;
		v553 = &v840;
		*(_DWORD *)v599 = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 4) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 8) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 12) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 16) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 20) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 24) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 28) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 32) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 36) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 40) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 44) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 48) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 52) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 56) = 0;
		*(_DWORD *)(*(_DWORD *)(v546 + 8) + 60) = 0;
		*(_DWORD *)(v546 + 12) = 16;
		v840 = -256;
		goto LABEL_353;
	}
	if ((v513 ^ 0x10000) == 4995 || (v513 ^ 0x10000) == 5005 || (v513 ^ 0x10000) == 4965)
		goto LABEL_332;
LABEL_358:
	v803 = -256;
	v566 = GameCall<int>(0x9E8B28, 0xd6ff70)(112, &v803, v675);
	v567 = *(int *)0xD71E50;
	v568 = *(int *)0xD72158;
	*(_DWORD *)v566 = *(int *)0xD71F10;
	*(_DWORD *)(v566 + 4) = 0;
	*(_DWORD *)(v566 + 8) = 0;
	*(_DWORD *)(v566 + 12) = 0;
	*(_DWORD *)(v566 + 16) = 0;
	*(_DWORD *)(v566 + 20) = 0;
	*(_DWORD *)(v566 + 24) = *v674;
	v569 = v566;
	*(_BYTE *)(v566 + 32) = 0;
	*(_DWORD *)(v566 + 28) = 0;
	*(_BYTE *)(v566 + 40) = 0;
	*(_DWORD *)(v566 + 36) = 0;
	v570 = v566;
	*(_DWORD *)(v566 + 44) = 0;
	*(_DWORD *)(v566 + 48) = 0;
	*(_DWORD *)(v566 + 52) = -1;
	*(_DWORD *)(v566 + 76) = 1065353216;
	*(_DWORD *)(v566 + 64) = 0;
	*(_DWORD *)(v566 + 68) = 0;
	*(_DWORD *)(v566 + 72) = 0;
	*(_DWORD *)(v566 + 80) = 0;
	*(_DWORD *)(v566 + 88) = 0;
	*(_DWORD *)(v566 + 84) = 0;
	*(_DWORD *)(v566 + 92) = 1065353216;
	*(_DWORD *)(v566 + 100) = 0;
	*(_DWORD *)(v566 + 96) = 0;
	*(_DWORD *)v566 = v567;
	*(_DWORD *)v566 = v568;
	v571 = *(int *)0xD71E60;
	v572 = 0;
	v801 = -256;
	*(_DWORD *)(v566 + 8) = GameCall<int>(0x9E9198, 0xd6ff70)(v571, 120, (int)&v801, 0, 0, v566 + 80, 0, v566 + 64);
	do
	{
		v573 = 4 * (v572 + 3);
		*(_DWORD *)(4 * v572 + *(_DWORD *)(v566 + 8)) = 0;
		v574 = 4 * (v572 + 4);
		v575 = 4 * (v572 + 5);
		v576 = 4 * (v572 + 6);
		*(_DWORD *)(4 * (v572 + 1) + *(_DWORD *)(v566 + 8)) = 0;
		v577 = 4 * (v572 + 7);
		v578 = 4 * (v572 + 2) + *(_DWORD *)(v566 + 8);
		v579 = 4 * (v572 + 8);
		v580 = 4 * (v572 + 9);
		v572 += 10;
		*(_DWORD *)v578 = 0;
		*(_DWORD *)(v573 + *(_DWORD *)(v566 + 8)) = 0;
		*(_DWORD *)(v574 + *(_DWORD *)(v566 + 8)) = 0;
		*(_DWORD *)(v575 + *(_DWORD *)(v566 + 8)) = 0;
		*(_DWORD *)(v576 + *(_DWORD *)(v566 + 8)) = 0;
		*(_DWORD *)(v577 + *(_DWORD *)(v566 + 8)) = 0;
		*(_DWORD *)(v579 + *(_DWORD *)(v566 + 8)) = 0;
		*(_DWORD *)(v580 + *(_DWORD *)(v566 + 8)) = 0;
	} while (v572 != 30);
	*(_DWORD *)(v566 + 12) = 30;
	v838 = -256;
	v581 = 0;
	v582 = GameCall<int>(0x9E8EE8, 0xd6ff70)(360, &v838);
	do
	{
		v583 = v581 + 12 + v582;
		v584 = v581 + 24 + v582;
		v585 = v581 + v582;
		v586 = v581 + 36 + v582;
		v587 = v581 + 48 + v582;
		v588 = v581 + 60 + v582;
		v589 = v581 + 72 + v582;
		v590 = v581 + 84 + v582;
		v591 = v581 + 96 + v582;
		v592 = v581 + 108 + v582;
		v593 = v581 == 240;
		*(_DWORD *)(v585 + 8) = 0;
		*(_DWORD *)v585 = 0;
		*(_DWORD *)(v585 + 4) = 0;
		*(_DWORD *)(v583 + 8) = 0;
		*(_DWORD *)v583 = 0;
		*(_DWORD *)(v583 + 4) = 0;
		*(_DWORD *)(v584 + 8) = 0;
		*(_DWORD *)v584 = 0;
		*(_DWORD *)(v584 + 4) = 0;
		*(_DWORD *)(v586 + 8) = 0;
		*(_DWORD *)v586 = 0;
		*(_DWORD *)(v586 + 4) = 0;
		*(_DWORD *)(v587 + 8) = 0;
		*(_DWORD *)v587 = 0;
		*(_DWORD *)(v587 + 4) = 0;
		*(_DWORD *)(v588 + 8) = 0;
		*(_DWORD *)v588 = 0;
		*(_DWORD *)(v588 + 4) = 0;
		*(_DWORD *)(v589 + 8) = 0;
		*(_DWORD *)v589 = 0;
		*(_DWORD *)(v589 + 4) = 0;
		*(_DWORD *)(v590 + 8) = 0;
		*(_DWORD *)v590 = 0;
		*(_DWORD *)(v590 + 4) = 0;
		*(_DWORD *)(v591 + 8) = 0;
		*(_DWORD *)v591 = 0;
		*(_DWORD *)(v591 + 4) = 0;
		*(_DWORD *)(v592 + 8) = 0;
		*(_DWORD *)v592 = 0;
		*(_DWORD *)(v592 + 4) = 0;
		v581 += 120;
	} while (!v593);
	*(_DWORD *)(v569 + 16) = v582;
	return ((int(__fastcall *)(int))v673)(v570);
}