<?php
declare(strict_types=1);

/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalconphp.com>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */

namespace Phalcon\Test\Unit\Mvc\View;

use UnitTester;

/**
 * Class GetActiveRenderPathCest
 */
class GetActiveRenderPathCest
{
    /**
     * Tests Phalcon\Mvc\View :: getActiveRenderPath()
     *
     * @param UnitTester $I
     *
     * @author Phalcon Team <team@phalconphp.com>
     * @since  2018-11-13
     */
    public function mvcViewGetActiveRenderPath(UnitTester $I)
    {
        $I->wantToTest('Mvc\View - getActiveRenderPath()');
        $I->skipTest('Need implementation');
    }
}
