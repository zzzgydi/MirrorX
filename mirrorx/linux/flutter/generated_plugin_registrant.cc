//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <texture_render/texture_render_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) texture_render_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "TextureRenderPlugin");
  texture_render_plugin_register_with_registrar(texture_render_registrar);
}