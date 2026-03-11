/*
 * func-name: ?CloneSelected@Editor@@QAEXXZ
 * func-address: 0x10085820
 * callers: 0x1008ce00
 * callees: 0x1000d4b0, 0x10011750, 0x10011e50, 0x1007bf30, 0x1007da70, 0x10082690, 0x1009d930, 0x1009ddc0, 0x101a2500
 */

void __thiscall Editor::CloneSelected(Editor *this)
{
  Editor *v1; // edi
  void *v2; // esi
  unsigned int v3; // ebx
  unsigned int i; // ebp
  int v5; // esi
  int v6; // ecx
  int *v7; // esi
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  int v11; // ecx
  int v12; // esi
  int v13; // ecx
  int v14; // esi
  int *v15; // ebp
  int *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int last_of; // eax
  int v26; // eax
  bool v27; // zf
  unsigned int v28; // eax
  unsigned int v29; // edx
  int *v30; // eax
  char *v31; // edi
  char v32; // [esp-20h] [ebp-C0h] BYREF
  int v33; // [esp-1Ch] [ebp-BCh] BYREF
  int v34; // [esp-18h] [ebp-B8h]
  int v35; // [esp-14h] [ebp-B4h]
  int v36; // [esp-10h] [ebp-B0h]
  int v37; // [esp-Ch] [ebp-ACh]
  int v38; // [esp-8h] [ebp-A8h]
  int v39; // [esp-4h] [ebp-A4h]
  Editor *v40; // [esp+10h] [ebp-90h]
  unsigned int v41; // [esp+14h] [ebp-8Ch]
  int **v42; // [esp+18h] [ebp-88h]
  int v43; // [esp+1Ch] [ebp-84h] BYREF
  _DWORD v44[4]; // [esp+20h] [ebp-80h] BYREF
  int v45; // [esp+30h] [ebp-70h]
  float v46; // [esp+34h] [ebp-6Ch]
  float v47; // [esp+38h] [ebp-68h]
  float v48; // [esp+3Ch] [ebp-64h]
  float v49; // [esp+40h] [ebp-60h]
  _BYTE v50[28]; // [esp+44h] [ebp-5Ch] BYREF
  int v51; // [esp+60h] [ebp-40h] BYREF
  void *v52; // [esp+64h] [ebp-3Ch]
  int v53; // [esp+68h] [ebp-38h]
  int v54; // [esp+70h] [ebp-30h] BYREF
  _BYTE v55[28]; // [esp+78h] [ebp-28h] BYREF
  int v56; // [esp+9Ch] [ebp-4h]

  v1 = this;
  v40 = this;
  std::vector<Actor *>::vector<Actor *>(&v51, (int)this + 2244);
  v56 = 0;
  Editor::UnSelectAll(v1);
  v41 = 0;
  v2 = v52;
  v42 = (int **)v52;
  while ( v2 )
  {
    v3 = (v53 - (int)v2) >> 2;
    if ( v41 >= v3 )
      break;
    if ( !*((_BYTE *)*v42 + 440) )
    {
      for ( i = 0; ; ++i )
      {
        v5 = *((_DWORD *)v1 + 512);
        v6 = *(_DWORD *)(v5 + 3224);
        if ( !v6 || i >= (*(_DWORD *)(v5 + 3228) - v6) >> 2 )
          break;
        v7 = *(int **)(*(_DWORD *)(*(_DWORD *)(v5 + 3224) + 4 * i) + 100);
        if ( v41 >= v3 )
          invalid_parameter_noinfo();
        if ( v7 == *v42 )
        {
          v8 = *((_DWORD *)v40 + 512);
          v9 = *(_DWORD *)(v8 + 3224);
          v10 = v8 + 3220;
          if ( !v9 || i >= (*(_DWORD *)(v10 + 8) - v9) >> 2 )
            invalid_parameter_noinfo();
          v11 = *(_DWORD *)(4 * i + *(_DWORD *)(v10 + 4));
          if ( !strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 100))(v11), "ActorInstancer") )
          {
            v12 = *((_DWORD *)v40 + 512);
            v13 = *(_DWORD *)(v12 + 3224);
            v14 = v12 + 3220;
            if ( !v13 || i >= (*(_DWORD *)(v14 + 8) - v13) >> 2 )
              invalid_parameter_noinfo();
            v15 = *(int **)(*(_DWORD *)(v14 + 4) + 4 * i);
            if ( !v15 )
            {
              v1 = v40;
              break;
            }
            v20 = *v15;
            v39 = *((_DWORD *)v40 + 512);
            v21 = (*(int (__thiscall **)(int *))(v20 + 100))(v15);
            v43 = (int)&v32;
            std::string::string(&v32, v21);
            v19 = Factory::create(v32, v33, v34, v35, v36, v37, v38, v39);
            (*(void (__thiscall **)(int *, int, int))(*v15 + 84))(v15, v19, 1);
            v1 = v40;
            goto LABEL_28;
          }
        }
        v1 = v40;
      }
    }
    if ( v41 >= v3 )
      invalid_parameter_noinfo();
    v16 = *v42;
    v17 = **v42;
    v39 = *((_DWORD *)v1 + 512);
    v18 = (*(int (__thiscall **)(int *))(v17 + 100))(v16);
    v43 = (int)&v32;
    std::string::string(&v32, v18);
    v19 = Factory::create(v32, v33, v34, v35, v36, v37, v38, v39);
    if ( v41 >= v3 )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(int *, int, int))(**v42 + 84))(*v42, v19, 1);
    if ( !*(_BYTE *)(v19 + 213) )
      (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 12))(v19);
