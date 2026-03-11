/*
 * func-name: ?SetDropDownSound@CREComboBox@@UAEXPBD@Z
 * func-address: 0x1006a7e0
 * callers: none
 * callees: 0x10054c00
 */

void __thiscall CREComboBox::SetDropDownSound(CREComboBox *this, const char *a2)
{
  struct AudioDevice *v3; // eax
  int v4; // eax

  if ( !*((_DWORD *)this + 363) )
  {
    v3 = AudioDevice::Instance();
    v4 = (*(int (__thiscall **)(struct AudioDevice *))(*(_DWORD *)v3 + 12))(v3);
    *((_DWORD *)this + 363) = v4;
    (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v4 + 8))(v4, a2, 0);
  }
}
