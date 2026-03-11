/*
 * func-name: sub_1006E430
 * func-address: 0x1006e430
 * callers: 0x10073260
 * callees: 0x1006be00, 0x100dd410
 */

_DWORD *__thiscall sub_1006E430(_DWORD *this, int a2)
{
  int v2; // eax
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // esi
  const void *v7; // ebp
  char *v8; // ecx
  bool v9; // zf
  int v10; // esi
  rsize_t v11; // eax
  char *v12; // esi

  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
    v4 = (*(_DWORD *)(a2 + 8) - v2) >> 2;
  else
    v4 = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFF )
      sub_1006BE00();
    v5 = sub_100DD410(v4);
    this[1] = v5;
    this[2] = v5;
    this[3] = v5 + 4 * v4;
    v6 = *(_DWORD *)(a2 + 8);
    if ( *(_DWORD *)(a2 + 4) > v6 )
      invalid_parameter_noinfo();
    v7 = *(const void **)(a2 + 4);
    if ( (unsigned int)v7 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    v8 = (char *)this[1];
    v10 = (int)(v6 - (_DWORD)v7) >> 2;
    v9 = v10 == 0;
    v11 = 4 * v10;
    v12 = &v8[4 * v10];
    if ( !v9 )
      memmove_s(v8, v11, v7, v11);
    this[2] = v12;
  }
  return this;
}
