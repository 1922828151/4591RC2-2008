/*
 * func-name: ?UpdateCamera@Editor@@QAEXXZ
 * func-address: 0x10080c60
 * callers: 0x1008ce00
 * callees: 0x100012e0, 0x10001310, 0x10001440, 0x100165b0, 0x1004d200, 0x10063820, 0x10063980, 0x1007b520, 0x1007e950, 0x1008fcc0, 0x1008fdf0, 0x100db0e0, 0x100db2a0, 0x100ee930, 0x101189f0, 0x101780c8, 0x101780ce, 0x10178370, 0x1017a0b0, 0x1017ba40, 0x101a2516, 0x101a28e0, 0x101a28e6
 */

void __usercall Editor::UpdateCamera(Editor *this@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5@<esi>)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  struct RenderDevice *v7; // eax
  bool v8; // zf
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st7
  struct RenderDevice *v23; // esi
  struct RenderDevice *v24; // edi
  int (__thiscall *v25)(struct RenderDevice *); // edx
  int v26; // eax
  char *v27; // eax
  float *v28; // ecx
  float *v29; // edx
  float *v30; // esi
  int v31; // eax
  double v32; // st7
  int v33; // eax
  float *v34; // eax
  unsigned int v35; // edx
  int v36; // ecx
  unsigned int v37; // esi
  int v38; // ecx
  float *WorldBBox; // eax
  int v40; // eax
  float *v41; // eax
  float v42; // edx
  int v43; // ecx
  float *v44; // eax
  double v45; // st7
  double v46; // st6
  double v47; // st7
  int v48; // ecx
  float *v49; // eax
  float *v50; // eax
  float *v51; // eax
  float *v52; // eax
  float *v53; // eax
  float *v54; // eax
  float *v55; // eax
  float *v56; // eax
  float *v57; // eax
  float *v58; // eax
  float *v59; // eax
  float *v60; // eax
  struct RenderDevice *v61; // eax
  int v62; // eax
  float *v63; // eax
  double v64; // st7
  double v65; // st7
  struct RenderDevice *v66; // eax
  float v67; // [esp+14h] [ebp-144h]
  float v68; // [esp+14h] [ebp-144h]
  float v69; // [esp+14h] [ebp-144h]
  float v70; // [esp+14h] [ebp-144h]
  float v72; // [esp+28h] [ebp-130h]
  float v73; // [esp+28h] [ebp-130h]
  float v74; // [esp+28h] [ebp-130h]
  float v75; // [esp+28h] [ebp-130h]
  float v76; // [esp+28h] [ebp-130h]
  float v77; // [esp+28h] [ebp-130h]
  float v78; // [esp+28h] [ebp-130h]
  float v79; // [esp+28h] [ebp-130h]
  float v80; // [esp+28h] [ebp-130h]
  float v81; // [esp+28h] [ebp-130h]
  float v82; // [esp+28h] [ebp-130h]
  unsigned int v83; // [esp+2Ch] [ebp-12Ch]
  float v84; // [esp+2Ch] [ebp-12Ch]
  float v85; // [esp+2Ch] [ebp-12Ch]
  int v86; // [esp+2Ch] [ebp-12Ch]
  int v87; // [esp+30h] [ebp-128h] BYREF
  float v88; // [esp+34h] [ebp-124h]
  float v89; // [esp+38h] [ebp-120h]
  float v90; // [esp+3Ch] [ebp-11Ch]
  float v91; // [esp+40h] [ebp-118h] BYREF
  float v92; // [esp+44h] [ebp-114h]
  int v93; // [esp+48h] [ebp-110h] BYREF
  float v94; // [esp+4Ch] [ebp-10Ch]
  float v95; // [esp+50h] [ebp-108h]
  double v96; // [esp+54h] [ebp-104h] BYREF
  float v97; // [esp+5Ch] [ebp-FCh]
  float v98; // [esp+60h] [ebp-F8h]
  float v99[23]; // [esp+64h] [ebp-F4h] BYREF
  float v100; // [esp+C0h] [ebp-98h]
  float v101; // [esp+C4h] [ebp-94h]
  float v102; // [esp+C8h] [ebp-90h]
  _BYTE v103[12]; // [esp+CCh] [ebp-8Ch] BYREF
  _BYTE v104[40]; // [esp+D8h] [ebp-80h] BYREF
  int v105[3]; // [esp+100h] [ebp-58h] BYREF
  _BYTE v106[64]; // [esp+10Ch] [ebp-4Ch] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v107; // [esp+14Ch] [ebp-Ch]
  void *v108; // [esp+150h] [ebp-8h]
  int v109; // [esp+154h] [ebp-4h]

  v109 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v108 = &loc_101AAFE0;
  v107 = ExceptionList;
  if ( !*((_DWORD *)this + 62) )
  {
    v30 = (float *)((char *)this + 628);
    sub_1008FCC0(v106, (int)this + 628);
    if ( *((_DWORD *)this + 520) == 1 )
    {
      v31 = *((_DWORD *)this + 562);
      if ( !v31 || !((*((_DWORD *)this + 563) - v31) >> 2) )
        *((_DWORD *)this + 520) = 0;
    }
    if ( Input::ControlJustPressed(*((Input **)this + 1), *((_DWORD *)this + 8), 0) && *((_DWORD *)this + 520) != 1 )
    {
      if ( !*((_BYTE *)this + 2074) )
        goto LABEL_109;
      v72 = *((float *)this + 159);
      v92 = -*v30;
      v73 = atan2(v72, v92);
      v74 = v73 * 57.29577791868205 - 90.0;
      *(float *)(*((_DWORD *)this + 1) + 1712) = v74;
      *(float *)&v93 = 0.0;
      v94 = -1.0;
      v95 = 0.0;
      v75 = -(sub_1007E950((float *)this + 157, (float *)&v93) * 57.29577791868205 - 90.0);
      *(float *)(*((_DWORD *)this + 1) + 1716) = v75;
    }
    if ( *((_BYTE *)this + 2074) && *((_DWORD *)this + 520) == 1 )
    {
      if ( byte_10285798 )
      {
        if ( !Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 8), 0) )
          goto LABEL_79;
        v33 = *((_DWORD *)this + 1);
        flt_10285794 = *(float *)(v33 + 1712) + flt_10285794;
        v32 = *(float *)(v33 + 1716) + flt_10285790;
      }
      else
      {
        v76 = *((float *)this + 159);
        v92 = -*v30;
        v77 = atan2(v76, v92);
        flt_10285794 = v77 * 57.29577791868205 - 90.0;
        *(float *)&v93 = 0.0;
        v94 = -1.0;
        v95 = 0.0;
        v32 = -(sub_1007E950((float *)this + 157, (float *)&v93) * 57.29577791868205 - 90.0);
      }
      flt_10285790 = v32;
