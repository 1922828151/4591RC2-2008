/*
 * func-name: ?GetProgressBarRect@CProgressBar@@QAE?AUtagRECT@@XZ
 * func-address: 0x10150430
 * callers: none
 * callees: none
 */

struct tagRECT *__thiscall CProgressBar::GetProgressBarRect(CProgressBar *this, struct tagRECT *__return_ptr retstr)
{
  LONG *v2; // ecx
  struct tagRECT *result; // eax
  LONG v4; // edx
  LONG v5; // ecx

  v2 = (LONG *)*((_DWORD *)this + 185);
  result = retstr;
  if ( v2 )
  {
    retstr->left = *v2;
    retstr->top = v2[1];
    v4 = v2[2];
    v5 = v2[3];
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
