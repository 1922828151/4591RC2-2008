/*
 * func-name: sub_101B8F10
 * func-address: 0x101b8f10
 * callers: 0x101b8240
 * callees: none
 */

void __cdecl sub_101B8F10()
{
  if ( CREIMEEditBox::s_Locale )
  {
    free(CREIMEEditBox::s_Locale);
    CREIMEEditBox::s_Locale = 0;
  }
  dword_1123E204 = 0;
  dword_1123E208 = 0;
}
