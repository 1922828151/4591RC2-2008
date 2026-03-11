/*
 * func-name: sub_100481A0
 * func-address: 0x100481a0
 * callers: none
 * callees: 0x1000dc10, 0x10011750, 0x100477a0, 0x100490f0, 0x1004ea90, 0x100e6830
 */

char __thiscall sub_100481A0(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, unsigned int j)
{
  unsigned int v10; // esi
  int v11; // eax
  unsigned int i; // ebx
  int v14; // ecx
  unsigned int v15; // edi
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  unsigned int m; // ebx
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // ebp
  int v25; // edi
  int v26; // eax
  int v27; // edi
  int v28; // ecx
  int v29; // ecx
  int v30; // ebx
  struct Actor **v31; // edi
  int v32; // ecx
  int v33; // ecx
  int *v34; // ebp
  int v35; // edi
  unsigned int v36; // eax
  _DWORD *v37; // edi
  unsigned int v38; // edx
  int *v39; // eax
  char *v40; // ebx
  int v41; // ecx
  int v42; // ecx
  _DWORD *v43; // edi
  int v44; // ecx
  int v45; // edi
  unsigned int v46; // ebp
  int *v47; // edi
  unsigned int v48; // ebx
  char v49; // [esp-4h] [ebp-3Ch]
  unsigned int v50; // [esp+Ch] [ebp-2Ch]
  unsigned int v51; // [esp+10h] [ebp-28h]
  int k; // [esp+14h] [ebp-24h]
  int v53; // [esp+18h] [ebp-20h]
  int v54; // [esp+1Ch] [ebp-1Ch] BYREF
  int v55; // [esp+24h] [ebp-14h] BYREF
  int v56; // [esp+34h] [ebp-4h]

  v10 = j;
  this[44] = j;
  v49 = *(_BYTE *)(v10 + 724);
  v56 = 0;
  v11 = std::string::c_str(&a2);
  if ( sub_100477A0((int)this, v11, v49) )
  {
    XMLSystem::Destroy((XMLSystem *)(this + 21));
    this[44] = 0;
    this[45] = 0;
    std::string::operator=(this + 14, "(None)");
    for ( i = 0; ; ++i )
    {
      v14 = this[8];
      if ( !v14 || i >= (this[9] - v14) >> 2 )
        break;
      Material::Release(*(Material **)(this[8] + 4 * i));
    }
    v15 = 0;
    for ( j = 0; ; v15 = j )
    {
      v16 = *(_DWORD *)(v10 + 3224);
      if ( !v16 || v15 >= (*(_DWORD *)(v10 + 3228) - v16) >> 2 )
        break;
      v51 = 0;
      for ( k = 0; ; k += 28 )
      {
        v17 = *(_DWORD *)(v10 + 3224);
        if ( !v17 || v15 >= (*(_DWORD *)(v10 + 3228) - v17) >> 2 )
          invalid_parameter_noinfo();
        v18 = *(_DWORD *)(4 * v15 + *(_DWORD *)(v10 + 3224));
        v19 = *(_DWORD *)(v18 + 404);
        v20 = v18 + 400;
        if ( !v19 || v51 >= (*(_DWORD *)(v20 + 8) - v19) / 28 )
          break;
        for ( m = 0; ; ++m )
        {
          v22 = *(_DWORD *)(v10 + 3224);
          if ( !v22 || m >= (*(_DWORD *)(v10 + 3228) - v22) >> 2 )
            break;
          v23 = *(_DWORD *)(v10 + 3224);
          v24 = (_DWORD *)(v23 + 4 * m);
          if ( !v23 || v15 >= (*(_DWORD *)(v10 + 3228) - v23) >> 2 )
            invalid_parameter_noinfo();
          v25 = *(_DWORD *)(*(_DWORD *)(v10 + 3224) + 4 * v15);
          v26 = *(_DWORD *)(v25 + 404);
          v27 = v25 + 400;
          if ( !v26 || v51 >= (*(_DWORD *)(v27 + 8) - v26) / 28 )
            invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(k + *(_DWORD *)(v27 + 4), *v24 + 444) )
          {
            v28 = *(_DWORD *)(v10 + 3224);
            v50 = m;
            if ( !v28 || m >= (*(_DWORD *)(v10 + 3228) - v28) >> 2 )
              invalid_parameter_noinfo();
            v29 = *(_DWORD *)(v10 + 3224);
            v30 = 4 * m;
            v31 = (struct Actor **)(v30 + v29);
            v53 = v30;
            if ( !v29 || j >= (*(_DWORD *)(v10 + 3228) - v29) >> 2 )
              invalid_parameter_noinfo();
            if ( !Actor::HasOnOcclusionList(*(Actor **)(4 * j + *(_DWORD *)(v10 + 3224)), *v31) )
            {
              v32 = *(_DWORD *)(v10 + 3224);
              if ( !v32 || v50 >= (*(_DWORD *)(v10 + 3228) - v32) >> 2 )
                invalid_parameter_noinfo();
              v33 = *(_DWORD *)(v10 + 3224);
              v34 = (int *)(v30 + v33);
              if ( !v33 || j >= (*(_DWORD *)(v10 + 3228) - v33) >> 2 )
                invalid_parameter_noinfo();
              v35 = *(_DWORD *)(4 * j + *(_DWORD *)(v10 + 3224));
              v36 = *(_DWORD *)(v35 + 388);
              v37 = (_DWORD *)(v35 + 384);
              if ( v36 )
                v38 = (int)(v37[2] - v36) >> 2;
              else
                v38 = 0;
              if ( v36 && v38 < (int)(v37[3] - v36) >> 2 )
              {
                v39 = (int *)v37[2];
                *v39 = *v34;
                v37[2] = v39 + 1;
              }
              else
              {
                v40 = (char *)v37[2];
                if ( v36 > (unsigned int)v40 )
                  invalid_parameter_noinfo();
                std::vector<Actor *>::insert(v37, &v54, v37, v40, v34);
                v30 = v53;
              }
              v41 = *(_DWORD *)(v10 + 3224);
              if ( !v41 || j >= (*(_DWORD *)(v10 + 3228) - v41) >> 2 )
                invalid_parameter_noinfo();
              v42 = *(_DWORD *)(v10 + 3224);
              v43 = (_DWORD *)(4 * j + v42);
              if ( !v42 || v50 >= (*(_DWORD *)(v10 + 3228) - v42) >> 2 )
                invalid_parameter_noinfo();
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 3224) + v30) + 380) = *v43;
            }
            v15 = j;
            break;
          }
          v15 = j;
        }
        ++v51;
      }
      v44 = *(_DWORD *)(v10 + 3224);
      if ( !v44 || v15 >= (*(_DWORD *)(v10 + 3228) - v44) >> 2 )
        invalid_parameter_noinfo();
      v45 = *(_DWORD *)(4 * v15 + *(_DWORD *)(v10 + 3224));
      v46 = *(_DWORD *)(v45 + 408);
      v47 = (int *)(v45 + 400);
      if ( v47[1] > v46 )
        invalid_parameter_noinfo();
      v48 = v47[1];
      if ( v48 > v47[2] )
        invalid_parameter_noinfo();
      sub_1000DC10(v47, &v55, (int)v47, v48, (int)v47, v46);
      ++j;
    }
    v56 = -1;
    std::string::~string(&a2);
    return 1;
  }
  else
  {
    v56 = -1;
    std::string::~string(&a2);
    return 0;
  }
}