LABEL_28:
    v22 = *(_DWORD *)(v19 + 716);
    if ( v22 && *(_DWORD *)(v22 + 308) )
    {
      ModelFrame::FixNames(*(ModelFrame **)(v22 + 308), *((struct World **)v1 + 512), 1);
      std::string::string(v50);
      v23 = *((_DWORD *)v1 + 512);
      LOBYTE(v56) = 1;
      if ( v23 )
      {
        v24 = std::string::c_str(v23 + 3188);
        std::string::operator=(v50, v24);
      }
      if ( (unsigned __int8)std::operator==<char>(v50, "MAP NOT LOADED") )
      {
        std::string::operator=(v50, "MAP NOT LOADED\\");
      }
      else if ( std::string::find_last_of(v50, "\\", std::string::npos) != -1 )
      {
        last_of = std::string::find_last_of(v50, "\\", std::string::npos);
        v26 = std::string::substr(v50, v55, 0, last_of + 1);
        LOBYTE(v56) = 2;
        std::string::operator=(v50, v26);
        LOBYTE(v56) = 1;
        std::string::~string(v55);
      }
      v43 = (int)&v33;
      std::string::string(&v33, v50);
      ModelFrame::CopyPrt(v33, v34, v35, v36, v37, v38, v39);
      v48 = 100.0;
      LOWORD(v47) = 1;
      v49 = 100.0;
      v45 = 0;
      v44[1] = 0;
      LOWORD(v44[0]) = 0;
      v44[2] = 0;
      v46 = 0.0;
      v44[3] = GetTickCount();
      v45 = *((_DWORD *)v1 + 512);
      LOBYTE(v56) = 3;
      LOBYTE(v47) = 0;
      sub_1007DA70(v44, v19);
      LOBYTE(v56) = 1;
      nullsub_1();
      LOBYTE(v56) = 0;
      std::string::~string(v50);
    }
    v27 = *(_BYTE *)(v19 + 442) == 0;
    v43 = v19;
    if ( !v27 )
    {
      if ( !*(_BYTE *)(v19 + 441) )
      {
        *((_BYTE *)v1 + 2060) = 1;
        v28 = *((_DWORD *)v1 + 562);
        if ( v28 )
          v29 = (int)(*((_DWORD *)v1 + 563) - v28) >> 2;
        else
          v29 = 0;
        if ( v28 && v29 < (int)(*((_DWORD *)v1 + 564) - v28) >> 2 )
        {
          v30 = (int *)*((_DWORD *)v1 + 563);
          *v30 = v19;
          *((_DWORD *)v1 + 563) = v30 + 1;
        }
        else
        {
          v31 = (char *)*((_DWORD *)v1 + 563);
          if ( v28 > (unsigned int)v31 )
            invalid_parameter_noinfo();
          std::vector<Actor *>::insert((_DWORD *)v40 + 561, &v54, (_DWORD *)v40 + 561, v31, &v43);
          v1 = v40;
        }
      }
      *(_BYTE *)(v19 + 441) = 1;
    }
    ++v41;
    ++v42;
    v2 = v52;
  }
  Beep(0x3E8u, 0x64u);
  if ( v2 )
    operator delete(v2);
}
