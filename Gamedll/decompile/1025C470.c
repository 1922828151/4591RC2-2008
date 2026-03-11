/*
 * func-name: sub_1025C470
 * func-address: 0x1025c470
 * callers: 0x1000b799
 * callees: 0x102c99de, 0x102c9d62, 0x102c9d98, 0x102c9e3e, 0x102c9ea2, 0x102c9ea8, 0x102ca0d8
 */

void __thiscall sub_1025C470(CREDialog *this)
{
  _DWORD *v2; // eax
  int v3; // edi
  struct CREControl *Control; // eax
  void *v5; // [esp-Ch] [ebp-B8h]
  _BYTE v6[132]; // [esp+18h] [ebp-94h] BYREF
  int v7; // [esp+A8h] [ebp-4h]

  *((_DWORD *)this + 969) = 3;
  *((_DWORD *)this + 970) = 3;
  *((_DWORD *)this + 968) = operator new(0x54u);
  v2 = operator new(0x10u);
  v3 = 0;
  if ( v2 )
  {
    v2[1] = 0;
    v2[2] = 0;
    v2[3] = 0;
  }
  else
  {
    v2 = 0;
  }
  *((_DWORD *)this + 974) = v2;
  v7 = -1;
  `eh vector constructor iterator'(v6, 0x1Cu, 3, std::string::string, std::string::~string);
  v5 = (void *)*((_DWORD *)this + 968);
  v7 = 1;
  memset(v5, 0, 0x54u);
  do
  {
    Control = CREDialog::GetControl(this, v3 + 1, 0x16u);
    *(_DWORD *)(*((_DWORD *)this + 968) + 4 * v3++) = _RTDynamicCast(
                                                        Control,
                                                        0,
                                                        &CREControl `RTTI Type Descriptor',
                                                        &CPictureLabel `RTTI Type Descriptor');
  }
  while ( v3 < 21 );
  *((_DWORD *)this + 973) = 6;
  v7 = -1;
  `eh vector destructor iterator'(v6, 0x1Cu, 3, std::string::~string);
}
