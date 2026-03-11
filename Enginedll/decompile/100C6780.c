/*
 * func-name: ?BeginMotion@CTYDialog@@UAEXXZ
 * func-address: 0x100c6780
 * callers: none
 * callees: 0x1006d030, 0x100d2e50
 */

void __thiscall CTYDialog::BeginMotion(CTYDialog *this)
{
  void (__stdcall *v2)(CTYDialog *, int, _DWORD, _DWORD, _DWORD, _DWORD); // eax
  char *v3; // esi
  char *v4; // ebx
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int i; // [esp+18h] [ebp-18h]
  int v12; // [esp+1Ch] [ebp-14h] BYREF
  int v13; // [esp+20h] [ebp-10h]
  int v14; // [esp+24h] [ebp-Ch]
  int v15; // [esp+28h] [ebp-8h]
  int v16; // [esp+2Ch] [ebp-4h]

  v2 = (void (__stdcall *)(CTYDialog *, int, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)this + 184);
  *((_DWORD *)this + 944) = 2;
  if ( v2 )
    v2(this, 5121, 0, 0, *((_DWORD *)this + 943), 0);
  if ( (*((_BYTE *)this + 3772) & 2) != 0 )
  {
    v3 = (char *)*((_DWORD *)this + 957);
    if ( *((_DWORD *)this + 956) > (unsigned int)v3 )
      invalid_parameter_noinfo();
    v4 = (char *)*((_DWORD *)this + 956);
    if ( (unsigned int)v4 > *((_DWORD *)this + 957) )
      invalid_parameter_noinfo();
    if ( v4 != v3 )
      *((_DWORD *)this + 957) = sub_1006D030(v3, *((char **)this + 957), v4);
    v5 = *((_DWORD *)this + 192);
    v6 = 0;
    for ( i = v5; v6 < v5; ++v6 )
    {
      if ( v6 >= 0 && v6 < *((_DWORD *)this + 192) )
      {
        v7 = *(_DWORD **)(*((_DWORD *)this + 191) + 4 * v6);
        if ( v7 )
        {
          v8 = v7[42];
          v13 = v7[41];
          v14 = v8;
          v9 = v7[43] - v13;
          v16 = v7[44] - v8;
          v15 = v9;
          v12 = v6;
          sub_100D2E50((int)this + 3820, &v12);
          v5 = i;
        }
      }
    }
    v10 = *((_DWORD *)this + 176);
    *((_DWORD *)this + 953) = *((_DWORD *)this + 175);
    *((_DWORD *)this + 954) = v10;
  }
  if ( (*((_BYTE *)this + 3772) & 0x20) != 0 )
    *((float *)this + 23) = 0.0;
}
