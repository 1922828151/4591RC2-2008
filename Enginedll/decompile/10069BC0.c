/*
 * func-name: ?UseControlSoundScheme@CREControl@@UAEXPAV1@@Z
 * func-address: 0x10069bc0
 * callers: none
 * callees: none
 */

void __thiscall CREControl::UseControlSoundScheme(CREControl *this, struct CREControl *a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = *((_DWORD *)a2 + 18);
  if ( v2 )
    *((_DWORD *)this + 18) = v2;
  v3 = *((_DWORD *)a2 + 16);
  if ( v3 )
    *((_DWORD *)this + 16) = v3;
  v4 = *((_DWORD *)a2 + 17);
  if ( v4 )
    *((_DWORD *)this + 17) = v4;
  v5 = *((_DWORD *)a2 + 19);
  if ( v5 )
    *((_DWORD *)this + 19) = v5;
  v6 = *((_DWORD *)a2 + 20);
  if ( v6 )
    *((_DWORD *)this + 20) = v6;
  *((float *)this + 40) = *((float *)a2 + 40);
}
