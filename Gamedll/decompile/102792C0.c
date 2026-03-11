/*
 * func-name: ?PowerTransportUIEvent@CPowerTransportUI@@CGXPAVCREDialog@@IHPAVCREControl@@IJ@Z_0
 * func-address: 0x102792c0
 * callers: 0x10011eaa
 * callees: 0x102c9ea8
 */

void __stdcall CPowerTransportUI::PowerTransportUIEvent(
        struct CREDialog *a1,
        unsigned int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  int v6; // eax

  v6 = _RTDynamicCast(a1, 0, &CREDialog `RTTI Type Descriptor', &CPowerTransportUI `RTTI Type Descriptor');
  if ( v6 && a2 == 24 )
  {
    if ( a5 )
      *(float *)(v6 + 3884) = *(float *)&GSeconds;
  }
}
