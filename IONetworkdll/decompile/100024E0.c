/*
 * func-name: ??8INET_Addr@IONetwork@Outpop@@QAE_NABV012@@Z
 * func-address: 0x100024e0
 * callers: 0x100024c0, 0x100440d0
 * callees: none
 */

bool __thiscall Outpop::IONetwork::INET_Addr::operator==(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // edx
  _DWORD *v4; // ecx
  int v5; // esi
  unsigned int v6; // eax
  unsigned __int8 *v7; // edx
  unsigned __int8 *v8; // ecx
  unsigned int v9; // eax
  unsigned __int8 *v10; // edx
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned __int8 *v13; // ecx
  int v14; // eax

  v2 = this[2];
  v3 = (_DWORD *)(a2 + 12);
  v4 = this + 3;
  if ( v2 < 4 )
  {
LABEL_4:
    if ( !v2 )
    {
LABEL_14:
      v14 = 0;
      return v14 == 0;
    }
  }
  else
  {
    while ( *v4 == *v3 )
    {
      v2 -= 4;
      ++v3;
      ++v4;
      if ( v2 < 4 )
        goto LABEL_4;
    }
  }
  v5 = *(unsigned __int8 *)v4 - *(unsigned __int8 *)v3;
  if ( !v5 )
  {
    v6 = v2 - 1;
    v7 = (unsigned __int8 *)v3 + 1;
    v8 = (unsigned __int8 *)v4 + 1;
    if ( !v6 )
      goto LABEL_14;
    v5 = *v8 - *v7;
    if ( !v5 )
    {
      v9 = v6 - 1;
      v10 = v7 + 1;
      v11 = v8 + 1;
      if ( !v9 )
        goto LABEL_14;
      v5 = *v11 - *v10;
      if ( !v5 )
      {
        v12 = v10 + 1;
        v13 = v11 + 1;
        if ( v9 == 1 )
          goto LABEL_14;
        v5 = *v13 - *v12;
        if ( !v5 )
          goto LABEL_14;
      }
    }
  }
  v14 = 1;
  if ( v5 <= 0 )
    return 0;
  return v14 == 0;
}
