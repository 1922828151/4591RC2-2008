/*
 * func-name: ?GetProgressPicRect@CProgressBar@@QAE?AUtagRECT@@XZ
 * func-address: 0x101504c0
 * callers: none
 * callees: none
 */

struct tagRECT *__thiscall CProgressBar::GetProgressPicRect(CProgressBar *this, struct tagRECT *__return_ptr retstr)
{
  LONG *v2; // ecx
  struct tagRECT *result; // eax
  LONG v4; // edx
  LONG v5; // ecx

  v2 = (LONG *)*((_DWORD *)this + 175);
  result = retstr;
  if ( v2 )
  {
    retstr->left = v2[3];
    retstr->top = v2[4];
    v4 = v2[5];
    v5 = v2[6];
    retstr->right = v4;
    retstr->bottom = v5;
  }
  else
  {
    retstr->left = 0;
    retstr->top = 0;
    retstr->right = 0;
    retstr->bottom = 0;
  }
  return result;
}
