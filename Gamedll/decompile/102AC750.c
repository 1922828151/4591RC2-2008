/*
 * func-name: sub_102AC750
 * func-address: 0x102ac750
 * callers: 0x10007c75
 * callees: none
 */

void __thiscall sub_102AC750(float *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  float v10; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)this + 16))(*(_DWORD *)this);
  v10 = this[42] + GDeltaTime;
  this[42] = v10;
  if ( v10 >= 1.0 )
  {
    v2 = *((_DWORD *)this + 49);
    v3 = *((_DWORD *)this + 50);
    this[42] = 0.0;
    v4 = *((_DWORD *)this + 47);
    *((_DWORD *)this + 45) = v2;
    v5 = *((_DWORD *)this + 48);
    *((_DWORD *)this + 46) = v3;
    v6 = *((_DWORD *)this + 55);
    *((_DWORD *)this + 44) = v5;
    v7 = *((_DWORD *)this + 58);
    *((_DWORD *)this + 43) = v4;
    *((_DWORD *)this + 51) = v6;
    v8 = *((_DWORD *)this + 57);
    *((_DWORD *)this + 52) = v7;
    v9 = *((_DWORD *)this + 56);
    this[47] = 0.0;
    this[48] = 0.0;
    this[49] = 0.0;
    this[50] = 0.0;
    *((_DWORD *)this + 53) = v8;
    *((_DWORD *)this + 54) = v9;
    this[55] = 0.0;
    this[56] = 0.0;
    this[57] = 0.0;
    this[58] = 0.0;
  }
}
