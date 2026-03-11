/*
 * func-name: sub_10026B60
 * func-address: 0x10026b60
 * callers: 0x1002e5e0, 0x100de040
 * callees: 0x1001a380, 0x1001c770, 0x1001d9b0, 0x1001ddb0, 0x100208d0, 0x10023a80, 0x101a2500
 */

int __thiscall sub_10026B60(int this, int a2)
{
  char *v4; // ebp
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  char *v12; // ecx
  char *v13; // eax
  unsigned int v14; // eax
  char *v15; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = *(char **)(a2 + 4);
  if ( !v4 || (v5 = (*(_DWORD *)(a2 + 8) - (int)v4) / 72) == 0 )
  {
    sub_10023A80(this);
    return this;
  }
  v7 = *(_DWORD *)(this + 4);
  if ( v7 )
    v8 = (*(_DWORD *)(this + 8) - v7) / 72;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v11 = (*(_DWORD *)(this + 12) - v7) / 72;
    else
      v11 = 0;
    if ( v5 > v11 )
    {
      if ( v7 )
        operator delete(*(void **)(this + 4));
      v14 = sub_1001A380((_DWORD *)a2);
      if ( !sub_1001D9B0((_DWORD *)this, v14) )
        return this;
      v12 = *(char **)(this + 4);
      v13 = *(char **)(a2 + 4);
    }
    else
    {
      v15 = &v4[72 * sub_1001A380((_DWORD *)this)];
      sub_1001DDB0(v4, v15, v7);
      v12 = *(char **)(this + 8);
      v13 = v15;
    }
    *(_DWORD *)(this + 8) = sub_100208D0(v13, *(char **)(a2 + 8), v12);
    return this;
  }
  sub_1001C770(v4, *(char **)(a2 + 8), v7);
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    v10 = *(_DWORD *)(this + 4) + 72 * ((*(_DWORD *)(a2 + 8) - v9) / 72);
  else
    v10 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 8) = v10;
  return this;
}
