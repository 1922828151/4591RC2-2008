/*
 * func-name: sub_101B8F40
 * func-address: 0x101b8f40
 * callers: 0x101b82d0
 * callees: none
 */

void __cdecl sub_101B8F40()
{
  if ( CMLIMEEditBox::s_Locale )
  {
    free(CMLIMEEditBox::s_Locale);
    CMLIMEEditBox::s_Locale = 0;
  }
  dword_1123E244 = 0;
  dword_1123E248 = 0;
}
