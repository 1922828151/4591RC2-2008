/*
 * func-name: ?MarkStaticItems@Light@@QAEXXZ
 * func-address: 0x100debd0
 * callers: 0x10138880
 * callees: 0x1000db00, 0x10011510, 0x100116a0, 0x10012a30, 0x10052ae0, 0x10057ee0, 0x10076ef0, 0x1007a380, 0x100dda20, 0x100ee930, 0x1017a0b0
 */

void __thiscall Light::MarkStaticItems(Light *this)
{
  Light *v1; // ebx
  bool v2; // zf
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // ecx
  int v13; // ebp
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // esi
  int v19; // eax
  int v20; // eax
  unsigned int v21; // edi
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // esi
  _DWORD *v26; // ecx
  _DWORD *v27; // esi
  int v28; // ecx
  int v29; // esi
  int v30; // ecx
  int v31; // eax
  int v32; // esi
  _DWORD *v33; // ecx
  int v34; // esi
  float v35; // [esp+0h] [ebp-68h]
  unsigned int i; // [esp+14h] [ebp-54h]
  int j; // [esp+18h] [ebp-50h]
  unsigned int v38; // [esp+1Ch] [ebp-4Ch]
  int v39; // [esp+20h] [ebp-48h] BYREF
  int v40[4]; // [esp+24h] [ebp-44h] BYREF
  _BYTE v41[16]; // [esp+34h] [ebp-34h] BYREF
  float v42[3]; // [esp+44h] [ebp-24h] BYREF
  float v43[3]; // [esp+50h] [ebp-18h] BYREF
  int v44; // [esp+64h] [ebp-4h]

  v1 = this;
  v2 = *((_BYTE *)this + 1054) == 0;
  v39 = (int)this;
  if ( v2 && !*((_BYTE *)this + 1420) && !*((_BYTE *)this + 1421) )
  {
    std::vector<Model *>::clear((_DWORD *)this + 359);
    v3 = *((_DWORD *)v1 + 85);
    v4 = (int)v1 + 336;
    if ( v3 && (*((_DWORD *)v1 + 86) - v3) / 28 )
    {
      memset(&v40[1], 0, 12);
      v44 = 0;
      for ( i = 0; ; ++i )
      {
        v5 = *((_DWORD *)v1 + 178);
        v6 = *(_DWORD *)(v5 + 3224);
        v7 = v5 + 3220;
        if ( !v6 || i >= (*(_DWORD *)(v7 + 8) - v6) >> 2 )
          break;
        v8 = 0;
        v38 = 0;
        for ( j = 0; ; j += 28 )
        {
          v9 = *(_DWORD *)(v4 + 4);
          if ( !v9 || v8 >= (*(_DWORD *)(v4 + 8) - v9) / 28 )
            break;
          v10 = *(_DWORD *)(v4 + 4);
          if ( !v10 || v8 >= (*(_DWORD *)(v4 + 8) - v10) / 28 )
            invalid_parameter_noinfo();
          v11 = *((_DWORD *)v1 + 178);
          v12 = *(_DWORD *)(v11 + 3224);
          v13 = j + *(_DWORD *)(v4 + 4);
          v14 = v11 + 3220;
          if ( !v12 || i >= (*(_DWORD *)(v14 + 8) - v12) >> 2 )
            invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(*(_DWORD *)(v14 + 4) + 4 * i) + 444, v13) )
          {
            v15 = *(_DWORD *)(v4 + 4);
            if ( !v15 || v38 >= (*(_DWORD *)(v4 + 8) - v15) / 28 )
              invalid_parameter_noinfo();
            sub_100116A0(v40, (void *)(j + *(_DWORD *)(v4 + 4)));
            v16 = *(_DWORD *)(v39 + 712);
            v17 = *(_DWORD *)(v16 + 3224);
            v18 = v16 + 3220;
            if ( !v17 || i >= (*(_DWORD *)(v18 + 8) - v17) >> 2 )
              invalid_parameter_noinfo();
            std::vector<Actor *>::push_back((_DWORD *)(v39 + 1436), (int *)(4 * i + *(_DWORD *)(v18 + 4)));
          }
          v8 = ++v38;
          v1 = (Light *)v39;
        }
      }
      sub_10011510(v4, (int)v40);
      v44 = -1;
      sub_1000DB00(v40);
    }
    v19 = *(_DWORD *)(v4 + 4);
    if ( v19 )
      v20 = (*(_DWORD *)(v4 + 8) - v19) / 28;
    else
      v20 = 0;
    v21 = 0;
    v2 = *((_DWORD *)v1 + 357) == 4;
    *((_DWORD *)v1 + 268) = v20;
    if ( v2 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v22 = *((_DWORD *)v1 + 178);
          v23 = *(_DWORD *)(v22 + 3224);
          if ( !v23 || v21 >= (*(_DWORD *)(v22 + 3228) - v23) >> 2 )
            return;
          v24 = *(_DWORD *)(v22 + 3224);
          v25 = *(_DWORD *)(v24 + 4 * v21);
          if ( *(_BYTE *)(v25 + 725) )
          {
            if ( *(_DWORD *)(v25 + 716)
              && *(_BYTE *)(v25 + 1011)
              && (*(_BYTE *)(v25 + 421) == *((_BYTE *)v1 + 421) || *(_BYTE *)(v25 + 422) == *((_BYTE *)v1 + 422))
              && !Light::IsExcluded(v1, *(struct Actor **)(v24 + 4 * v21)) )
            {
              break;
            }
          }
LABEL_44:
          ++v21;
        }
        v26 = (_DWORD *)(*(_DWORD *)(v25 + 716) + 288);
        v39 = (int)v1;
        sub_10052AE0(v26, &v39);
        v27 = *(_DWORD **)(v25 + 716);
        v28 = v27[73];
        if ( v28 )
        {
          v27[76] = (v27[74] - v28) >> 2;
          goto LABEL_44;
        }
        v27[76] = 0;
        ++v21;
      }
    }
    while ( 1 )
    {
      v29 = *((_DWORD *)v1 + 178);
      v30 = *(_DWORD *)(v29 + 3224);
      if ( !v30 || v21 >= (*(_DWORD *)(v29 + 3228) - v30) >> 2 )
        break;
      v31 = *(_DWORD *)(v29 + 3224);
      v32 = *(_DWORD *)(v31 + 4 * v21);
      if ( *(_BYTE *)(v32 + 725)
        && *(_DWORD *)(v32 + 716)
        && *(_BYTE *)(v32 + 1011)
        && (*(_BYTE *)(v32 + 421) == *((_BYTE *)v1 + 421) || *(_BYTE *)(v32 + 422) == *((_BYTE *)v1 + 422))
        && !Light::IsExcluded(v1, *(struct Actor **)(v31 + 4 * v21)) )
      {
        StaticModel::GetWorldBBox(*(_DWORD *)(v32 + 716), v41);
        v35 = *((float *)v1 + 284);
        v44 = 1;
        if ( sub_1007A380(v42, v43, (float *)v1 + 278, v35) )
        {
          v33 = (_DWORD *)(*(_DWORD *)(v32 + 716) + 288);
          v39 = (int)v1;
          sub_10052AE0(v33, &v39);
          v34 = *(_DWORD *)(v32 + 716);
          *(_DWORD *)(v34 + 304) = std::vector<Model *>::size((_DWORD *)(v34 + 288));
        }
        v44 = -1;
        sub_1017A0B0(v41);
      }
      ++v21;
    }
  }
}
