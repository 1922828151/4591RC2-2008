/*
 * func-name: ?UpdateModifyRect@Terrain@@QAEXAAUtagRECT@@@Z
 * func-address: 0x1015cfc0
 * callers: 0x1015fcb0
 * callees: none
 */

void __thiscall Terrain::UpdateModifyRect(Terrain *this, struct tagRECT *a2)
{
  LONG top; // edx
  LONG right; // edx
  LONG bottom; // eax

  top = a2->top;
  if ( top < *((_DWORD *)this + 303) )
    *((_DWORD *)this + 303) = top;
  if ( a2->left < *((_DWORD *)this + 302) )
    *((_DWORD *)this + 302) = a2->left;
  right = a2->right;
  if ( right > *((_DWORD *)this + 304) )
    *((_DWORD *)this + 304) = right;
  bottom = a2->bottom;
  if ( bottom > *((_DWORD *)this + 305) )
    *((_DWORD *)this + 305) = bottom;
}
