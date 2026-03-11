/*
 * func-name: ??0CBattleFieldDetailUI@@QAE@ABV0@@Z_0
 * func-address: 0x10217300
 * callers: 0x10008977
 * callees: 0x1000416f, 0x1000885f
 */

CBattleFieldDetailUI *__thiscall CBattleFieldDetailUI::CBattleFieldDetailUI(
        CBattleFieldDetailUI *this,
        const struct CBattleFieldDetailUI *a2)
{
  CTYDialog::CTYDialog(this, a2);
  *(_DWORD *)this = &CBattleFieldDetailUI::`vftable';
  *((_DWORD *)this + 968) = *((_DWORD *)a2 + 968);
  *((_DWORD *)this + 969) = *((_DWORD *)a2 + 969);
  *((_DWORD *)this + 970) = *((_DWORD *)a2 + 970);
  *((_DWORD *)this + 971) = *((_DWORD *)a2 + 971);
  *((_DWORD *)this + 972) = *((_DWORD *)a2 + 972);
  *((_BYTE *)this + 3892) = *((_BYTE *)a2 + 3892);
  *((_BYTE *)this + 3893) = *((_BYTE *)a2 + 3893);
  *((_BYTE *)this + 3894) = *((_BYTE *)a2 + 3894);
  *((float *)this + 974) = *((float *)a2 + 974);
  *((_DWORD *)this + 975) = *((_DWORD *)a2 + 975);
  *((_DWORD *)this + 976) = *((_DWORD *)a2 + 976);
  *((_DWORD *)this + 977) = *((_DWORD *)a2 + 977);
  *((_DWORD *)this + 978) = *((_DWORD *)a2 + 978);
  *((_DWORD *)this + 979) = *((_DWORD *)a2 + 979);
  *((_DWORD *)this + 980) = *((_DWORD *)a2 + 980);
  *((_DWORD *)this + 981) = *((_DWORD *)a2 + 981);
  *((_DWORD *)this + 982) = *((_DWORD *)a2 + 982);
  *((_DWORD *)this + 983) = *((_DWORD *)a2 + 983);
  sub_1000416F((int)a2 + 3936);
  sub_1000885F((int)a2 + 3976);
  *((_DWORD *)this + 998) = *((_DWORD *)a2 + 998);
  *((_DWORD *)this + 999) = *((_DWORD *)a2 + 999);
  *((_DWORD *)this + 1000) = *((_DWORD *)a2 + 1000);
  return this;
}
