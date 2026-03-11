/*
 * func-name: ??4CDropBagUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10147fe0
 * callers: 0x10012c6a
 * callees: 0x1000c06d, 0x1000c252, 0x10014790
 */

int __thiscall CDropBagUI::operator=(int this, int a2)
{
  CTYDialog::operator=(a2);
  *(_DWORD *)(this + 3872) = *(_DWORD *)(a2 + 3872);
  *(_DWORD *)(this + 3876) = *(_DWORD *)(a2 + 3876);
  *(_DWORD *)(this + 3880) = *(_DWORD *)(a2 + 3880);
  sub_1000C252(a2 + 3884);
  sub_1000C252(a2 + 3900);
  sub_1000C252(a2 + 3916);
  sub_1000C252(a2 + 3932);
  *(_DWORD *)(this + 3948) = *(_DWORD *)(a2 + 3948);
  *(_DWORD *)(this + 3952) = *(_DWORD *)(a2 + 3952);
  *(_DWORD *)(this + 3956) = *(_DWORD *)(a2 + 3956);
  *(_DWORD *)(this + 3960) = *(_DWORD *)(a2 + 3960);
  *(_DWORD *)(this + 3964) = *(_DWORD *)(a2 + 3964);
  *(_DWORD *)(this + 3968) = *(_DWORD *)(a2 + 3968);
  *(_DWORD *)(this + 3972) = *(_DWORD *)(a2 + 3972);
  *(_DWORD *)(this + 3976) = *(_DWORD *)(a2 + 3976);
  *(_BYTE *)(this + 3980) = *(_BYTE *)(a2 + 3980);
  *(_DWORD *)(this + 3984) = *(_DWORD *)(a2 + 3984);
  sub_1000C06D(a2 + 3988);
  sub_1000C252(a2 + 4004);
  if ( this + 4020 != a2 + 4020 )
    sub_10014790(a2 + 4020);
  *(_DWORD *)(this + 4060) = *(_DWORD *)(a2 + 4060);
  *(_DWORD *)(this + 4064) = *(_DWORD *)(a2 + 4064);
  *(_DWORD *)(this + 4068) = *(_DWORD *)(a2 + 4068);
  return this;
}
