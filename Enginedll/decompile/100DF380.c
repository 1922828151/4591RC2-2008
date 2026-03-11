/*
 * func-name: ?GenerateExclusionListHandles@Light@@QAEXXZ
 * func-address: 0x100df380
 * callers: 0x100df7d0, 0x10138180
 * callees: 0x10011750, 0x100246c0, 0x100a1d10, 0x100e04a0
 */

void __thiscall Light::GenerateExclusionListHandles(char **this)
{
  Light *v1; // ebp
  char *v2; // esi
  _DWORD *v3; // edi
  char *v4; // ebx
  int *v5; // ebx
  int v6; // eax
  unsigned int i; // ebp
  char *v8; // esi
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int *v14; // eax
  char *v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  int v18; // eax
  char v19; // [esp+13h] [ebp-25h]
  unsigned int v20; // [esp+14h] [ebp-24h]
  int v21; // [esp+18h] [ebp-20h]
  int v23[2]; // [esp+20h] [ebp-18h] BYREF
  int v24; // [esp+28h] [ebp-10h] BYREF
  int v25; // [esp+30h] [ebp-8h] BYREF

  v1 = (Light *)this;
  v2 = this[361];
  v3 = this + 359;
  if ( this[360] > v2 )
    invalid_parameter_noinfo();
  v4 = (char *)v3[1];
  if ( (unsigned int)v4 > v3[2] )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase(v3, v23, (int)v3, v4, (int)v3, v2);
  v20 = 0;
  v5 = (int *)((char *)v1 + 336);
  v21 = 0;
LABEL_6:
  v6 = v5[1];
  if ( v6 && v20 < (v5[2] - v6) / 28 )
  {
    v19 = 0;
    for ( i = 0; ; ++i )
    {
      while ( 1 )
      {
        v8 = this[178];
        v9 = *((_DWORD *)v8 + 806);
        if ( !v9 || i >= (*((_DWORD *)v8 + 807) - v9) >> 2 )
        {
          if ( !v19 )
          {
            v16 = v5[1];
            if ( v16 > v5[2] )
              invalid_parameter_noinfo();
            v23[1] = v16;
            v17 = v21 + v16;
            if ( v17 > v5[2] || v17 < v5[1] )
              invalid_parameter_noinfo();
            sub_100246C0(v5, &v25, (int)v5, v17);
            --v20;
            v21 -= 28;
          }
          ++v20;
          v21 += 28;
          v1 = (Light *)this;
          goto LABEL_6;
        }
        v10 = *(_DWORD *)(*((_DWORD *)v8 + 806) + 4 * i);
        v23[0] = v10;
        v11 = sub_100E04A0(v20);
        if ( (unsigned __int8)std::operator==<char>(v10 + 444, v11) )
          break;
LABEL_21:
        ++i;
      }
      v12 = v3[1];
      v19 = 1;
      if ( v12 )
        v13 = (int)(v3[2] - v12) >> 2;
      else
        v13 = 0;
      if ( !v12 || v13 >= (int)(v3[3] - v12) >> 2 )
      {
        v15 = (char *)v3[2];
        if ( v12 > (unsigned int)v15 )
          invalid_parameter_noinfo();
        std::vector<Actor *>::insert(v3, &v24, v3, v15, v23);
        goto LABEL_21;
      }
      v14 = (int *)v3[2];
      *v14 = v10;
      v3[2] = v14 + 1;
    }
  }
  v18 = v5[1];
  if ( v18 )
    *((_DWORD *)v1 + 268) = (v5[2] - v18) / 28;
  else
    *((_DWORD *)v1 + 268) = 0;
}
