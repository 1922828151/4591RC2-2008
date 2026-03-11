/*
 * func-name: ??0CDropBagUI@@QAE@ABV0@@Z_0
 * func-address: 0x10147db0
 * callers: 0x10017f6c
 * callees: 0x10007adb, 0x1000aefc, 0x1000b50a
 */

CDropBagUI *__thiscall CDropBagUI::CDropBagUI(CDropBagUI *this, const struct CDropBagUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CDropBagUI::`vftable';
  *((_DWORD *)this + 968) = *((_DWORD *)a2 + 968);
  *((_DWORD *)this + 969) = *((_DWORD *)a2 + 969);
  *((_DWORD *)this + 970) = *((_DWORD *)a2 + 970);
  sub_1000B50A((int)a2 + 3884);
  sub_1000B50A((int)a2 + 3900);
  sub_1000B50A((int)a2 + 3916);
  sub_1000B50A((int)a2 + 3932);
  *((_DWORD *)this + 987) = *((_DWORD *)a2 + 987);
  *((_DWORD *)this + 988) = *((_DWORD *)a2 + 988);
  *((_DWORD *)this + 989) = *((_DWORD *)a2 + 989);
  *((_DWORD *)this + 990) = *((_DWORD *)a2 + 990);
  *((_DWORD *)this + 991) = *((_DWORD *)a2 + 991);
  *((_DWORD *)this + 992) = *((_DWORD *)a2 + 992);
  *((_DWORD *)this + 993) = *((_DWORD *)a2 + 993);
  *((_DWORD *)this + 994) = *((_DWORD *)a2 + 994);
  *((_BYTE *)this + 3980) = *((_BYTE *)a2 + 3980);
  *((_DWORD *)this + 996) = *((_DWORD *)a2 + 996);
  sub_10007ADB((int)a2 + 3988);
  sub_1000B50A((int)a2 + 4004);
  sub_1000AEFC((int)a2 + 4020);
  *((_DWORD *)this + 1015) = *((_DWORD *)a2 + 1015);
  *((_DWORD *)this + 1016) = *((_DWORD *)a2 + 1016);
  *((_DWORD *)this + 1017) = *((_DWORD *)a2 + 1017);
  return this;
}
