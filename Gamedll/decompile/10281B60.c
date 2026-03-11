/*
 * func-name: ?ClearSelection@CRobotRoofUI@@AAEXXZ_0
 * func-address: 0x10281b60
 * callers: 0x1000b230
 * callees: 0x10001e60
 */

void __thiscall CRobotRoofUI::ClearSelection(CRobotRoofUI *this)
{
  int v2; // eax
  CREStatic *v3; // ecx

  v2 = *((_DWORD *)this + 998);
  if ( v2 && *((_DWORD *)this + 1003) != -1 )
    CRobotRoofUI::UnSelectCell(v2, *((_DWORD *)this + 1003));
  v3 = (CREStatic *)*((_DWORD *)this + 972);
  *((_DWORD *)this + 1007) = -1;
  *((_DWORD *)this + 998) = 0;
  CREStatic::SetText(v3, word_10322F2C);
}
