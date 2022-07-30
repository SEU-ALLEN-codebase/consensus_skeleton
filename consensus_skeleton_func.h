/* consensus_skeleton_func.h
 * a plugin to merge multiple neurons by generating a consensus skeleton
 * 2012-05-02 : by Yinan Wan
 */
 
#ifndef __CONSENSUS_SKELETON_FUNC_H__
#define __CONSENSUS_SKELETON_FUNC_H__

#include <v3d_interface.h>

int consensus_swc_menu(V3DPluginCallback2 &callback,QWidget * parent);
bool vote_map_func(const V3DPluginArgList & input, V3DPluginArgList & output, V3DPluginCallback2 &callback);
bool dark_pruning_func(const V3DPluginArgList & input, V3DPluginArgList & output,V3DPluginCallback2 &callback);
bool consensus_swc_func(const V3DPluginArgList & input, V3DPluginArgList & output,V3DPluginCallback2 &callback);
bool median_swc_func(const V3DPluginArgList & input, V3DPluginArgList & output);
bool average_node_position_func(const V3DPluginArgList & input, V3DPluginArgList & output);
int median_swc_menu(V3DPluginCallback2 &callback, QWidget *parent);
int average_node_position_menu(V3DPluginCallback2 &callback, QWidget *parent);
bool post_consensus_trimming(const V3DPluginArgList & input, V3DPluginArgList & output);
void printHelp();

#endif

