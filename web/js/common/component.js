(function(){
    var component = {};
    component.toggle = function($obj){
        $obj.append($('<span>开</span><span class="active">关</span>'))
        $obj.attr('data-value','on');
        $('span', $obj).click(function(){
            $('.active', $obj).removeClass('active');
            $(this).addClass('active');
            var value = $obj.attr('data-value')
            value = (value === 'on') ? 'off' : 'on';
            $obj.attr('data-value', value);
        });        
    }
    /**
     *  Related pane, click one section, only its related pane shows.
     *  @param {array} the related panes, {trigger: $clickable, pane: $relatedPane}
     */
    component.relatedPane = function(relatePanes) {
        var duration = 600;
        var len = relatePanes.length;
        for (var i = 0; i < len; i++) {            
            (function(){
                var obj = relatePanes[i];
                var trigger = obj.trigger; 
                trigger.click(function(){
                    for (var j = 0; j < len; j++) {
                        var tmpTrigger = relatePanes[j].trigger;
                        tmpTrigger.removeClass('active');
                    }
                    trigger.addClass('active');
                    var curPane = obj.pane;                
                    if (!curPane.hasClass('active')) {
                        for (var k = 0; k < len; k++) {
                            var pane = relatePanes[k].pane;
                            pane.removeClass('active');
                            pane.hide(duration);
                        }
                        curPane.addClass('active');
                        curPane.show(duration);
                    }
                });
            })();
        }
    }

    if ('undefined' === typeof(SUV)) {
        SUV = {};
    }
    SUV.component = component;
})();