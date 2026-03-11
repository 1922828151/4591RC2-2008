/*
 * func-name: ?RefreshControlByZOrder@CREDialog@@QAEXXZ
 * func-address: 0x100c5b70
 * callers: none
 * callees: 0x100d1fe0, 0x100d29b0, 0x101a2500
 */

void __thiscall CREDialog::RefreshControlByZOrder(CREDialog *this)
{
  int *v1; // eax
  int *v2; // edx
  int v3; // esi
  int v5; // ebx
  bool v6; // cc
  int v7; // ebp
  int *v8; // esi
  int *v9; // ebx
  int *v10; // esi
  _DWORD *v11; // ecx
  int i; // esi
  int v13; // [esp+10h] [ebp-28h] BYREF
  int v14; // [esp+14h] [ebp-24h] BYREF
  int v15; // [esp+1Ch] [ebp-1Ch] BYREF
  void *v16; // [esp+20h] [ebp-18h]
  int *v17; // [esp+24h] [ebp-14h]
  int v18; // [esp+28h] [ebp-10h]
  int v19; // [esp+34h] [ebp-4h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v5 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v6 = *((_DWORD *)this + 192) <= 0;
  v19 = 0;
  if ( !v6 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(*((_DWORD *)this + 191) + 4 * v5);
      v13 = v7;
      if ( v1 && v2 - v1 < (unsigned int)((v3 - (int)v1) >> 2) )
      {
        *v2++ = v7;
        v17 = v2;
      }
      else
      {
        v8 = v2;
        if ( v1 > v2 )
          invalid_parameter_noinfo();
        sub_100D1FE0((int)&v14, (int)&v15, v8, (int)&v13);
        v2 = v17;
      }
      v1 = (int *)v16;
      if ( ++v5 >= *((_DWORD *)this + 192) )
        break;
      v3 = v18;
    }
  }
  v9 = v2;
  if ( v1 > v2 )
  {
    invalid_parameter_noinfo();
    v2 = v17;
    v1 = (int *)v16;
  }
  v10 = v1;
  if ( v1 > v2 )
    invalid_parameter_noinfo();
  sub_100D29B0(v10, v9, v9 - v10, sub_100A3120);
  v11 = v16;
  for ( i = 0; i < *((_DWORD *)this + 192); ++i )
  {
    if ( !v11 || i >= (unsigned int)(v17 - v11) )
    {
      invalid_parameter_noinfo();
      v11 = v16;
    }
    if ( i >= 0 && i < *((_DWORD *)this + 192) )
    {
      *(_DWORD *)(*((_DWORD *)this + 191) + 4 * i) = v11[i];
      v11 = v16;
    }
  }
  if ( v11 )
    operator delete(v11);
}
