/*
 * func-name: sub_1027D670
 * func-address: 0x1027d670
 * callers: 0x1000f2f4
 * callees: 0x100050ba, 0x1000d42c, 0x1000f1dc, 0x100155aa, 0x102c0750, 0x102c9d62, 0x102c9ea8
 */

void __stdcall sub_1027D670(Event *a1)
{
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  char v6; // bl
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // ebx
  int v18; // edx
  int v19; // ebp
  int v20; // edx
  int v21; // esi
  int v22; // esi
  int v23; // ecx
  char v24; // [esp-54h] [ebp-F8h] BYREF
  int v25; // [esp-50h] [ebp-F4h]
  int v26; // [esp-4Ch] [ebp-F0h]
  int v27; // [esp-48h] [ebp-ECh]
  int v28; // [esp-44h] [ebp-E8h]
  int v29; // [esp-40h] [ebp-E4h]
  int v30; // [esp-3Ch] [ebp-E0h]
  int v31; // [esp-38h] [ebp-DCh]
  int v32; // [esp-34h] [ebp-D8h]
  int v33; // [esp-30h] [ebp-D4h]
  int v34; // [esp-2Ch] [ebp-D0h]
  char v35; // [esp-28h] [ebp-CCh] BYREF
  int v36; // [esp-24h] [ebp-C8h]
  int v37; // [esp-20h] [ebp-C4h]
  int v38; // [esp-1Ch] [ebp-C0h]
  int v39; // [esp-18h] [ebp-BCh]
  int v40; // [esp-14h] [ebp-B8h]
  int v41; // [esp-10h] [ebp-B4h]
  int v42; // [esp-Ch] [ebp-B0h]
  int v43; // [esp-8h] [ebp-ACh]
  int v44; // [esp-4h] [ebp-A8h]
  int v45; // [esp+14h] [ebp-90h]
  int v46; // [esp+18h] [ebp-8Ch]
  int v47; // [esp+1Ch] [ebp-88h]
  int v48; // [esp+20h] [ebp-84h]
  int v49; // [esp+24h] [ebp-80h]
  int v50; // [esp+28h] [ebp-7Ch]
  char *v51; // [esp+2Ch] [ebp-78h]
  char *v52; // [esp+30h] [ebp-74h]
  _BYTE v53[16]; // [esp+34h] [ebp-70h] BYREF
  float v54; // [esp+44h] [ebp-60h]
  float v55; // [esp+48h] [ebp-5Ch]
  float v56; // [esp+4Ch] [ebp-58h]
  float v57; // [esp+50h] [ebp-54h]
  float v58; // [esp+54h] [ebp-50h]
  float v59; // [esp+58h] [ebp-4Ch]
  _BYTE v60[28]; // [esp+5Ch] [ebp-48h] BYREF
  _BYTE v61[28]; // [esp+78h] [ebp-2Ch] BYREF
  int v62; // [esp+A0h] [ebp-4h]

  v44 = 0;
  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  v3 = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CRadarMapUI `RTTI Type Descriptor');
  v46 = v3;
  if ( v3 )
  {
    std::string::string(v61);
    v62 = 0;
    Event::GetStream(a1);
    v4 = (_DWORD *)sub_100050BA((int)v61);
    v5 = v4[3];
    if ( (unsigned int)(v5 + 1) > v4[2] )
    {
      v6 = HIBYTE(v45);
    }
    else
    {
      v6 = *(_BYTE *)(v5 + v4[1]);
      v4[3] = v5 + 1;
    }
    if ( (unsigned __int8)std::operator==<char>(v61, "local") )
    {
      if ( v6 )
      {
        std::string::string(v60);
        LOBYTE(v62) = 1;
        sub_1000F1DC();
        LOBYTE(v62) = 2;
        Event::GetStream(a1);
        v7 = (_DWORD *)sub_100050BA((int)v60);
        v8 = v7[3];
        if ( (unsigned int)(v8 + 4) <= v7[2] )
        {
          v54 = *(float *)(v8 + v7[1]);
          v7[3] += 4;
        }
        v9 = v7[3];
        if ( (unsigned int)(v9 + 4) <= v7[2] )
        {
          v55 = *(float *)(v9 + v7[1]);
          v7[3] += 4;
        }
        v10 = v7[3];
        if ( (unsigned int)(v10 + 4) <= v7[2] )
        {
          v56 = *(float *)(v10 + v7[1]);
          v7[3] += 4;
        }
        v11 = v7[3];
        if ( (unsigned int)(v11 + 4) <= v7[2] )
        {
          v57 = *(float *)(v11 + v7[1]);
          v7[3] += 4;
        }
        v12 = v7[3];
        if ( (unsigned int)(v12 + 4) <= v7[2] )
        {
          v58 = *(float *)(v12 + v7[1]);
          v7[3] += 4;
        }
        v13 = v7[3];
        if ( (unsigned int)(v13 + 4) <= v7[2] )
        {
          v59 = *(float *)(v13 + v7[1]);
          v7[3] += 4;
        }
        v14 = v7[3];
        v15 = v7[2];
        if ( v14 + 4 <= v15 )
        {
          v47 = *(_DWORD *)(v14 + v7[1]);
          v7[3] = v14 + 4;
        }
        v16 = v7[3];
        if ( v16 + 4 > v15 )
        {
          v17 = v48;
        }
        else
        {
          v17 = *(_DWORD *)(v16 + v7[1]);
          v7[3] = v16 + 4;
        }
        v18 = v7[3];
        if ( v18 + 4 > v15 )
        {
          v19 = v49;
        }
        else
        {
          v19 = *(_DWORD *)(v18 + v7[1]);
          v7[3] = v18 + 4;
        }
        v20 = v7[3];
        if ( v20 + 4 > v15 )
        {
          v21 = v50;
        }
        else
        {
          v21 = *(_DWORD *)(v20 + v7[1]);
          v7[3] = v20 + 4;
        }
        v52 = &v35;
        sub_100155AA((int)v53);
        v31 = v47;
        v32 = v17;
        v51 = &v24;
        v33 = v19;
        LOBYTE(v62) = 3;
        v34 = v21;
        std::string::string(&v24, v60);
        v22 = v46;
        LOBYTE(v62) = 2;
        CRadarMapUI::SetInsideMap(
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        *(_BYTE *)(v22 + 4089) = 1;
        LOBYTE(v62) = 1;
        sub_102C0750(v53);
        LOBYTE(v62) = 0;
        std::string::~string(v60);
      }
      else
      {
        v44 = v3 + 3988;
        v43 = v3 + 3960;
        v23 = *(_DWORD *)(v3 + 3896);
        *(_BYTE *)(v3 + 4088) = 0;
        *(_BYTE *)(v3 + 4090) = 0;
        CHotZonePic::SetPic(v23, v43);
        *(_BYTE *)(v3 + 4089) = 0;
      }
    }
    v62 = -1;
    std::string::~string(v61);
  }
}
