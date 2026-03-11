/*
 * func-name: sub_10057080
 * func-address: 0x10057080
 * callers: 0x10055990, 0x10057160, 0x1005b6b0, 0x1005cb50
 * callees: 0x10076ef0
 */

char __cdecl sub_10057080(int a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  unsigned int v9; // ebp
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // esi
  unsigned int v13; // [esp+Ch] [ebp+4h]

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
    v4 = (*(_DWORD *)(a1 + 8) - v3) >> 2;
  else
    v4 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 )
    v6 = (*(_DWORD *)(a2 + 8) - v5) >> 2;
  else
    v6 = 0;
  if ( v4 != v6 )
    return 0;
  v13 = 0;
  if ( !std::vector<Model *>::size(a1) )
    return 1;
  while ( 1 )
  {
    v9 = 0;
    if ( std::vector<Model *>::size(a2) )
      break;
LABEL_19:
    if ( ++v13 >= std::vector<Model *>::size(a1) )
      return 1;
  }
  while ( 1 )
  {
    v10 = *(_DWORD *)(a1 + 4);
    if ( !v10 || v13 >= (*(_DWORD *)(a1 + 8) - v10) >> 2 )
      invalid_parameter_noinfo();
    v11 = *(_DWORD *)(a2 + 4);
    v12 = (_DWORD *)(4 * v13 + *(_DWORD *)(a1 + 4));
    if ( !v11 || v9 >= (*(_DWORD *)(a2 + 8) - v11) >> 2 )
      invalid_parameter_noinfo();
    if ( *v12 != *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v9) )
      return 0;
    if ( ++v9 >= std::vector<Model *>::size(a2) )
      goto LABEL_19;
  }
}
