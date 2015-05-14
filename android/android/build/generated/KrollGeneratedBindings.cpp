/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/z7/vjjlnzx963dfztzclt28k_s00000gp/T/flavio.destefano/raven-titanium-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/z7/vjjlnzx963dfztzclt28k_s00000gp/T/flavio.destefano/raven-titanium-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ti.raven.RavenTitaniumModule.h"


#line 13 "/private/var/folders/z7/vjjlnzx963dfztzclt28k_s00000gp/T/flavio.destefano/raven-titanium-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class RavenTitaniumBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
RavenTitaniumBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
RavenTitaniumBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 28,
      MAX_WORD_LENGTH = 28,
      MIN_HASH_VALUE = 28,
      MAX_HASH_VALUE = 28
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 15 "/private/var/folders/z7/vjjlnzx963dfztzclt28k_s00000gp/T/flavio.destefano/raven-titanium-generated/KrollGeneratedBindings.gperf"
      {"ti.raven.RavenTitaniumModule", ::ti::raven::RavenTitaniumModule::bindProxy, ::ti::raven::RavenTitaniumModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/private/var/folders/z7/vjjlnzx963dfztzclt28k_s00000gp/T/flavio.destefano/raven-titanium-generated/KrollGeneratedBindings.gperf"

