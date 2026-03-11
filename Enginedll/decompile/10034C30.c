/*
 * func-name: sub_10034C30
 * func-address: 0x10034c30
 * callers: 0x10035650
 * callees: 0x10033440, 0x10033ac0, 0x10033b90, 0x10034630, 0x10035ec0, 0x10035f50, 0x100360e0, 0x10036110, 0x10036700, 0x1006c5d0, 0x100977a0, 0x10097800, 0x101a251c, 0x101a2534
 */

int __thiscall sub_10034C30(_DWORD *this, LPCWCH lpWideCharStr)
{
  int v2; // ebp
  wchar_t *v3; // eax
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  char *v6; // ecx
  void (__cdecl *v8)(_DWORD *, WCHAR *); // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  float *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float *v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ebp
  char *v28; // eax
  int v29; // edx
  int v30; // eax
  int v31; // eax
  char *v32; // eax
  int v33; // edx
  int v34; // eax
  int v35; // edi
  _DWORD *v36; // edi
  int v37; // ebp
  int v38; // esi
  const unsigned __int16 **v39; // edi
  void *v40; // esi
  float v42; // [esp+14h] [ebp-84Ch] BYREF
  float v43; // [esp+18h] [ebp-848h] BYREF
  float v44; // [esp+1Ch] [ebp-844h] BYREF
  float v45; // [esp+20h] [ebp-840h] BYREF
  float v46; // [esp+24h] [ebp-83Ch] BYREF
  float v47; // [esp+28h] [ebp-838h] BYREF
  int v48; // [esp+2Ch] [ebp-834h]
  float v49; // [esp+30h] [ebp-830h] BYREF
  float v50; // [esp+34h] [ebp-82Ch] BYREF
  void *v51; // [esp+38h] [ebp-828h] BYREF
  int v52; // [esp+3Ch] [ebp-824h]
  int v53; // [esp+40h] [ebp-820h]
  void *v54; // [esp+44h] [ebp-81Ch] BYREF
  int v55; // [esp+48h] [ebp-818h]
  int v56; // [esp+4Ch] [ebp-814h]
  float v57; // [esp+50h] [ebp-810h] BYREF
  unsigned int v58; // [esp+54h] [ebp-80Ch] BYREF
  void *Block[3]; // [esp+58h] [ebp-808h] BYREF
  int v60; // [esp+64h] [ebp-7FCh] BYREF
  int v61; // [esp+68h] [ebp-7F8h]
  int v62; // [esp+6Ch] [ebp-7F4h]
  int v63; // [esp+70h] [ebp-7F0h]
  int v64; // [esp+74h] [ebp-7ECh]
  int v65; // [esp+78h] [ebp-7E8h]
  int v66; // [esp+7Ch] [ebp-7E4h]
  int v67; // [esp+80h] [ebp-7E0h]
  int v68; // [esp+84h] [ebp-7DCh] BYREF
  float v69; // [esp+88h] [ebp-7D8h]
  float v70; // [esp+8Ch] [ebp-7D4h]
  float v71; // [esp+90h] [ebp-7D0h]
  float v72; // [esp+94h] [ebp-7CCh]
  float v73; // [esp+98h] [ebp-7C8h]
  float v74; // [esp+9Ch] [ebp-7C4h]
  int v75; // [esp+A0h] [ebp-7C0h] BYREF
  float v76; // [esp+A4h] [ebp-7BCh]
  float v77[3]; // [esp+A8h] [ebp-7B8h] BYREF
  _DWORD v78[35]; // [esp+B4h] [ebp-7ACh] BYREF
  unsigned __int16 v79[256]; // [esp+140h] [ebp-720h] BYREF
  wchar_t Source[260]; // [esp+340h] [ebp-520h] BYREF
  WCHAR WideCharStr[260]; // [esp+548h] [ebp-318h] BYREF
  CHAR MultiByteStr[260]; // [esp+750h] [ebp-110h] BYREF
  int v83; // [esp+85Ch] [ebp-4h]

  v2 = (int)this;
  memset(WideCharStr, 0, sizeof(WideCharStr));
  WideCharToMultiByte(0, 0, lpWideCharStr, -1, MultiByteStr, 260, 0, 0);
  wcsncpy((wchar_t *)(v2 + 68), lpWideCharStr, 0x103u);
  v3 = wcsrchr((const wchar_t *)(v2 + 68), 0x5Cu);
  if ( v3 )
    *v3 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v83 = 2;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  memset(Block, 0, sizeof(Block));
  v4 = (wchar_t *)operator new(0x448u);
  v5 = v4;
  if ( !v4 )
    return -2147024882;
  sub_10033AC0(v4);
  wcsncpy(v5, L"default", 0x103u);
  if ( (int)sub_1006C5D0(*(_DWORD *)(v2 + 60) + 1) >= 0 )
    *(_DWORD *)(*(_DWORD *)(v2 + 56) + 4 * (*(_DWORD *)(v2 + 60))++) = v5;
  v48 = 0;
  memset(v79, 0, sizeof(v79));
  std::wifstream::wifstream(v78, MultiByteStr, 1, 64, 1);
  v6 = (char *)v78 + *(_DWORD *)(v78[0] + 4);
  LOBYTE(v83) = 3;
  if ( (unsigned __int8)std::ios_base::operator!(v6) )
  {
    SeriousWarning("wifstream::open", -2147467259);
    LOBYTE(v83) = 2;
    std::wifstream::`vbase destructor'(v78);
    return -2147467259;
  }
  else
  {
    v8 = (void (__cdecl *)(_DWORD *, WCHAR *))std::operator>><wchar_t,std::char_traits<wchar_t>>;
    std::operator>><wchar_t,std::char_traits<wchar_t>>(v78, v79);
    if ( !(unsigned __int8)std::ios_base::operator!((char *)v78 + *(_DWORD *)(v78[0] + 4)) )
    {
      while ( 1 )
      {
        if ( wcscmp(v79, (const unsigned __int16 *)"#") )
        {
          if ( !wcscmp(v79, (const unsigned __int16 *)"v") )
          {
            if ( !OBJLoad::s_CoordSystem )
            {
              v9 = std::wistream::operator>>(v78, &v50);
              v10 = std::wistream::operator>>(v9, &v46);
              std::wistream::operator>>(v10, &v49);
            }
            if ( OBJLoad::s_CoordSystem == 1 )
            {
              v11 = std::wistream::operator>>(v78, &v46);
              v12 = std::wistream::operator>>(v11, &v49);
              std::wistream::operator>>(v12, &v50);
            }
            if ( OBJLoad::s_CoordSystem == 2 )
            {
              v13 = std::wistream::operator>>(v78, &v50);
              v14 = std::wistream::operator>>(v13, &v49);
              std::wistream::operator>>(v14, &v46);
            }
            v71 = OBJLoad::s_Scale * v50;
            v76 = OBJLoad::s_Scale * v49;
            v43 = OBJLoad::s_Scale * v46;
            v72 = v71;
            v73 = v76;
            v74 = v43;
            if ( (int)sub_10035EC0(v52 + 1) >= 0 )
            {
              v15 = v52;
              v16 = (float *)((char *)v51 + 12 * v52);
              *v16 = v72;
              v16[1] = v73;
              v16[2] = v74;
              v52 = v15 + 1;
            }
          }
          else if ( !wcscmp(v79, L"vt") )
          {
            if ( OBJLoad::s_CoordSystem )
            {
              v18 = std::wistream::operator>>(v78, &v57);
              std::wistream::operator>>(v18, &v42);
            }
            else
            {
              v17 = std::wistream::operator>>(v78, &v57);
              std::wistream::operator>>(v17, &v42);
              v42 = -v42;
            }
            v69 = v57;
            v70 = v42;
            if ( (int)sub_10035F50(v55 + 1) >= 0 )
            {
              v19 = v55;
              v20 = (float *)v54;
              *((float *)v54 + 2 * v55) = v69;
              v20[2 * v19 + 1] = v70;
              v55 = v19 + 1;
            }
          }
          else if ( !wcscmp(v79, L"vn") )
          {
            if ( !OBJLoad::s_CoordSystem )
            {
              v21 = std::wistream::operator>>(v78, &v47);
              v22 = std::wistream::operator>>(v21, &v44);
              std::wistream::operator>>(v22, &v45);
            }
            if ( OBJLoad::s_CoordSystem == 1 )
            {
              v23 = std::wistream::operator>>(v78, &v44);
              v24 = std::wistream::operator>>(v23, &v45);
              std::wistream::operator>>(v24, &v47);
            }
            if ( OBJLoad::s_CoordSystem == 2 )
            {
              v25 = std::wistream::operator>>(v78, &v47);
              v26 = std::wistream::operator>>(v25, &v45);
              std::wistream::operator>>(v26, &v44);
            }
            v77[0] = v47;
            v77[1] = v45;
            v77[2] = v44;
            sub_10036110(v77);
          }
          else if ( !wcscmp(v79, L"f") )
          {
            v27 = 3;
            do
            {
              v60 = 0;
              v61 = 0;
              v62 = 0;
              v63 = 0;
              v64 = 0;
              v65 = 0;
              v66 = 0;
              v67 = 0;
              std::wistream::operator>>(v78, &v58);
              v28 = (char *)v51 + 12 * v58 - 12;
              v29 = *((_DWORD *)v28 + 1);
              v30 = *((_DWORD *)v28 + 2);
              v60 = *((_DWORD *)v51 + 3 * v58 - 3);
              v61 = v29;
              v62 = v30;
              if ( (unsigned __int16)std::wistream::get(v78) == 47 )
              {
                if ( (unsigned __int16)std::wistream::peek(v78) != 47 )
                {
                  std::wistream::operator>>(v78, &v75);
                  v31 = *((_DWORD *)v54 + 2 * v75 - 1);
                  v66 = *((_DWORD *)v54 + 2 * v75 - 2);
                  v67 = v31;
                }
                if ( (unsigned __int16)std::wistream::get(v78) == 47 && (unsigned __int16)std::wistream::peek(v78) != 47 )
                {
                  std::wistream::operator>>(v78, &v68);
                  if ( v68 != -858993460 )
                  {
                    v32 = (char *)Block[0] + 12 * v68 - 12;
                    v33 = *((_DWORD *)v32 + 1);
                    v34 = *((_DWORD *)v32 + 2);
                    v63 = *((_DWORD *)Block[0] + 3 * v68 - 3);
                    v64 = v33;
                    v65 = v34;
                  }
                }
              }
              v35 = sub_10033B90(this, v58, &v60);
              if ( (int)sub_1006C5D0(this[9] + 1) >= 0 )
                *(_DWORD *)(this[8] + 4 * this[9]++) = v35;
              --v27;
            }
            while ( v27 );
            if ( (int)sub_1006C5D0(this[12] + 1) >= 0 )
              *(_DWORD *)(this[11] + 4 * this[12]++) = v48;
          }
          else if ( !wcscmp(v79, L"mtllib") )
          {
            v8(v78, WideCharStr);
          }
          else if ( !wcscmp(v79, L"usemtl") )
          {
            memset(Source, 0, sizeof(Source));
            std::operator>><wchar_t,std::char_traits<wchar_t>>(v78, Source);
            v36 = this;
            v37 = this[15];
            v38 = 0;
            if ( v37 <= 0 )
            {
LABEL_55:
              v40 = operator new(0x448u);
              v43 = *(float *)&v40;
              if ( !v40 )
              {
                LOBYTE(v83) = 2;
                std::wifstream::`vbase destructor'(v78);
                sub_10036700(Block);
                sub_10036700(&v54);
                sub_10036700(&v51);
                return -2147024882;
              }
              v48 = v36[15];
              sub_10033AC0(v40);
              wcsncpy((wchar_t *)v40, Source, 0x103u);
              sub_100360E0(&v43);
            }
            else
            {
              v39 = (const unsigned __int16 **)this[14];
              while ( wcscmp(*v39, Source) )
              {
                ++v38;
                ++v39;
                if ( v38 >= v37 )
                {
                  v36 = this;
                  goto LABEL_55;
                }
              }
              v48 = v38;
            }
          }
        }
        v8 = (void (__cdecl *)(_DWORD *, WCHAR *))std::operator>><wchar_t,std::char_traits<wchar_t>>;
        std::operator>><wchar_t,std::char_traits<wchar_t>>(v78, v79);
        if ( (unsigned __int8)std::ios_base::operator!((char *)v78 + *(_DWORD *)(v78[0] + 4)) )
        {
          v2 = (int)this;
          break;
        }
      }
    }
    std::wifstream::close(v78);
    sub_10034630(v2);
    if ( WideCharStr[0] && sub_10033440((void *)v2, WideCharStr) < 0 )
      Warning("Material load failed for .obj file");
    LOBYTE(v83) = 2;
    std::wifstream::`vbase destructor'(v78);
    if ( Block[0] )
      free(Block[0]);
    if ( v54 )
      free(v54);
    if ( v51 )
      free(v51);
    return 0;
  }
}