LABEL_79:
      v78 = fmod(flt_10285794, 360.0);
      flt_10285794 = v78;
      v79 = fmod(flt_10285790, 360.0);
      flt_10285790 = v79;
      v34 = (float *)sub_1017BA40((int)&v93, flt_10285794, v79, 0.0);
      *v30 = *v34;
      *((float *)this + 158) = v34[1];
      *((float *)this + 159) = v34[2];
      sub_10001440(&v99[16]);
      v35 = 0;
      v109 = 0;
      v83 = 0;
      while ( 1 )
      {
        v36 = *((_DWORD *)this + 562);
        if ( !v36 || v35 >= (*((_DWORD *)this + 563) - v36) >> 2 )
          break;
        v37 = v83;
        v38 = *((_DWORD *)this + 562);
        if ( *(_DWORD *)(*(_DWORD *)(4 * v83 + v38) + 716) )
        {
          if ( !v38 || v83 >= (*((_DWORD *)this + 563) - v38) >> 2 )
            invalid_parameter_noinfo();
          WorldBBox = (float *)StaticModel::GetWorldBBox(
                                 *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 562) + 4 * v83) + 716),
                                 v104);
          sub_1004D200(&v99[16], WorldBBox);
          sub_1017A0B0(v104);
          ++v83;
          v35 = v37 + 1;
        }
        else
        {
          if ( !v38 || v83 >= (*((_DWORD *)this + 563) - v38) >> 2 )
            invalid_parameter_noinfo();
          v40 = *((_DWORD *)this + 562);
          qmemcpy(v99, (const void *)(*(_DWORD *)(v40 + 4 * v83) + 868), 0x40u);
          if ( !v40 || v83 >= (*((_DWORD *)this + 563) - v40) >> 2 )
            invalid_parameter_noinfo();
          v41 = *(float **)(4 * v83 + *((_DWORD *)this + 562));
          v42 = v41[214];
          v41 += 214;
          v99[12] = v42;
          v99[13] = v41[1];
          v43 = *((_DWORD *)this + 562);
          v99[14] = v41[2];
          if ( !v43 || v83 >= (*((_DWORD *)this + 563) - v43) >> 2 )
            invalid_parameter_noinfo();
          v44 = (float *)sub_1008FDF0(v104, v99);
          sub_1004D200(&v99[16], v44);
          sub_1017A0B0(v104);
          v35 = ++v83;
        }
      }
      v80 = v100 + v99[20];
      v92 = v99[21] + v101;
      v90 = v99[22] + v102;
      *(float *)&v96 = v80 * 0.5;
      v92 = v92 * 0.5;
      v81 = 0.5 * v90;
      v84 = *(float *)&v96 - v100;
      v90 = v92 - v101;
      v91 = v81 - v102;
      v91 = v91 * v91 + v84 * v84 + v90 * v90;
      v91 = sqrt(v91);
      v90 = v91;
      v85 = *((float *)this + 151) - *(float *)&v96;
      v91 = *((float *)this + 152) - v92;
      *(float *)&v87 = *((float *)this + 153) - v81;
      *(float *)&v87 = v91 * v91 + v85 * v85 + *(float *)&v87 * *(float *)&v87;
      *(float *)&v87 = sqrt(*(float *)&v87);
      v86 = v87;
      if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 2), 0) )
        *(float *)&v86 = *(float *)&v87 - v90 * 3.5 * GDeltaTime;
      if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 3), 0) )
        *(float *)&v86 = v90 * 3.5 * GDeltaTime + *(float *)&v86;
      if ( *((_BYTE *)this + 2086) )
      {
        if ( Input::ControlJustPressed(*((Input **)this + 1), *((_DWORD *)this + 13), 0) )
          *(float *)&v86 = *(float *)&v86 - v90 * 0.3499999940395355;
        if ( Input::ControlJustPressed(*((Input **)this + 1), *((_DWORD *)this + 12), 0) )
          *(float *)&v86 = v90 * 0.3499999940395355 + *(float *)&v86;
      }
      v45 = v90 * 0.5;
      if ( *(float *)&v86 < v45 )
        *(float *)&v86 = v45;
      v46 = *((float *)this + 157);
      byte_10285798 = 1;
      v109 = -1;
      *(float *)&v87 = -v46;
      v91 = -*((float *)this + 158);
      v90 = -*((float *)this + 159);
      *(float *)&v87 = *(float *)&v87 * *(float *)&v86;
      v91 = v91 * *(float *)&v86;
      v90 = *(float *)&v86 * v90;
      *(float *)&v87 = *(float *)&v87 + *(float *)&v96;
      v91 = v91 + v92;
      v82 = v90 + v81;
      v47 = v91;
      *((float *)this + 151) = *(float *)&v87;
      v48 = *((_DWORD *)this + 1);
      v88 = v47;
      v89 = v82;
      *((float *)this + 152) = v88;
      *((float *)this + 153) = v82;
      *(float *)(v48 + 1712) = 0.0;
      *(float *)(*((_DWORD *)this + 1) + 1716) = 0.0;
      sub_1017A0B0(&v99[16]);
