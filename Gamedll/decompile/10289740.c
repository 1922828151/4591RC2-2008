/*
 * func-name: sub_10289740
 * func-address: 0x10289740
 * callers: 0x10010901
 * callees: none
 */

int __thiscall sub_10289740(float *this)
{
  int v2; // eax
  int v3; // ecx
  float v4; // edx
  int (__thiscall *v5)(float *); // eax
  int result; // eax

  if ( !*((_BYTE *)this + 3912) )
  {
    v2 = *((_DWORD *)this + 173);
    v3 = *((_DWORD *)this + 174);
    this[946] = 800.0;
    v4 = *this;
    *((_DWORD *)this + 947) = v2;
    *((_DWORD *)this + 948) = v3;
    *((_DWORD *)this + 949) = v2;
    v5 = *(int (__thiscall **)(float *))(LODWORD(v4) + 32);
    *((_BYTE *)this + 3912) = 1;
    *((_DWORD *)this + 943) = 4;
    *((_BYTE *)this + 3868) = 1;
    this[950] = 0.0;
    result = v5(this);
    if ( *(_DWORD *)(*((_DWORD *)this + 976) + 548) == 1 )
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 979) + 136))(*((_DWORD *)this + 979), 1);
      return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 968) + 136))(*((_DWORD *)this + 968), 1);
    }
  }
  return result;
}
