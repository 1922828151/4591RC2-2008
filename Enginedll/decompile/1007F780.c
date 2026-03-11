/*
 * func-name: ?CursorInWindow@Editor@@IAE_NPAVCGUIWindow@@@Z
 * func-address: 0x1007f780
 * callers: none
 * callees: 0x100d5750
 */

bool __thiscall Editor::CursorInWindow(Editor *this, struct CGUIWindow *a2)
{
  bool result; // al
  int v4; // ecx
  int v5; // edi
  int v6; // ecx

  result = CGUIWindow::GetVisible(a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 1);
    v5 = *(_DWORD *)(v4 + 704);
    if ( *(_BYTE *)(v4 + 177) )
      v5 = *(_DWORD *)(v4 + 708);
    result = 0;
    if ( (double)*(int *)(v4 + 692) <= *((float *)this + 516)
      && (double)(*(_DWORD *)(v4 + 700) + *(_DWORD *)(v4 + 692)) >= *((float *)this + 516) )
    {
      v6 = *(_DWORD *)(v4 + 696);
      if ( (double)v6 <= *((float *)this + 517) && (double)(v5 + v6) >= *((float *)this + 517) )
        return 1;
    }
  }
  return result;
}
