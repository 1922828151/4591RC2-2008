/*
 * func-name: ?FindMaterials@ModelFrame@@QAEXAAV?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@@Z
 * func-address: 0x1009ef10
 * callers: 0x10005230, 0x10044770, 0x1009ef10
 * callees: 0x100117e0, 0x10076ef0, 0x1009ef10
 */

void __thiscall ModelFrame::FindMaterials(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  unsigned int v3; // esi
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // esi
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  int *v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // edx
  int *v19; // eax
  int v20; // ecx
  char *v21; // esi
  unsigned int j; // [esp+10h] [ebp-18h]
  unsigned int v23; // [esp+14h] [ebp-14h]
  unsigned int v24; // [esp+18h] [ebp-10h]
  _DWORD *i; // [esp+1Ch] [ebp-Ch]
  int v26; // [esp+20h] [ebp-8h] BYREF

  v2 = this;
  for ( i = this; ; i = v2 )
  {
    v3 = 0;
    v24 = 0;
    if ( (int)v2[10] > 0 )
    {
      while ( 1 )
      {
        v4 = v2[1];
        if ( v4 )
        {
          if ( v3 < (v2[2] - v4) >> 2 && *(_DWORD *)(v4 + 4 * v3) )
            break;
        }
LABEL_43:
        v24 = ++v3;
        if ( (signed int)v3 >= v2[10] )
          goto LABEL_44;
      }
      for ( j = 0; ; ++j )
      {
        while ( 1 )
        {
          v5 = v2[1];
          if ( v5 && v3 < (v2[2] - v5) >> 2 )
            v6 = *(_DWORD *)(v2[1] + 4 * v3);
          else
            v6 = 0;
          v7 = *(_DWORD *)(v6 + 2464);
          if ( !v7 || j >= (*(_DWORD *)(v6 + 2468) - v7) >> 2 )
            goto LABEL_43;
          v23 = 0;
          if ( !std::vector<Model *>::size(a2) )
            break;
          while ( 1 )
          {
            v8 = v2[1];
            if ( v8 && v3 < (v2[2] - v8) >> 2 )
              v9 = *(_DWORD *)(v2[1] + 4 * v3);
            else
              v9 = 0;
            v10 = *(_DWORD *)(v9 + 2464);
            if ( !v10 || j >= (*(_DWORD *)(v9 + 2468) - v10) >> 2 )
              invalid_parameter_noinfo();
            v11 = a2[1];
            v12 = (_DWORD *)(4 * j + *(_DWORD *)(v9 + 2464));
            if ( !v11 || v23 >= (a2[2] - v11) >> 2 )
              invalid_parameter_noinfo();
            if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(a2[1] + 4 * v23) + 184, *v12 + 184) )
              break;
            ++v23;
            v3 = v24;
            if ( v23 >= std::vector<Model *>::size(a2) )
              goto LABEL_26;
          }
LABEL_42:
          ++j;
          v3 = v24;
        }
LABEL_26:
        v13 = v2[1];
        if ( v13 && v3 < (v2[2] - v13) >> 2 )
          v14 = *(_DWORD *)(v2[1] + 4 * v3);
        else
          v14 = 0;
        v15 = *(_DWORD *)(v14 + 2464);
        if ( !v15 || j >= (*(_DWORD *)(v14 + 2468) - v15) >> 2 )
          invalid_parameter_noinfo();
        v16 = (int *)(*(_DWORD *)(v14 + 2464) + 4 * j);
        v17 = a2[1];
        if ( v17 )
          v18 = (int)(a2[2] - v17) >> 2;
        else
          v18 = 0;
        if ( !v17 || v18 >= (int)(a2[3] - v17) >> 2 )
        {
          v21 = (char *)a2[2];
          if ( v17 > (unsigned int)v21 )
            invalid_parameter_noinfo();
          std::vector<Material *>::insert(a2, &v26, a2, v21, v16);
          v2 = i;
          goto LABEL_42;
        }
        v19 = (int *)a2[2];
        v20 = *v16;
        v2 = i;
        v3 = v24;
        *v19 = v20;
        a2[2] = v19 + 1;
      }
    }
LABEL_44:
    if ( v2[89] )
      ModelFrame::FindMaterials(a2);
    v2 = (_DWORD *)v2[90];
    if ( !v2 )
      break;
  }
}
