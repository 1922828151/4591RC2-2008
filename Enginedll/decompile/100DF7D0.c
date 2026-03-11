/*
 * func-name: ?Tick@Light@@UAEXXZ
 * func-address: 0x100df7d0
 * callers: none
 * callees: 0x10001370, 0x1000bc40, 0x10018ce0, 0x10018d80, 0x10018e30, 0x1001cb70, 0x1004c240, 0x1005f1c0, 0x1007eb80, 0x1007ec70, 0x100dd6d0, 0x100dd7c0, 0x100df380, 0x100e0290, 0x100e0350, 0x101189f0, 0x10118b80, 0x10127d70, 0x101404f0, 0x10179b40, 0x1017a0b0, 0x101a2500, 0x101a2516, 0x101a2534, 0x101a26c0
 */

void __thiscall Light::Tick(Light *this)
{
  int v2; // eax
  void *v3; // esi
  RenderBase *v4; // eax
  RenderBase *v5; // esi
  double v6; // st7
  void *v7; // esi
  int v8; // eax
  unsigned int v9; // edi
  unsigned int i; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  int v16; // edx
  int v17; // edx
  int v18; // edi
  float *v19; // esi
  int v20; // edx
  float *v21; // ebx
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  bool v25; // zf
  float v26; // eax
  float v27; // ecx
  float v28; // edx
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // eax
  double v35; // st7
  int v36; // eax
  int v37; // eax
  int v38; // eax
  double v39; // st7
  void *v40; // eax
  void *v41; // eax
  unsigned int v42; // edi
  int v43; // esi
  int v44; // ecx
  int v45; // edi
  unsigned int k; // edi
  int v47; // esi
  int v48; // ecx
  int v49; // esi
  unsigned int v50; // ebx
  int v51; // esi
  unsigned int v52; // edi
  int v53; // esi
  int v54; // eax
  int v55; // esi
  int v56; // eax
  int v57; // edx
  int v58; // eax
  int v59; // ecx
  Editor *v60; // eax
  float v61; // [esp+1Ch] [ebp-1A0h]
  float v62; // [esp+1Ch] [ebp-1A0h]
  float v63; // [esp+1Ch] [ebp-1A0h]
  float v64; // [esp+1Ch] [ebp-1A0h]
  float v65; // [esp+1Ch] [ebp-1A0h]
  float v66; // [esp+1Ch] [ebp-1A0h]
  float v67; // [esp+1Ch] [ebp-1A0h]
  float v68; // [esp+1Ch] [ebp-1A0h]
  float v69; // [esp+1Ch] [ebp-1A0h]
  float v70; // [esp+1Ch] [ebp-1A0h]
  float v71; // [esp+1Ch] [ebp-1A0h]
  unsigned int j; // [esp+1Ch] [ebp-1A0h]
  unsigned int v73; // [esp+20h] [ebp-19Ch]
  float v74; // [esp+20h] [ebp-19Ch]
  float v75; // [esp+20h] [ebp-19Ch]
  float v76; // [esp+20h] [ebp-19Ch]
  float v77; // [esp+20h] [ebp-19Ch]
  float v78; // [esp+20h] [ebp-19Ch]
  int v79; // [esp+20h] [ebp-19Ch]
  double v80; // [esp+24h] [ebp-198h] BYREF
  float v81; // [esp+2Ch] [ebp-190h]
  float v82; // [esp+38h] [ebp-184h] BYREF
  float v83; // [esp+3Ch] [ebp-180h]
  float v84; // [esp+40h] [ebp-17Ch]
  _QWORD v85[9]; // [esp+44h] [ebp-178h] BYREF
  float v86[18]; // [esp+8Ch] [ebp-130h] BYREF
  int v87[18]; // [esp+D4h] [ebp-E8h] BYREF
  float v88[18]; // [esp+11Ch] [ebp-A0h] BYREF
  float v89[19]; // [esp+164h] [ebp-58h] BYREF
  int v90; // [esp+1B8h] [ebp-4h]

  if ( *((_BYTE *)this + 1420) )
  {
    v2 = *((_DWORD *)this + 315);
    if ( !v2
      || (v61 = (float)*(int *)(v2 + 4),
          v80 = v61,
          v62 = v61 - *((float *)RenderDevice::Instance() + 404) * (double)*((int *)this + 356),
          v63 = fabs(v62),
          v63 > 5.0) )
    {
      v3 = (void *)*((_DWORD *)this + 315);
      if ( v3 )
      {
        stdiobuf::~stdiobuf(*((stdiobuf **)this + 315));
        operator delete(v3);
      }
      v4 = (RenderBase *)operator new(0x1Cu);
      v5 = v4;
      LODWORD(v80) = v4;
      v90 = 0;
      if ( v4 )
      {
        RenderBase::RenderBase(v4);
        *(_DWORD *)v5 = &ShadowMap::`vftable';
        *((_DWORD *)v5 + 6) = 0;
      }
      else
      {
        v5 = 0;
      }
      v90 = -1;
      *((_DWORD *)this + 315) = v5;
      v6 = *((float *)RenderDevice::Instance() + 404) * (double)*((int *)this + 356);
      sub_10127D70((int)v6);
    }
    if ( *((float *)this + 273) > 1.0 )
      *((float *)this + 273) = 1.0;
  }
  else
  {
    v7 = (void *)*((_DWORD *)this + 315);
    if ( v7 )
    {
      stdiobuf::~stdiobuf(*((stdiobuf **)this + 315));
      operator delete(v7);
      *((_DWORD *)this + 315) = 0;
    }
  }
  if ( !*((_BYTE *)this + 816) )
  {
    if ( *((_BYTE *)this + 1189) )
    {
      v8 = *((_DWORD *)this + 288);
      if ( v8 && (unsigned int)((*((_DWORD *)this + 289) - v8) / 72) > 1 )
      {
        v64 = GDeltaTime * 1000.0 + *((float *)this + 296);
        *((float *)this + 296) = v64;
        if ( *((float *)this + 295) < (double)v64 )
        {
          if ( *((_BYTE *)this + 1188) )
            *((float *)this + 296) = v64 - *((float *)this + 295);
          else
            *((float *)this + 296) = *((float *)this + 295);
        }
        LightState::LightState((LightState *)v86);
        v9 = 0;
        for ( i = 0; ; ++i )
        {
          v11 = *((_DWORD *)this + 288);
          if ( !v11 || i >= (*((_DWORD *)this + 289) - v11) / 72 )
            break;
          v12 = *((_DWORD *)this + 292);
          if ( !v12 || i >= (*((_DWORD *)this + 293) - v12) >> 2 )
            invalid_parameter_noinfo();
          if ( *((float *)this + 296) > (double)*(float *)(*((_DWORD *)this + 292) + 4 * i) )
            v9 = i;
        }
        v13 = *((_DWORD *)this + 288);
        v73 = v9;
        if ( !v13 || v9 + 1 >= (*((_DWORD *)this + 289) - v13) / 72 )
          invalid_parameter_noinfo();
        v14 = *((_DWORD *)this + 288);
        qmemcpy(v87, (const void *)(v14 + 72 * (v9 + 1)), sizeof(v87));
        if ( !v14 || v9 >= (*((_DWORD *)this + 289) - v14) / 72 )
          invalid_parameter_noinfo();
        v15 = v9;
        v16 = *((_DWORD *)this + 292);
        qmemcpy(v88, (const void *)(*((_DWORD *)this + 288) + 72 * v9), sizeof(v88));
        if ( !v16 || v9 >= (*((_DWORD *)this + 293) - v16) >> 2 )
        {
          invalid_parameter_noinfo();
          v15 = v9;
        }
        v17 = *((_DWORD *)this + 292);
        v18 = 4 * v15;
        v19 = (float *)(4 * v15 + v17);
        if ( !v17 || v15 + 1 >= (*((_DWORD *)this + 293) - v17) >> 2 )
        {
          invalid_parameter_noinfo();
          v15 = v73;
        }
        v20 = *((_DWORD *)this + 292);
        v21 = (float *)(v20 + 4 * (v15 + 1));
        if ( !v20 || v15 >= (*((_DWORD *)this + 293) - v20) >> 2 )
          invalid_parameter_noinfo();
        v65 = (*((float *)this + 296) - *v19) / (*v21 - *(float *)(*((_DWORD *)this + 292) + v18));
        v22 = LightState::operator-((float *)v87, (float *)v85, v88);
        v23 = LightState::operator*(v22, (float *)v87, v65);
        v24 = LightState::operator+(v88, v89, v23);
        v25 = *((_DWORD *)this + 357) == 2;
        qmemcpy(v86, v24, sizeof(v86));
        if ( v25 )
        {
          v26 = v86[1];
          v27 = v86[2];
          *((float *)this + 269) = v86[0];
          v28 = v86[3];
          *((float *)this + 270) = v26;
          *((float *)this + 271) = v27;
          *((float *)this + 272) = v28;
        }
        else
        {
          qmemcpy((char *)this + 1076, v86, 0x48u);
        }
        if ( *((_BYTE *)this + 1053) )
        {
LABEL_55:
          v32 = *((_DWORD *)this + 215);
          v33 = *((_DWORD *)this + 216);
          *((_DWORD *)this + 278) = *((_DWORD *)this + 214);
          *((_DWORD *)this + 279) = v32;
          *((_DWORD *)this + 280) = v33;
          v34 = *((_DWORD *)this + 357);
          if ( v34 == 2 || v34 == 8 )
          {
            sub_1000BC40((float *)v87);
            sub_10179B40(-1.5707964, 0.0, 0.0);
            sub_1000BC40(v88);
            qmemcpy(v85, sub_1001CB70(v87, v86, (int)this + 868), 0x40u);
            v80 = *(double *)&v85[2];
            v81 = *(float *)&v85[3];
            sub_1004C240((float *)&v80);
            v66 = -*(float *)&v80;
            v74 = -*((float *)&v80 + 1);
            *(float *)&v80 = -v81;
            v82 = v66;
            *((float *)this + 281) = v66;
            v83 = v74;
            v35 = *(float *)&v80;
            *((float *)this + 282) = v74;
            v84 = v35;
            *((float *)this + 283) = v84;
          }
LABEL_58:
          if ( *((_DWORD *)this + 357) == 4 )
          {
            *((_BYTE *)this + 1012) = 0;
            *((float *)this + 284) = 1.0e10;
          }
          else
          {
            if ( *((_DWORD *)this + 157) == -1 || *((_BYTE *)Editor::Instance() + 2056) )
            {
              v36 = *((_DWORD *)this + 360);
              if ( !v36 || !((*((_DWORD *)this + 361) - v36) >> 2) )
              {
                v37 = *((_DWORD *)this + 85);
                if ( v37 )
                {
                  if ( (*((_DWORD *)this + 86) - v37) / 28 )
                    goto LABEL_69;
                }
              }
              v38 = *((_DWORD *)this + 85);
              if ( v38 )
                v38 = (*((_DWORD *)this + 86) - v38) / 28;
              if ( v38 != *((_DWORD *)this + 268) )
LABEL_69:
                Light::GenerateExclusionListHandles((char **)this);
            }
            if ( *((_DWORD *)this + 157) != -1 && !*((_BYTE *)this + 1054) )
              goto LABEL_76;
            *(float *)&v80 = *((float *)this + 284);
            v67 = *((float *)this + 284);
            v75 = v67;
            *(float *)&v80 = -*(float *)&v80;
            v68 = -v67;
            v76 = -v75;
            v82 = *(float *)&v80;
            *((_DWORD *)this + 196) = LODWORD(v80);
            v83 = v68;
            *((float *)this + 197) = v68;
            v84 = v76;
            v39 = *((float *)this + 284);
            *((float *)this + 198) = v76;
            *(float *)&v80 = v39;
            v69 = *((float *)this + 284);
            v82 = *(float *)&v80;
            *((_DWORD *)this + 199) = LODWORD(v80);
            v83 = v69;
            *((float *)this + 200) = v69;
            v84 = v69;
            *((float *)this + 201) = v69;
            *(float *)&v80 = *((float *)this + 199) + *((float *)this + 214);
            v70 = *((float *)this + 215) + *((float *)this + 200);
            v77 = *((float *)this + 216) + *((float *)this + 201);
            v82 = *(float *)&v80;
            v83 = v70;
            v84 = v77;
            *(float *)&v80 = *((float *)this + 214) + *((float *)this + 196);
            v71 = *((float *)this + 215) + *((float *)this + 197);
            v78 = *((float *)this + 216) + *((float *)this + 198);
            *((float *)&v80 + 1) = v71;
            v81 = v78;
            sub_10001370((float *)v85, (float *)&v80, &v82);
            v25 = *((_DWORD *)this + 157) == -1;
            v90 = 1;
            if ( v25 )
            {
              v40 = sub_1005F1C0();
              *((_DWORD *)this + 157) = (*(unsigned __int16 (__thiscall **)(void *, Light *, int, _QWORD *, char *))(*(_DWORD *)v40 + 4))(
                                          v40,
                                          this,
                                          4,
                                          &v85[2],
                                          (char *)&v85[3] + 4);
            }
            v41 = sub_1005F1C0();
            (*(void (__thiscall **)(void *, _DWORD, _QWORD *, char *))(*(_DWORD *)v41 + 28))(
              v41,
              *((unsigned __int16 *)this + 314),
              &v85[2],
              (char *)&v85[3] + 4);
            v90 = -1;
            sub_1017A0B0(v85);
          }
          if ( *((_BYTE *)this + 1054) )
          {
LABEL_99:
            v25 = *((_BYTE *)this + 441) == 0;
            v57 = *((_DWORD *)this + 214);
            *((float *)this + 267) = *((float *)this + 284);
            v58 = *((_DWORD *)this + 215);
            v59 = *((_DWORD *)this + 216);
            *((_DWORD *)this + 264) = v57;
            *((_DWORD *)this + 265) = v58;
            *((_DWORD *)this + 266) = v59;
            if ( !v25 && (unsigned __int8)std::operator!=<char>((char *)this + 280, (char *)this + 444) )
            {
              v60 = Editor::Instance();
              Editor::MakeNameUnique(v60, this);
              std::string::operator=((char *)this + 280, (char *)this + 444);
            }
            *(float *)&v80 = *((float *)this + 212) * *((float *)this + 212)
                           + *((float *)this + 211) * *((float *)this + 211)
                           + *((float *)this + 213) * *((float *)this + 213);
            *(float *)&v80 = sqrt(*(float *)&v80);
            if ( *(float *)&v80 > 0.0 )
              World::RunPhysics(*((World **)this + 178), this);
            return;
          }
LABEL_76:
          if ( *((float *)this + 267) > 0.0
            && ((unsigned __int8)sub_100E0290((char *)this + 856)
             || *((float *)this + 267) < (double)*((float *)this + 284)) )
          {
            v42 = 0;
            *((_BYTE *)this + 1054) = 1;
            *((_BYTE *)this + 1053) = 1;
            for ( j = 0; ; v42 = j )
            {
              v43 = *((_DWORD *)this + 178);
              v44 = *(_DWORD *)(v43 + 3224);
              if ( !v44 || v42 >= (*(_DWORD *)(v43 + 3228) - v44) >> 2 )
                break;
              v45 = *(_DWORD *)(*(_DWORD *)(v43 + 3224) + 4 * v42);
              v79 = v45;
              if ( *(_BYTE *)(v45 + 725) && *(_DWORD *)(v45 + 716) )
              {
                for ( k = 0; ; ++k )
                {
                  v47 = *(_DWORD *)(v79 + 716);
                  v48 = *(_DWORD *)(v47 + 292);
                  if ( !v48 || k >= (*(_DWORD *)(v47 + 296) - v48) >> 2 )
                    break;
                  if ( *(Light **)(*(_DWORD *)(v47 + 292) + 4 * k) == this )
                  {
                    v49 = *(_DWORD *)(v79 + 716);
                    v50 = *(_DWORD *)(v49 + 292);
                    v51 = v49 + 288;
                    if ( v50 > *(_DWORD *)(v51 + 8) )
                      invalid_parameter_noinfo();
                    v52 = v50 + 4 * k;
                    if ( v52 > *(_DWORD *)(v51 + 8) || v52 < *(_DWORD *)(v51 + 4) )
                      invalid_parameter_noinfo();
                    v53 = *(_DWORD *)(v79 + 716);
                    v54 = *(_DWORD *)(v53 + 296);
                    v55 = v53 + 288;
                    v56 = (int)(v54 - (v52 + 4)) >> 2;
                    if ( v56 > 0 )
                      memmove_s((void *const)v52, 4 * v56, (const void *const)(v52 + 4), 4 * v56);
                    *(_DWORD *)(v55 + 8) -= 4;
                    if ( !*((_BYTE *)this + 1420) )
                      --*(_DWORD *)(*(_DWORD *)(v79 + 716) + 304);
                    break;
                  }
                }
              }
              ++j;
            }
          }
          goto LABEL_99;
        }
        v29 = *((_DWORD *)this + 279);
        v30 = *((_DWORD *)this + 280);
        *((_DWORD *)this + 214) = *((_DWORD *)this + 278);
        *((_DWORD *)this + 215) = v29;
        *((_DWORD *)this + 216) = v30;
      }
      else
      {
        v31 = *((_DWORD *)this + 288);
        if ( v31 && (*((_DWORD *)this + 289) - v31) / 72 )
          qmemcpy((char *)this + 1076, (const void *)sub_100E0350(0), 0x48u);
      }
    }
    if ( !*((_BYTE *)this + 1053) )
      goto LABEL_58;
    goto LABEL_55;
  }
}
