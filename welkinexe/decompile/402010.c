/*
 * func-name: sub_402010
 * func-address: 0x402010
 * callers: 0x401014
 * callees: 0x401710
 */

LRESULT __stdcall sub_402010(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  tagPAINTSTRUCT Paint; // [esp+Ch] [ebp-44h] BYREF

  if ( Msg <= 0x10 )
  {
    if ( Msg == 16 )
    {
      dword_40612C();
      exit(0);
    }
    if ( Msg != 2 )
    {
      if ( Msg == 15 )
      {
        BeginPaint(hWnd, &Paint);
        EndPaint(hWnd, &Paint);
      }
      return dword_406938(hWnd, Msg, wParam, lParam);
    }
    goto LABEL_12;
  }
  if ( Msg == 18 )
  {
LABEL_12:
    dword_40612C();
    PostQuitMessage(0);
    return dword_406938(hWnd, Msg, wParam, lParam);
  }
  if ( Msg == 273 )
  {
    if ( (_WORD)wParam != 105 )
      return DefWindowProcW(hWnd, 0x111u, wParam, lParam);
    DestroyWindow(hWnd);
  }
  return dword_406938(hWnd, Msg, wParam, lParam);
}