LABEL_139:
      *((float *)this + 161) = *((float *)this + 60);
      Camera::Update((Editor *)((char *)this + 252));
      return;
    }
LABEL_109:
    if ( !*((_BYTE *)this + 2077) && !Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 14), 0) )
      flt_10285770 = flt_10285770 + GDeltaTime;
    if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 8), 0)
      && *((_BYTE *)this + 2074)
      && !Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 14), 0) )
    {
      if ( flt_10285770 > 0.25 )
      {
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 2), 0) )
        {
          v67 = GDeltaTime;
          *(float *)&v87 = *((float *)this + 528) * *((float *)this + 525);
          v49 = sub_100165B0((float *)&v87, *(float *)&v87, (float *)this + 157);
          v50 = sub_100012E0(v49, (float *)&v93, v67);
          sub_10001310((float *)this + 151, v50);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 3), 0) )
        {
          v68 = GDeltaTime;
          *(float *)&v87 = *((float *)this + 528) * *((float *)this + 525);
          v51 = sub_100165B0((float *)&v87, *(float *)&v87, (float *)this + 157);
          v52 = sub_100012E0(v51, (float *)&v93, v68);
          sub_1007B520((float *)this + 151, v52);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 5), 0) )
        {
          *(float *)&v87 = *((float *)this + 528) * *((float *)this + 525);
          v69 = GDeltaTime;
          v53 = (float *)sub_10178370(v103);
          v54 = sub_100165B0((float *)&v96 + 1, *(float *)&v87, v53);
          v55 = sub_100012E0(v54, (float *)&v93, v69);
          sub_10001310((float *)this + 151, v55);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 4), 0) )
        {
          *(float *)&v87 = *((float *)this + 528) * *((float *)this + 525);
          v70 = GDeltaTime;
          v56 = (float *)sub_10178370(v103);
          v57 = sub_100165B0((float *)&v93, *(float *)&v87, v56);
          v58 = sub_100012E0(v57, (float *)&v96 + 1, v70);
          sub_1007B520((float *)this + 151, v58);
        }
        if ( *((_BYTE *)this + 2086) )
        {
          if ( Input::ControlJustPressed(*((Input **)this + 1), *((_DWORD *)this + 13), 0) )
          {
            *(float *)&v87 = *((float *)this + 528) * *((float *)this + 525);
            *(float *)&v87 = *(float *)&v87 / 25.0;
            v59 = sub_100012E0((float *)this + 157, (float *)&v96 + 1, *(float *)&v87);
            sub_10001310((float *)this + 151, v59);
          }
          if ( Input::ControlJustPressed(*((Input **)this + 1), *((_DWORD *)this + 12), 0) )
          {
            *(float *)&v87 = *((float *)this + 528) * *((float *)this + 525);
            *(float *)&v87 = *(float *)&v87 / 25.0;
            v60 = sub_100012E0((float *)this + 157, (float *)&v96 + 1, *(float *)&v87);
            sub_1007B520((float *)this + 151, v60);
          }
        }
        v61 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int))(*(_DWORD *)v61 + 372))(v61, 0, 1);
        v62 = *((_DWORD *)this + 1);
        *((_BYTE *)this + 60) = 0;
        v63 = (float *)sub_1017BA40((int)v105, *(float *)(v62 + 1712), *(float *)(v62 + 1716), 0.0);
        *v30 = *v63;
        *((float *)this + 158) = v63[1];
        *((float *)this + 159) = v63[2];
      }
    }
    else
    {
      if ( *((_BYTE *)this + 2077) )
        flt_10285770 = 0.0;
      if ( *((_BYTE *)this + 2074) && *((_BYTE *)this + 2086) )
      {
        if ( Input::ControlJustPressed(*((Input **)this + 1), *((_DWORD *)this + 13), 0) )
        {
          *(float *)&v87 = *((float *)this + 528) * *((float *)this + 525);
          *(float *)&v87 = *(float *)&v87 / 25.0;
          v64 = *(float *)&v87;
          *(float *)&v87 = *(float *)&v87 * *v30;
          v88 = *((float *)this + 158) * v64;
          v89 = v64 * *((float *)this + 159);
          *((float *)this + 151) = *(float *)&v87 + *((float *)this + 151);
          *((float *)this + 152) = v88 + *((float *)this + 152);
          *((float *)this + 153) = v89 + *((float *)this + 153);
        }
        if ( Input::ControlJustPressed(*((Input **)this + 1), *((_DWORD *)this + 12), 0) )
        {
          *(float *)&v87 = *((float *)this + 528) * *((float *)this + 525);
          *(float *)&v87 = *(float *)&v87 / 25.0;
          v65 = *(float *)&v87;
          *(float *)&v87 = *(float *)&v87 * *v30;
          v88 = *((float *)this + 158) * v65;
          v89 = v65 * *((float *)this + 159);
          *((float *)this + 151) = *((float *)this + 151) - *(float *)&v87;
          *((float *)this + 152) = *((float *)this + 152) - v88;
          *((float *)this + 153) = *((float *)this + 153) - v89;
        }
      }
      byte_10285798 = 0;
      v66 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v66 + 372))(v66, 1, 0);
      *((_BYTE *)this + 60) = 1;
    }
    goto LABEL_139;
  }
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD, int, int, int, int))(*(_DWORD *)v7 + 372))(
    v7,
    1,
    0,
    a4,
    a5,
    a3,
    a2);
  v8 = *((_BYTE *)this + 2074) == 0;
  *((_BYTE *)this + 60) = 1;
  if ( !v8 )
  {
    if ( *((_BYTE *)this + 2086) )
    {
      if ( Input::ControlJustPressed(*((Input **)this + 1), *((_DWORD *)this + 12), 0) )
        *((float *)this + 59) = *((float *)this + 59) * 1.100000023841858;
      if ( Input::ControlJustPressed(*((Input **)this + 1), *((_DWORD *)this + 13), 0) )
        *((float *)this + 59) = *((float *)this + 59) * 0.8999999761581421;
    }
    switch ( *((_DWORD *)this + 62) )
    {
      case 1:
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 2), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 152) = v94 * GDeltaTime + *((float *)this + 152);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 3), 0) )
        {
          v9 = *((float *)this + 152);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 152) = v9 - v94 * GDeltaTime;
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 5), 0) )
        {
          v10 = *((float *)this + 153);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 153) = v10 - v94 * GDeltaTime;
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 4), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 153) = v94 * GDeltaTime + *((float *)this + 153);
        }
        break;
      case 2:
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 2), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 152) = v94 * GDeltaTime + *((float *)this + 152);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 3), 0) )
        {
          v11 = *((float *)this + 152);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 152) = v11 - v94 * GDeltaTime;
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 5), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 153) = v94 * GDeltaTime + *((float *)this + 153);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 4), 0) )
        {
          v12 = *((float *)this + 153);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 153) = v12 - v94 * GDeltaTime;
        }
        break;
      case 3:
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 2), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 153) = v94 * GDeltaTime + *((float *)this + 153);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 3), 0) )
        {
          v19 = *((float *)this + 153);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 153) = v19 - v94 * GDeltaTime;
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 5), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 151) = v94 * GDeltaTime + *((float *)this + 151);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 4), 0) )
        {
          v20 = *((float *)this + 151);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          v15 = v20 - v94 * GDeltaTime;
          goto LABEL_58;
        }
        break;
      case 4:
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 2), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 153) = v94 * GDeltaTime + *((float *)this + 153);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 3), 0) )
        {
          v21 = *((float *)this + 153);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 153) = v21 - v94 * GDeltaTime;
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 5), 0) )
        {
          v22 = *((float *)this + 151);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 151) = v22 - v94 * GDeltaTime;
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 4), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          v18 = v94;
          goto LABEL_57;
        }
        break;
      case 5:
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 2), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 152) = v94 * GDeltaTime + *((float *)this + 152);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 3), 0) )
        {
          v13 = *((float *)this + 152);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 152) = v13 - v94 * GDeltaTime;
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 5), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 151) = v94 * GDeltaTime + *((float *)this + 151);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 4), 0) )
        {
          v14 = *((float *)this + 151);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          v15 = v14 - v94 * GDeltaTime;
          goto LABEL_58;
        }
        break;
      case 6:
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 2), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 152) = v94 * GDeltaTime + *((float *)this + 152);
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 3), 0) )
        {
          v16 = *((float *)this + 152);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 152) = v16 - v94 * GDeltaTime;
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 5), 0) )
        {
          v17 = *((float *)this + 151);
          v94 = *((float *)this + 528) * *((float *)this + 525);
          *((float *)this + 151) = v17 - v94 * GDeltaTime;
        }
        if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 4), 0) )
        {
          v94 = *((float *)this + 528) * *((float *)this + 525);
          v18 = v94;
LABEL_57:
          v15 = v18 * GDeltaTime + *((float *)this + 151);
LABEL_58:
          *((float *)this + 151) = v15;
        }
        break;
      default:
        break;
    }
  }
  v23 = RenderDevice::Instance();
  v24 = RenderDevice::Instance();
  v94 = COERCE_FLOAT((*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v23 + 296))(v23));
  v25 = *(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v24 + 300);
  v96 = (double)SLODWORD(v94);
  v94 = COERCE_FLOAT(v25(v24));
  v99[1] = v96 / (double)SLODWORD(v94);
  v89 = 10000.0;
  v88 = 1.0;
  v94 = *((float *)this + 59) * *((float *)this + 61);
  *(float *)&v87 = v94;
  v94 = *((float *)this + 59) * v99[1];
  v94 = v94 * *((float *)this + 61);
  D3DXMatrixOrthoLH(&v99[9], LODWORD(v94), v87, 1.0, 10000.0);
  qmemcpy((char *)this + 408, &v99[4], 0x40u);
  v26 = *((_DWORD *)this + 62);
  *((_BYTE *)this + 600) = 0;
  if ( v26 == 3 || v26 == 4 )
  {
    v27 = (char *)this + 604;
    *((float *)&v96 + 1) = 0.0;
    v28 = (float *)&v96 + 1;
    v97 = 0.0;
    v29 = &v91;
    v98 = 1.0;
    v91 = *((float *)this + 151) + *((float *)this + 157);
    v92 = *((float *)this + 158) + *((float *)this + 152);
    *(float *)&v93 = *((float *)this + 159) + *((float *)this + 153);
  }
  else
  {
    v27 = (char *)this + 604;
    v91 = 0.0;
    v28 = &v91;
    v29 = (float *)&v96 + 1;
    v92 = 1.0;
    *(float *)&v93 = 0.0;
    *((float *)&v96 + 1) = *((float *)this + 151) + *((float *)this + 157);
    v97 = *((float *)this + 158) + *((float *)this + 152);
    v98 = *((float *)this + 159) + *((float *)this + 153);
  }
  D3DXMatrixLookAtLH((char *)this + 472, v27, v29, v28);
  Camera::CreateClipPlanes((Editor *)((char *)this + 252));
}
