/*
 * func-name: sub_100116A0
 * func-address: 0x100116a0
 * callers: 0x10002c50, 0x100042c0, 0x10005610, 0x10006230, 0x10006780, 0x10011f00, 0x10011fe0, 0x1002d4c0, 0x1002d610, 0x100373d0, 0x10038ca0, 0x100412c0, 0x100431a0, 0x10045740, 0x1004b830, 0x1004bcb0, 0x1004f690, 0x100833b0, 0x10083e50, 0x10096800, 0x10097ea0, 0x100d35b0, 0x100d36c0, 0x100d37d0, 0x100d38e0, 0x100d39f0, 0x100d3b00, 0x100dbc90, 0x100dcbd0, 0x100debd0, 0x100e2550, 0x100e3c30, 0x100e3f70, 0x100e7390, 0x1010a1c0, 0x1010a210, 0x1010a260, 0x1010a2b0, 0x1010a300, 0x1010a350, 0x1010c190, 0x10126010, 0x1017b040, 0x1017b280, 0x1017d530, 0x1017d680, 0x1017dba0, 0x1017e0a0
 * callees: 0x1000cd00, 0x1000ff60
 */

_DWORD *__thiscall sub_100116A0(_DWORD *this, void *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  CREControl *v5; // edi
  _DWORD *result; // eax
  CREControl *v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 28;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 28 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = (_DWORD *)sub_1000CD00(v5, 1, (int)a2);
    this[2] = (char *)v5 + 28;
  }
  else
  {
    v7 = (CREControl *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_1000FF60(this, &v8, this, v7, a2);
  }
  return result;
}
