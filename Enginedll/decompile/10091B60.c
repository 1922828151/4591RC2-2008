/*
 * func-name: sub_10091B60
 * func-address: 0x10091b60
 * callers: 0x1008c0e0, 0x1008c1a0, 0x1008c260, 0x1008c320, 0x1008c3e0, 0x1008ce00, 0x1008de00, 0x1008e080, 0x10169d00
 * callees: 0x1000d550, 0x10076ef0, 0x1007e290
 */

_DWORD *__thiscall sub_10091B60(_DWORD *this, _DWORD *a2, int a3)
{
  unsigned int v4; // ebx
  _DWORD *v5; // edi
  _DWORD *v6; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ebp
  _DWORD *v11; // ebp
  _DWORD *v12; // eax
  _DWORD *v15; // [esp+2Ch] [ebp+4h]

  v4 = 0;
  v5 = this + 2;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  v6 = this + 6;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  this[11] = 0;
  this[12] = 0;
  this[13] = 0;
  this[19] = 0;
  this[25] = 0;
  this[26] = 0;
  std::vector<Actor *>::operator=((int)v6, (int)a2);
  *this = a3;
  if ( a3 || !std::vector<Model *>::size(a2) )
    return this;
  do
  {
    v8 = a2[1];
    if ( !v8 || v4 >= (a2[2] - v8) >> 2 )
      invalid_parameter_noinfo();
    sub_1007E290(v5, (void *)(*(_DWORD *)(a2[1] + 4 * v4) + 868));
    v9 = a2[1];
    if ( !v9 || v4 >= (a2[2] - v9) >> 2 )
      invalid_parameter_noinfo();
    v10 = v5[2];
    v15 = (_DWORD *)(4 * v4 + a2[1]);
    if ( v5[1] > v10 )
      invalid_parameter_noinfo();
    if ( v10 - 64 > v5[2] || v10 - 64 < v5[1] )
      invalid_parameter_noinfo();
    v11 = (_DWORD *)(v10 - 64);
    if ( (unsigned int)v11 >= v5[2] )
      invalid_parameter_noinfo();
    v12 = (_DWORD *)(*v15 + 856);
    v11[12] = *v12;
    v11[13] = v12[1];
    v11[14] = v12[2];
    ++v4;
  }
  while ( v4 < std::vector<Model *>::size(a2) );
  return this;
}
