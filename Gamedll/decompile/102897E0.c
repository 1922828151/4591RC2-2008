/*
 * func-name: sub_102897E0
 * func-address: 0x102897e0
 * callers: 0x10009e62
 * callees: none
 */

void __thiscall sub_102897E0(float *this)
{
  int v2; // eax
  int v3; // ecx
  float v4; // edx
  void (__thiscall *v5)(float *); // eax

  if ( *((_BYTE *)this + 3912) )
  {
    v2 = *((_DWORD *)this + 173);
    v3 = *((_DWORD *)this + 174);
    this[946] = 800.0;
    v4 = *this;
    *((_DWORD *)this + 947) = v2;
    *((_DWORD *)this + 948) = v3;
    *((_DWORD *)this + 949) = v2;
    v5 = *(void (__thiscall **)(float *))(LODWORD(v4) + 32);
    *((_BYTE *)this + 3912) = 0;
    *((_DWORD *)this + 943) = 4;
    *((_BYTE *)this + 3868) = 1;
    this[950] = NAN;
    v5(this);
    CTYDialog::SetHasInput((CTYDialog *)this, 0);
  }
}
