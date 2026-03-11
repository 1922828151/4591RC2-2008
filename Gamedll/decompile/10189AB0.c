/*
 * func-name: ??0CStatusUI@@QAE@ABV0@@Z_0
 * func-address: 0x10189ab0
 * callers: 0x1000740f
 * callees: 0x1000b50a, 0x1000fe8e, 0x10010c99, 0x10011c89, 0x10014b46
 */

CStatusUI *__thiscall CStatusUI::CStatusUI(CStatusUI *this, const struct CStatusUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CStatusUI::`vftable';
  sub_10014B46((int)a2 + 3872);
  sub_10014B46((int)a2 + 3888);
  sub_10011C89((int)a2 + 3904);
  sub_10011C89((int)a2 + 3920);
  sub_1000B50A((int)a2 + 3936);
  sub_10011C89((int)a2 + 3952);
  sub_1000B50A((int)a2 + 3968);
  sub_10010C99((int)a2 + 3984);
  sub_1000FE8E((int)a2 + 4000);
  *((_DWORD *)this + 1004) = *((_DWORD *)a2 + 1004);
  *((_DWORD *)this + 1005) = *((_DWORD *)a2 + 1005);
  *((_DWORD *)this + 1006) = *((_DWORD *)a2 + 1006);
  *((_DWORD *)this + 1007) = *((_DWORD *)a2 + 1007);
  *((_DWORD *)this + 1008) = *((_DWORD *)a2 + 1008);
  *((_DWORD *)this + 1009) = *((_DWORD *)a2 + 1009);
  *((_DWORD *)this + 1010) = *((_DWORD *)a2 + 1010);
  *((_DWORD *)this + 1011) = *((_DWORD *)a2 + 1011);
  *((_DWORD *)this + 1012) = *((_DWORD *)a2 + 1012);
  *((_DWORD *)this + 1013) = *((_DWORD *)a2 + 1013);
  *((_DWORD *)this + 1014) = *((_DWORD *)a2 + 1014);
  *((_DWORD *)this + 1015) = *((_DWORD *)a2 + 1015);
  *((_DWORD *)this + 1016) = *((_DWORD *)a2 + 1016);
  *((_DWORD *)this + 1017) = *((_DWORD *)a2 + 1017);
  *((_DWORD *)this + 1018) = *((_DWORD *)a2 + 1018);
  *((_DWORD *)this + 1019) = *((_DWORD *)a2 + 1019);
  *((_DWORD *)this + 1020) = *((_DWORD *)a2 + 1020);
  return this;
}
