/*
 * func-name: ?onContactNotify@NxPhysicsContactReport@@UAEXAAVNxContactPair@@I@Z
 * func-address: 0x101478f0
 * callers: none
 * callees: 0x100244d0, 0x10024540, 0x10029a50, 0x100913d0, 0x10100ca0, 0x10143fd0, 0x10145cb0, 0x10145cc0, 0x10148830
 */

void __thiscall NxPhysicsContactReport::onContactNotify(NxPhysicsContactReport *this, int **a2, unsigned int a3)
{
  int *v3; // ebp
  int v4; // edx
  int v5; // esi
  int *v6; // edi
  unsigned __int8 (__thiscall *v7)(int *); // eax
  float *v8; // eax
  float *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  float *v14; // eax
  float *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int *v19; // edi
  int v20; // eax
  bool v21; // zf
  int v22; // ebx
  int v23; // ebp
  _DWORD *v24; // edi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  float *v28; // ebx
  int v29; // eax
  float *v30; // ebp
  unsigned int v31; // eax
  int *v32; // edx
  int v33; // esi
  int v34; // eax
  int (__stdcall *v35)(float *); // eax
  float *v36; // eax
  int v37; // ecx
  int v38; // esi
  int (__thiscall *v39)(int, float *); // edx
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
  int v43; // edx
  int v44; // eax
  int *v45; // edi
  NxPhysics *v46; // eax
  NxPhysics *v47; // eax
  int v48; // edi
  NxPhysics *v49; // eax
  int v50; // eax
  int *v51; // edi
  NxPhysics *v52; // eax
  NxPhysics *v53; // eax
  int v54; // edi
  NxPhysics *v55; // eax
  int v56; // [esp+4h] [ebp-14Ch] BYREF
  int v57; // [esp+8h] [ebp-148h]
  int v58; // [esp+Ch] [ebp-144h]
  int v59; // [esp+10h] [ebp-140h]
  int v60; // [esp+14h] [ebp-13Ch]
  int v61; // [esp+18h] [ebp-138h]
  int v62; // [esp+1Ch] [ebp-134h]
  _DWORD *v63; // [esp+20h] [ebp-130h]
  int v64; // [esp+24h] [ebp-12Ch] BYREF
  int v65; // [esp+28h] [ebp-128h] BYREF
  float v66; // [esp+2Ch] [ebp-124h] BYREF
  float v67; // [esp+30h] [ebp-120h]
  float v68; // [esp+34h] [ebp-11Ch]
  void *v69[4]; // [esp+38h] [ebp-118h] BYREF
  int v70[4]; // [esp+48h] [ebp-108h] BYREF
  int v71[4]; // [esp+58h] [ebp-F8h] BYREF
  int v72[7]; // [esp+68h] [ebp-E8h] BYREF
  int v73; // [esp+84h] [ebp-CCh]
  int v74; // [esp+88h] [ebp-C8h]
  int v75; // [esp+8Ch] [ebp-C4h]
  int v76; // [esp+90h] [ebp-C0h]
  int v77; // [esp+94h] [ebp-BCh]
  int v78; // [esp+98h] [ebp-B8h]
  int v79; // [esp+9Ch] [ebp-B4h]
  int v80; // [esp+A0h] [ebp-B0h] BYREF
  int v81; // [esp+A4h] [ebp-ACh]
  double v82[4]; // [esp+A8h] [ebp-A8h] BYREF
  int v83; // [esp+C8h] [ebp-88h]
  int v84; // [esp+CCh] [ebp-84h]
  int v85; // [esp+D0h] [ebp-80h]
  int *v86; // [esp+110h] [ebp-40h]
  float v87[3]; // [esp+114h] [ebp-3Ch] BYREF
  float v88[3]; // [esp+120h] [ebp-30h] BYREF
  float v89[3]; // [esp+12Ch] [ebp-24h] BYREF
  float v90[3]; // [esp+138h] [ebp-18h] BYREF
  int v91; // [esp+14Ch] [ebp-4h]

  if ( !*((_BYTE *)a2 + 36) && !*((_BYTE *)a2 + 37) )
  {
    v3 = *a2;
    v4 = **a2;
    v5 = (*a2)[1];
    v6 = a2[1];
    v63 = (_DWORD *)v6[1];
    v7 = *(unsigned __int8 (__thiscall **)(int *))(v4 + 116);
    v86 = v3;
    v62 = v5;
    if ( v7(v3) )
    {
      v8 = (float *)(*(int (__thiscall **)(int *, int *))(*v3 + 232))(v3, &v56);
    }
    else
    {
      v66 = 0.0;
      v8 = &v66;
      v67 = 0.0;
      v68 = 0.0;
    }
    v9 = NxHelper::ToVector(v87, v8);
    v10 = *((_DWORD *)v9 + 1);
    v11 = *(_DWORD *)v9;
    v12 = *((_DWORD *)v9 + 2);
    v60 = v10;
    v13 = *v6;
    v59 = v11;
    v61 = v12;
    if ( (*(unsigned __int8 (__thiscall **)(int *))(v13 + 116))(v6) )
    {
      v14 = (float *)(*(int (__thiscall **)(int *, float *))(*v6 + 232))(v6, v87);
    }
    else
    {
      v14 = &v66;
      v66 = 0.0;
      v67 = 0.0;
      v68 = 0.0;
    }
    v15 = NxHelper::ToVector(v88, v14);
    v16 = *(_DWORD *)v15;
    v17 = *((_DWORD *)v15 + 1);
    v18 = *((_DWORD *)v15 + 2);
    v56 = v16;
    v57 = v17;
    v58 = v18;
    CollisionInfo::CollisionInfo((CollisionInfo *)v69);
    v19 = a2[2];
    v20 = 0;
    v91 = 0;
    if ( v19 )
      v20 = *v19++;
    v83 = v20;
    while ( 1 )
    {
      v21 = v83-- == 0;
      if ( v21 )
        break;
      v22 = *v19;
      v23 = v19[1];
      v24 = v19 + 1;
      v25 = v24[1];
      v19 = v24 + 2;
      v84 = (unsigned __int16)v25;
      WORD2(v82[0]) = HIWORD(v25);
      v65 = v22;
      v64 = v23;
      if ( v22 && v23 )
      {
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 4))(v22);
        if ( (int *)v26 != v86 )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 4))(v22);
          (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 4))(v23);
          v65 = v23;
          v64 = v22;
        }
        sub_10148830((int)v72, (int)&v65);
        sub_10148830((int)v72, (int)&v64);
        while ( 1 )
        {
          v21 = v84-- == 0;
          if ( v21 )
            break;
          v27 = v19[3];
          v28 = (float *)v19;
          v19 += 4;
          while ( 1 )
          {
            v85 = v27 - 1;
            if ( !v27 )
              break;
            v29 = v19[3];
            v30 = (float *)v19;
            v19 += 4;
            v31 = v29 & 0x80000000;
            if ( SBYTE4(v82[0]) < 0 )
              ++v19;
            if ( (BYTE4(v82[0]) & 4) != 0 )
            {
              if ( v31 )
                v19 += 2;
              else
                ++v19;
            }
            if ( v5 )
            {
              if ( *(_DWORD *)(v5 + 8) == 1 )
              {
                v32 = (int *)v65;
                if ( *(_DWORD *)(v65 + 4) )
                {
                  v33 = *(_DWORD *)(v65 + 4);
                  *(_BYTE *)v33 = 1;
                  v34 = *v32;
                  *(float *)(v33 + 4) = *v30;
                  v35 = *(int (__stdcall **)(float *))(v34 + 68);
                  *(float *)(v33 + 8) = v30[1];
                  *(float *)(v33 + 12) = v30[2];
                  *(float *)(v33 + 16) = *v28;
                  *(float *)(v33 + 20) = v28[1];
                  *(float *)(v33 + 24) = v28[2];
                  v36 = (float *)v35(v88);
                  *(float *)(v33 + 28) = *v36;
                  *(float *)(v33 + 32) = v36[1];
                  *(float *)(v33 + 36) = v36[2];
                }
              }
            }
            if ( v63 && v63[2] == 1 )
            {
              v37 = v64;
              if ( *(_DWORD *)(v64 + 4) )
              {
                v38 = *(_DWORD *)(v64 + 4);
                *(_BYTE *)v38 = 1;
                *(float *)(v38 + 4) = *v30;
                v39 = *(int (__thiscall **)(int, float *))(*(_DWORD *)v37 + 68);
                *(float *)(v38 + 8) = v30[1];
                *(float *)(v38 + 12) = v30[2];
                v66 = -*v28;
                v67 = -v28[1];
                v68 = -v28[2];
                *(float *)(v38 + 16) = v66;
                *(float *)(v38 + 20) = v67;
                *(float *)(v38 + 24) = v68;
                v40 = (float *)v39(v37, v87);
                *(float *)(v38 + 28) = *v40;
                *(float *)(v38 + 32) = v40[1];
                *(float *)(v38 + 36) = v40[2];
              }
            }
            v41 = NxHelper::ToVector(v89, v30);
            sub_100913D0(v71, v41);
            v42 = NxHelper::ToVector(v90, v28);
            sub_100913D0(v70, v42);
            v5 = v62;
            v27 = v85;
          }
        }
      }
    }
    if ( a3 != 2 && a3 != 4 )
      goto LABEL_92;
    v43 = v62;
    if ( v62 )
    {
      v44 = *(_DWORD *)(v62 + 8);
      if ( v44 )
      {
        if ( v44 == 1 )
        {
          v45 = *(int **)(v62 + 12);
          if ( v45 )
          {
            if ( *v45 )
            {
              if ( a3 == 2 )
              {
                if ( v63 )
                  v73 = v63[1];
                else
                  v73 = -1;
                v74 = v59;
                v75 = v60;
                v76 = v61;
                v77 = v56;
                v78 = v57;
                v79 = v58;
                CollisionInfo::CollisionInfo((CollisionInfo *)v82);
                LOBYTE(v91) = 3;
                CollisionInfo::operator=(v82, (int)v69);
                v81 = *v45;
                v80 = 2;
                v47 = NxPhysics::Instance();
                NxPhysics::AddCallbackVehicle(v47, (const struct Stack_Callback_Vehicle *)&v80);
              }
              else
              {
                if ( v63 )
                  v73 = v63[1];
                else
                  v73 = -1;
                v75 = v60;
                v74 = v59;
                v76 = v61;
                v78 = v57;
                v77 = v56;
                v79 = v58;
                CollisionInfo::CollisionInfo((CollisionInfo *)v82);
                LOBYTE(v91) = 4;
                CollisionInfo::operator=(v82, (int)v69);
                v81 = *v45;
                v80 = 4;
                v46 = NxPhysics::Instance();
                NxPhysics::AddCallbackVehicle(v46, (const struct Stack_Callback_Vehicle *)&v80);
              }
LABEL_64:
              LOBYTE(v91) = 0;
              CollisionInfo::~CollisionInfo((void **)v82);
              v43 = v62;
            }
          }
        }
      }
      else
      {
        v48 = *(_DWORD *)(v62 + 12);
        if ( v48 && *(_DWORD *)(v48 + 4) )
        {
          if ( a3 == 2 )
          {
            if ( v63 )
              v73 = v63[1];
            else
              v73 = -1;
            v75 = v60;
            v74 = v59;
            v76 = v61;
            v78 = v57;
            v77 = v56;
            v79 = v58;
            CollisionInfo::CollisionInfo((CollisionInfo *)v82);
            LOBYTE(v91) = 1;
            CollisionInfo::operator=(v82, (int)v69);
            v81 = *(_DWORD *)(v48 + 4);
            v80 = 2;
          }
          else
          {
            if ( v63 )
              v73 = v63[1];
            else
              v73 = -1;
            v76 = v61;
            v74 = v59;
            v75 = v60;
            v79 = v58;
            v77 = v56;
            v78 = v57;
            CollisionInfo::CollisionInfo((CollisionInfo *)v82);
            LOBYTE(v91) = 2;
            CollisionInfo::operator=(v82, (int)v69);
            v81 = *(_DWORD *)(v48 + 4);
            v80 = 4;
          }
          v49 = NxPhysics::Instance();
          NxPhysics::AddCallbackNormal(v49, (const struct Stack_Callback_Normal *)&v80);
          goto LABEL_64;
        }
      }
    }
    if ( v63 )
    {
      v50 = v63[2];
      if ( v50 )
      {
        if ( v50 != 1 )
          goto LABEL_92;
        v51 = (int *)v63[3];
        if ( !v51 || !*v51 )
          goto LABEL_92;
        if ( a3 == 2 )
        {
          if ( v43 )
            v73 = *(_DWORD *)(v43 + 4);
          else
            v73 = -1;
          v76 = v58;
          v74 = v56;
          v75 = v57;
          v79 = v61;
          v77 = v59;
          v78 = v60;
          CollisionInfo::CollisionInfo((CollisionInfo *)v82);
          LOBYTE(v91) = 7;
          CollisionInfo::operator=(v82, (int)v69);
          v81 = *v51;
          v80 = 2;
          v53 = NxPhysics::Instance();
          NxPhysics::AddCallbackVehicle(v53, (const struct Stack_Callback_Vehicle *)&v80);
        }
        else
        {
          if ( v43 )
            v73 = *(_DWORD *)(v43 + 4);
          else
            v73 = -1;
          v74 = v56;
          v75 = v57;
          v76 = v58;
          v77 = v59;
          v78 = v60;
          v79 = v61;
          CollisionInfo::CollisionInfo((CollisionInfo *)v82);
          LOBYTE(v91) = 8;
          CollisionInfo::operator=(v82, (int)v69);
          v81 = *v51;
          v80 = 4;
          v52 = NxPhysics::Instance();
          NxPhysics::AddCallbackVehicle(v52, (const struct Stack_Callback_Vehicle *)&v80);
        }
      }
      else
      {
        v54 = v63[3];
        if ( !v54 || !*(_DWORD *)(v54 + 4) )
          goto LABEL_92;
        if ( a3 == 2 )
        {
          if ( v43 )
            v73 = *(_DWORD *)(v43 + 4);
          else
            v73 = -1;
          v74 = v56;
          v75 = v57;
          v76 = v58;
          v77 = v59;
          v78 = v60;
          v79 = v61;
          CollisionInfo::CollisionInfo((CollisionInfo *)v82);
          LOBYTE(v91) = 5;
          CollisionInfo::operator=(v82, (int)v69);
          v81 = *(_DWORD *)(v54 + 4);
          v80 = 2;
        }
        else
        {
          if ( v43 )
            v73 = *(_DWORD *)(v43 + 4);
          else
            v73 = -1;
          v75 = v57;
          v74 = v56;
          v76 = v58;
          v78 = v60;
          v77 = v59;
          v79 = v61;
          CollisionInfo::CollisionInfo((CollisionInfo *)v82);
          LOBYTE(v91) = 6;
          CollisionInfo::operator=(v82, (int)v69);
          v81 = *(_DWORD *)(v54 + 4);
          v80 = 4;
        }
        v55 = NxPhysics::Instance();
        NxPhysics::AddCallbackNormal(v55, (const struct Stack_Callback_Normal *)&v80);
      }
      CollisionInfo::~CollisionInfo((void **)v82);
    }
LABEL_92:
    CollisionInfo::~CollisionInfo(v69);
  }
}
