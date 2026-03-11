/*
 * func-name: ?RemoveControl@CControlBox@@QAE_NPAVCREControl@@@Z
 * func-address: 0x101558e0
 * callers: none
 * callees: none
 */

char __thiscall CControlBox::RemoveControl(CControlBox *this, struct CREControl *a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  _DWORD *v8; // edi
  _DWORD *v9; // edx
  _DWORD *v10; // eax
  _DWORD *v11; // ecx

  v2 = 0;
  for ( i = 0; ; i += 12 )
  {
    v5 = *((_DWORD *)this + 134);
    if ( !v5 || v2 >= (*((_DWORD *)this + 135) - v5) / 12 )
      return 0;
    v6 = *((_DWORD *)this + 134);
    if ( !v6 || v2 >= (*((_DWORD *)this + 135) - v6) / 12 )
      invalid_parameter_noinfo();
    if ( *(struct CREControl **)(i + *((_DWORD *)this + 134)) == a2 )
      break;
    ++v2;
  }
  if ( a2 )
    (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)a2 + 4))(a2, 1);
  v7 = *((_DWORD *)this + 134);
  if ( v7 > *((_DWORD *)this + 135) )
    invalid_parameter_noinfo();
  v8 = (_DWORD *)(v7 + 12 * v2);
  if ( (unsigned int)v8 > *((_DWORD *)this + 135) || (unsigned int)v8 < *((_DWORD *)this + 134) )
    invalid_parameter_noinfo();
  v9 = (_DWORD *)*((_DWORD *)this + 135);
  v10 = v8 + 3;
  if ( v8 + 3 != v9 )
  {
    v11 = v8;
    do
    {
      *v11 = *v10;
      v11[1] = v10[1];
      v11[2] = v10[2];
      v10 += 3;
      v11 += 3;
    }
    while ( v10 != v9 );
  }
  *((_DWORD *)this + 135) -= 12;
  return 1;
}
