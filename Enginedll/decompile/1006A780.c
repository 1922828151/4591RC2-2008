/*
 * func-name: ?UseControlSoundScheme@CREComboBox@@UAEXPAVCREControl@@@Z
 * func-address: 0x1006a780
 * callers: none
 * callees: none
 */

void __thiscall CREComboBox::UseControlSoundScheme(CREComboBox *this, struct CREControl *a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v2 = *((_DWORD *)a2 + 363);
  if ( v2 )
    *((_DWORD *)this + 363) = v2;
  v3 = *((_DWORD *)a2 + 18);
  if ( v3 )
    *((_DWORD *)this + 18) = v3;
  v4 = *((_DWORD *)a2 + 16);
  if ( v4 )
    *((_DWORD *)this + 16) = v4;
  v5 = *((_DWORD *)a2 + 17);
  if ( v5 )
    *((_DWORD *)this + 17) = v5;
  v6 = *((_DWORD *)a2 + 19);
  if ( v6 )
    *((_DWORD *)this + 19) = v6;
  v7 = *((_DWORD *)a2 + 20);
  if ( v7 )
    *((_DWORD *)this + 20) = v7;
  *((float *)this + 40) = *((float *)a2 + 40);
}
